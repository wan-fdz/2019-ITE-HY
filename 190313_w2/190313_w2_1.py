print('What table do you want?')
tableNum = input()
cont = 1
while cont <= 10:
    tableNum = int(tableNum)
    mult = tableNum * cont
    tableNum = str(tableNum)
    cont=str(cont)
    mult = str(mult)
    print(tableNum + '*' + cont + '=' + mult)
    cont = int(cont)
    mult=int(mult)
    cont = cont + 1
    
    
