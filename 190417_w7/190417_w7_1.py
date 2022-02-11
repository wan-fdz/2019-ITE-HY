#Baseball
import random


print('START')
print('='*16)
playAgain = 'yes'
userNumber = []



while playAgain == 'yes' or playAgain == 'y':

    comparator = []
    userCheck = []
    won = 0
    turns = 0
    cont1 = -1
    x = []


    while cont1 > 3 or cont1 == -1:
        
        cont1 = 0
        
        randNumber = random.randint(100, 999)
        print(randNumber)
        randNumber = str(randNumber)

        for k in range(len(randNumber)):
            x.append(randNumber[k])


        for i in range(len(x)):
            if randNumber[i] in x[i]:
                cont1 += 1



    randNumber = int(randNumber)

    while won != 1:
        
        print('Guess a number between 000 ~ 999: ')
        guess = int(input())


        if turns == 0:
            userNumber.append(guess)
            
        else:
            
            if guess in userNumber:
                print('You already guessed that number. Guess a number between 000 ~ 999: ')
                guess = int(input())
                userNumber.append(guess)
            else:
                userNumber.append(guess)


            
        if guess == randNumber:
            randNumber = str(randNumber)
            print("Yes! The secret number is " + randNumber + "! You have won!")
            won = 1
            turns += 1

        else:
            strike = 0
            ball = 0
            randNumber = str(randNumber)
            guess = str(guess)
            
            for i in range(len(guess)):

                if guess[i] == randNumber[i]:
                    strike = int(strike)
                    strike += 1

                else:
                    
                    for j in range(len(randNumber)):
                        if guess[i] == randNumber[j]:
                            ball = int(ball)
                            ball += 1

            if strike == len(randNumber):
                print("Yes! The secret number is " + randNumber + "! You have won!")
                won = 1
                
            strike = str(strike)
            ball = str(ball)
            print(strike + ' strikes. ' + ball + ' balls.')
            turns += 1

            
                    

    print('Do you want to play again? (yes (y) or no (n))')
    playAgain = input()
            

   
        
        
