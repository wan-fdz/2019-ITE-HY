# Multiplication table 2
import random

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
        print('Wrong Answer,'+ randNumOne + '*' + randNumTwo + ' = ' + correct)    
    cont = cont +1
