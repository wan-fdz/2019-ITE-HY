#Fuction Practice

def add(a,b):
    result = a + b
    return result

def sub(a,b):
    result = a - b
    return result

def mul(a,b):
    result = a*b
    return result

def div(a,b):
    result = a/b
    return result

def main():
    print('First operand is 0')
    operand1 = float(0)

    print('Choose the operator. (+, -, *, /, exit)')
    operator = input()

    while operator != 'exit':
        
        
        print('What is the other operand?')
        operand2 = float(input())
        
        if operator == '+':
            operand1 = add(operand1,operand2)
            answer = str(operand1)
            print("------------\n"+ answer + "\n------------")
            
        elif operator == '-':
            operand1 = sub(operand1,operand2)
            answer = str(operand1)
            print("------------\n"+ answer + "\n------------")     
            
        elif operator == '*':
            operand1 =  mul(operand1,operand2)
            answer = str(operand1)
            print("------------\n"+ answer + "\n------------")   
            
        else:
 
            operand1 = div(operand1,operand2)
            answer = str(operand1)
            print("------------\n"+ answer + "\n------------")   

        print('Choose the operator. (+, -, *, /, exit)')
        operator = input()
            
        

    print('Terminate')
    

calculator = 'y'

if calculator == 'y':
    main()
