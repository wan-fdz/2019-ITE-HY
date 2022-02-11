# 1-2
print("Give me a number: ")
userNum = int(input())

cont = 1

while cont <= userNum:
    if (cont%2) != 0:
        print(cont)
    else:
        if (cont%4) == 0:
            print(cont)
    cont = cont + 1
