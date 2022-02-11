# 3-3
import imageio

def sortFirstInList(val): #Function that returns the first element
    return val[0]

# Opening Image

img = imageio.imread('carry_grant.jpg')
width, height = img.shape

#List of bins
bin_list = []
for i in range (0,256):
    bin_list.append(i)



# List of pixels
pixel_list = []

for i in range (0,width):
    for j in range (0,height):
        pixel_list.append(img[i][j])


# Arranging the intensity of each pixel
d = {}

for intensity in pixel_list:
    d[intensity] = d.get(intensity,0)+1

    
intensity_freq = []

for key, value in d.items():
    intensity_freq.append((key , value))
    

intensity_freq.sort(key = sortFirstInList, reverse = False)

cont = 0

for i in range (0,256):
    if i > ((len(intensity_freq))-1):
        intensity_freq.insert(cont,0)
        intensity_freq[cont]=(0,0)
    elif intensity_freq[cont][0] != i:
        intensity_freq.insert(cont,0)
        intensity_freq[cont]=(0,0)
    cont += 1
    
   

#List of percentage
percentage_list = []

for i in range (0,256):
    percentage_list.append(100 * i / (width*height))



# Getting all the data together

histogram = [intensity_freq, percentage_list]

print('bin  '+'  count  ' +'   percentage')

for k in range(len(histogram[0])):
    for v in range(len(histogram)):
        print(histogram[v][k], end = '   ')
    print()
