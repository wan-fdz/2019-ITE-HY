#369
print('Please input the last number.')
userNumber = int(input())
numberList = []

def clap(number):
    cont = 0
    
    for i in range(len(number)):

        
        if '3' in number[i]:
            cont += 1
            
        if '6' in number[i]:
            cont += 1
            
        if '9' in number[i]:
            cont += 1

                
    if cont == 1:
        print('clap')
    else:
        for i in range(1,cont+1):
            if i == cont:
                print('clap')
            else:
                print('clap', end = ', ')
            
        

    if cont == 0:
        print(number)

for i in range(1,userNumber+1):
    x = i
    x = str(x)
    numberList.append(x)

for i in range(len(numberList)):
    clap(numberList[i])
    
    



        
