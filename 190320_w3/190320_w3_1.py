# Pyramid 3
print('Of how many levels you want your pyramid?')
levels = int(input())

rows = 1

while rows <= levels:
    space = 0
    while space < 2 * (levels-rows):
        print(' ',end='')
        space = space + 1

    ast = 1
    cont = 1
    while ast < (2 * rows):

        if rows == levels:
            print('*',end=' ')
            ast = ast + 1
        else:
            if cont == 1 or cont == ((2 * rows)-1):
                print('*',end=' ')
                ast = ast + 1
                
            else:
                print(' ',end=' ')
                ast = ast + 1
        cont = cont + 1

    print()
    rows = rows + 1
    
    

