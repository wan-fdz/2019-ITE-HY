# 3-2
import imageio

img = imageio.imread('carry_grant.jpg')
width, height = img.shape

# Calculating the mean
total = 0
for i in range (0,width):
    for j in range (0,height):
        total += img[i][j]
        
mean = total / (width*height)

print('The mean is: '+ str(mean))


# Calculating the variance 
numer = 0
mean = float(mean)
for i in range (0,width):
    for j in range (0,height):
        numer += ((img[i][j]) - mean)*((img[i][j]) - mean)

var = numer / (width*height)
print('The variance is: ' + str(var))

# Calculating the maximum, minimum and median

pixel_list= []

for i in range (0,width):
    for j in range (0,height):
        pixel_list.append(img[i][j])

pixel_list.sort(reverse = False)

if ((width*height)) % 2 == 0:
    min_val = pixel_list[0]
    max_val = pixel_list[(width*height)-1]
    median_val = (pixel_list[int((len(pixel_list)/2)-1)] + pixel_list[int(len(pixel_list)/2)])/2
    print('The minimum value is: ' + str(min_val))
    print('The maximum value is: ' + str(max_val))
    print('The median value is: ' + str(median_val))
else:
    min_val = pixel_list[0]
    max_val = pixel_list[(width*height)-1]
    median_val = pixel_list[len(pixel_list)/2]
    print('The minimum value is: ' + str(min_val))
    print('The maximum value is: ' + str(max_val))
    print('The median value is: ' + str(median_val))
