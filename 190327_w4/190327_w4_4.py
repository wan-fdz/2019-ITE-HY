# 3
import random
playAgain = 'y'

while playAgain == 'y' or playAgain == 'yes':
    comp = random.randint(0,2)
    print("Rock (0), Paper (1) or Scissors (2)?")
    userNum = int(input())
    if userNum == comp:
        print('Tie.')
    elif userNum == 0:
        if comp == 1:
            print('You lose!')
        else:
            print('You win!')

    elif userNum == 1:
        
        if comp == 0:
            
            print('You win!')
        else:
            print('You lose!')
            
                
    elif userNum == 2:
        
        if comp == 0:
            print('You lose!')
        else:
            print('You win!')
    print('Do you want to play again? (y/n)')
    playAgain = input()
                        
                
            
    
    
