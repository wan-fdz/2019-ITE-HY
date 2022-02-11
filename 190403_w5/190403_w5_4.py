#Loop Practice

print('Give me a number: ')
userNum = int(input())
arrayList = []
cont = 1
limitX = userNum
limitY = userNum
x=0
y=0
definidor=0

for i in range(0,userNum):
    arrayList.append([0]*userNum)

for i in range ((userNum*2)-1):
    
    if definidor >3:
        definidor=0
        
    if definidor == 0:
        
        for j in range(limitX):
            if arrayList[y][j]==0:
                arrayList[y][j]=cont
                cont+=1
        y+=1
        
    elif definidor == 1:
        
        for j in range(y,limitY):
            if arrayList[j][limitX-1]==0:
                arrayList[j][limitX-1]=cont
                cont+=1
        limitX-=1
        
    elif definidor == 2:
        
        for j in range(limitX)[::-1]:
            if arrayList[limitY-1][j]==0:
                arrayList[limitY-1][j]=cont
                cont+=1
        limitY-=1
        
    elif definidor == 3:
        
        for j in range(x,limitX)[::-1]:
            if arrayList[j][x]==0:
                arrayList[j][x]=cont
                cont+=1
        x+=1
        
    definidor += 1
    
for i in range(userNum):
    
    for j in range(userNum):
        num=arrayList[i][j]
        print(num,end=" ")  
    print()
    
