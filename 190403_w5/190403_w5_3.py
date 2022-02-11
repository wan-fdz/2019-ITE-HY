#List Practice

import random

numList = []          

index = 0


for i in range (0,51):
    num = random.randint(0,1000)
    numList.append(num)
    num = str(num)
    print(num, end= ' ')

print('\nThe maximum number is: ', max(numList))
print('The minimum number is: ', min(numList))

for i in range (0,51):
    if numList[i] == max(numList):
        index = str(i)
        print('The maximum number is in position: ' + index)
    elif numList[i] == min(numList):
        index = str(i)
        print('The minimum number is in position: ' + index)

numList.sort()
numList = str(numList)

print('The list in increasing order is: ' + numList)
