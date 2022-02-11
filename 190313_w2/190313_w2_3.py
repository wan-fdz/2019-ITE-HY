cont = 0
cont2 = 0
a = 0 
b = 0

while a<4:
    print(' ' * a, end=' ')
    a=a+1
    while b < a:
        print ('*'*(9-(b*2)))
        b = b +1
    

while cont <= 4:
    space = 4
    print(' ' * (space - cont), end="")
    cont = cont + 1
    while cont2 < cont:
        print('*' * ((cont2*2) + 1))
        cont2 = cont2 + 1
