cont = 0
cont2 = 0

while cont <= 5:
    space = 5
    print(' ' * (space - cont), sep='')
    cont = cont + 1
    while cont2 < cont:
        print('*' * ((cont2*2) + 1))
        cont2 = cont2 + 1
    
