# Multiplication table 2-1
import random
import time

cont = 1
while cont <= 3:
    randNumOne = str(random.randint(0,9))
    randNumTwo = str(random.randint(0,9))
    print(randNumOne + '*' + randNumTwo + ' = ?')
    userAnswer = int(input())
    randNumOne = int(randNumOne)
    randNumTwo = int(randNumTwo)
    correct = randNumOne*randNumTwo 
    if userAnswer == correct:
        print('Correct Answer')
    else:
        randNumOne = str(randNumOne)
        randNumTwo = str(randNumTwo)
        correct = str(correct)
        time.sleep(5)
        print('Wrong Answer,'+ randNumOne + '*' + randNumTwo + ' = ' + correct)    
    cont = cont +1
