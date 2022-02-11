#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int a = 0;

    while(a == 0){

        int n, user_in, answer;
        printf("Please input the number: \n");
        scanf("%d", &n);
        answer = sqrt(n);



        if( answer * answer == n){
            printf("%d is a square number of %d. \n", n, answer);
        }
        else{
            printf("%d is not a square number. \n", n);
        }
        
        
        printf("Do you want to keep playing (Yes (1), No (0)). \n");
        scanf("%d", &user_in);
        if(user_in == 0)
            break;
    }
    
}