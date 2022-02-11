#File I/O
import imageio
import math

def sortFirstInList(val): #Function that returns the first element
    return val[0]

# Opening Image

img = imageio.imread('HDR.jpg')
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


# Equalization


pn = []
for n in range (0,256):
    pn.append((intensity_freq[n][1])/(width*height))


pixel_g=[]

for i in pixel_list:
    suma=0
    for j in range(0,i):
        suma+=pn[j]
    pixel_g.append(math.floor((256-1)*suma))
    
print(pixel_g==pixel_list)

# Creating new image

cont1 = 0
for i in range (0,width):
    for j in range (0,height):
        img[i][j]= pixel_g[cont1]
        cont1 += 1

imageio.imwrite('ejemplo.jpg',img)

#------------------ Preparing for second histogram -----------------------

img1 = imageio.imread('ejemplo.jpg')
width, height = img1.shape
# List of pixels
pixel_list2 = []

for i in range (0,width):
    for j in range (0,height):
        pixel_list2.append(img1[i][j])


# Arranging the intensity of each pixel
d2 = {}

for intensity2 in pixel_list2:
    d2[intensity2] = d2.get(intensity2,0)+1

    
intensity_freq2 = []

for key, value in d2.items():
    intensity_freq2.append((key , value))
    

intensity_freq2.sort(key = sortFirstInList, reverse = False)

cont = 0

for i in range (0,256):
    if i > ((len(intensity_freq2))-1):
        intensity_freq2.insert(cont,0)
        intensity_freq2[cont]=(0,0)
    elif intensity_freq2[cont][0] != i:
        intensity_freq2.insert(cont,0)
        intensity_freq2[cont]=(0,0)
    cont += 1
    
   

#List of percentage
percentage_list2 = []

for i in range (0,256):
    percentage_list2.append(100 * i / (width*height))



# Getting all the data together

histogram2 = [intensity_freq2, percentage_list2]

print('bin  '+'  count  ' +'   percentage')

for k in range(len(histogram2[0])):
    for v in range(len(histogram2)):
        print(histogram2[v][k], end = '   ')
    print()



