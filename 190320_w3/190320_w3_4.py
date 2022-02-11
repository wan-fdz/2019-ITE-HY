# Arithmetic Operations
import random
import time

cont = 1
while cont <= 3:
    randNumOne = str(random.randint(0,9))
    randNumTwo = str(random.randint(0,9))
    randNumThree = str(random.randint(0,9))
    randNumFour = str(random.randint(0,9))
    print(randNumOne + '*' + randNumTwo + '+' + randNumThree + '-' + randNumFour + ' = ?')

    for i in range(1,4):
        time.sleep(1)
        if i == 3:
            print(i, end=':', flush = True)
        else:
            print(i, end=', ', flush = True)
        
    userAnswer = int(input())
    randNumOne = int(randNumOne)
    randNumTwo = int(randNumTwo)
    randNumThree = int(randNumThree)
    randNumFour = int(randNumFour)
    correct = randNumOne*randNumTwo+randNumThree-randNumFour
    if userAnswer == correct:
        print('Correct Answer')
    else:
        randNumOne = str(randNumOne)
        randNumTwo = str(randNumTwo)
        randNumThree = str(randNumThree)
        randNumFour = str(randNumFour)
        correct = str(correct)
        print('Wrong Answer,'+ randNumOne + '*' + randNumTwo + '+' + randNumThree + '-' + randNumFour +' = ' + correct)    
    cont = cont +1




