# 2-2
# 2-2
import random

def comp(num1 , num2):
    if num1 > num2:
        return (1)
    else:
        if num1 < num2:
            return (-1)
        else:
            if num1 == num2:
                return 0


randNum = random.randint(0,100)
print(randNum)
answer = 2
cont = 0


while answer == 1 or answer == -1 or answer == 2:
    
    print("Give me a number: ")
    userNum = int(input())
    answer = comp(userNum , randNum)
    if answer == -1:
        userNum = str(userNum)
        print('Larger than ' + userNum )
    else:
        if answer == 1:
            userNum = str(userNum)
            print('Smaller than ' + userNum)
        else:
            if answer == 0:
                print('Yes. Right.')
                cont = 3
                break
    cont = cont + 1
    if cont == 3:
        break
    
