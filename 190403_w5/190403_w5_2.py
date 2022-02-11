#Recursion Function Practice

def fibonacci(num):
    totsum = 0
    
    if num == 0:
        return print(0)
    
    elif num == 1:
        return print(1)
    
    else:
        n0 = 0
        n1 = 1
        
        for i in range (2,num+1):
            totsum = sum(n0,n1)
            n0 = n1
            n1 = totsum
            
        return print(totsum)
   

def sum(n0,n1):
    answer = n0 + n1
    return answer


print('Give me the number: ')
number = int(input())
fibonacci(number)
