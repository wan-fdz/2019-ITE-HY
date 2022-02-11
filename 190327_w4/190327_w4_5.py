# 5

def drawline(m):
    cont1 = cont
    cont2 = 1
    acum = 0
    h = height
    hn = h1

    
    if cont1 == 1 or cont1 == (2*h-1):
        
        print('*'*(2*h-1),end='')
        print()
        acum = acum + (2*h-1)
    else:
        print('*'*(hn), end='')
        print(' '*oddNum, end='')
        print('*'*(hn),end='')
        print()
        acum = acum + 2*hn
    return acum

   
print('Give me the height.')
global height
height = int(input())
global cont
cont = 1
global oddNum
oddNum = -1
global h1
h1 = height
acumtot = 0

while cont < 2*height:
    if cont > height:
        if(cont == height + 1):
            oddNum = oddNum - 4
            h1 = h1 + 2
        else:
            oddNum = oddNum - 2
            h1 = h1 + 1
        acumtot += drawline(cont)
        
 
    else: 
        acumtot += drawline(cont)
        oddNum = oddNum + 2
        h1 = h1 - 1

    cont = cont + 1
print(acumtot)   


    

    

