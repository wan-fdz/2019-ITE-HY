#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void page1(){

    int arr_1d[12] = {10,20,30,40,50,60,70,80,90,100,110,120};

    int arr_2d[3][4];
    int *ptr = &arr_2d[0][0];
    int total = 12;
    int cont = 0;
    int cont2 = 1;

   for(int i=0; i<3; i++){
       for(int j=0;j<4;j++){
           arr_2d[i][j] = arr_1d[cont];
           printf("%d \t",arr_2d[i][j]);
           cont++;
      }
      printf("\n");
   }

    printf("\n");

    for(int i=0; i < total; i++){
        cont2++;
        printf("%d \t", *(ptr+i));
        if (cont2 > 4){
            cont2 = 1;
            printf("\n");
        }
   }
 
}

/* FUNCTION IMPLEMENTATION FOR PAGE 2 */

int my_strlen( const char *str ){

    int ret = 0;
    for(;*str != '\0';++str){
        ++ret;
    }
    return ret;

}

int my_strcmp( const char *lhs, const char *rhs ){

    while( (*lhs != '\0') || (*rhs != '\0') ){

        if(*lhs < *rhs){
            return 1;
        }

        if(*lhs > *rhs){
            return -1;
        }

        lhs++;
        rhs++;

    }
    return 0;

}

char *my_strcpy( char *dest, const char *src ){
    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return dest;
}

char *my_strcat( char *dest, const char *src ){

    char *newString = dest;

    while(*dest != '\0'){
        dest++;
    }

    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
    return newString;


}

void page2(){
    // TESTS

    printf("Test for string length 1: %d \n", my_strlen("abcd"));
    printf("Test for string length 2: %d \n", my_strlen("AB"));

    printf("%d \n", my_strcmp("abcd","abcd"));
    printf("%d \n", my_strcmp("abc","abcd"));
    printf("%d \n", my_strcmp("abc","A"));

    char dest[100];
    my_strcpy(dest,"string to be copied");
    printf("%s \n",  dest);

    my_strcpy(dest,"abcdef");
    printf("%s \n",  dest);

   char dest1[100] = "Hello";
   my_strcat(dest1, "World");
   printf("%s \n", dest1);

   my_strcat(dest1, "bye");
   printf("%s \n", dest1);

}

void page3(){
    
    srand(time(NULL));

    printf("START \n");
    printf("========================= \n");
    int playAgain = 1;
    

    int checkList[10] = {0,};
    int i;
    int cnt = 0;
    int numbers[3]; 
    
    while( cnt < 3) {
        int rand_number = rand() % 10;
        
        //for (i=0; 9 > checkList[i]; ++i)
        
        if (checkList[rand_number] == 1) // if already used, pass
            continue;
        
        checkList[rand_number] = 1;
        
        numbers[cnt] = rand_number;
        
        ++cnt;
    }
    
    int guess;

    while(playAgain == 1){
        

        int won = 0;

        while(won != 1){

            int strike = 0;
            int balls = 0;
            printf("Guess a number (123 - 987): \n");
            scanf("%d", &guess);


            int unit = guess % 10;
            
            int tens = (guess / 10) % 10;
            
            int hundreds = (guess / 100) % 10;
            

            if( numbers[2] == unit){
                strike++;
            }

            if( numbers[1] == tens){
                strike++;
            }

            if( numbers[0] == hundreds){
                strike++;
            }

            if(strike == 3){
                won = 1;
                printf("Yes! The secret number is %d %d %d! You have won! \n",numbers[0], numbers[1],numbers[2]);
            }
            else{

                if(unit == numbers[0] || unit == numbers[1] ){
                    balls++;
                }

                if(tens == numbers[0] || tens == numbers[2] ){
                    balls++;
                }

                if(hundreds == numbers[1] || hundreds == numbers[2] ){
                    balls++;
                }
            }

            printf("%d strike, %d ball. \n", strike, balls);

        }

        printf("Do you want to play again? (yes (1)or no (0)) \n");
        scanf("%d", playAgain);
    }

}

/* FUNCTION FOR PAGE 4 */
void clap(int number){
    int cont = 0;
    
    if (number >= 10){
        int unit = number % 10;
        int tens = (number / 10) % 10;
        if (unit == 3 ){
            cont += 1;
        }

        if (unit == 6){
            cont += 1;
        }

        if (unit == 9){
            cont += 1;
        }

        if (tens == 3){
            cont += 1;
        }

        if (tens == 6 ){
            cont += 1;
        }

        if (tens == 9){
            cont += 1;
        }  

    }

    else{
        if (number == 3 ){
            cont += 1;
        }

        if (number == 6){
            cont += 1;
        }

        if (number == 9){
            cont += 1;
        }


    }

    if (cont == 1){
        printf("clap \n");
    }

    else{
        for(int i = 1; i <= cont; i++){
            if (i == cont){
                printf("clap \n");
            }
            else{
                printf("clap, \t");
            }
        }
    }
    if(cont == 0){
        printf("%d \n", number);
    }




}

void page4(){
    int userNumber;
    int numberList[100];
    printf("Please input the last number. \n");
    scanf("%d", &userNumber);

    int cont = 0;

    for(int i = 1; i < userNumber+1; i++){
        numberList[cont] = i;
        cont++;
    }

    for(int i = 0; i < userNumber; i++){
        clap(numberList[i]);
    } 


}


int main(){
    page1();
    page2();
    page3();
    page4();
}