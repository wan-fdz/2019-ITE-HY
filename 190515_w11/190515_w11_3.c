#include <stdio.h>
#include <stdlib.h>
void printLine(user_Num);

int main() {
    int user_Num;
    printf("Give me a number. \n");
    scanf("%d",&user_Num);
    printLine(user_Num);
    return 0;
}

void printLine(user_Num){
    int cont = 1;
    int aux = user_Num + 1;

    while(cont <= (user_Num*2)){

        if(cont <= user_Num){
            for(int i=1; i < cont + 1; i++){
                printf("%d", i);
                printf(" ");
            }
            printf("\n");
        }

        else if(cont > user_Num){
            for(int i=1; i < aux; i++){
                printf("%d", i);
                printf(" ");
            }
            aux = aux - 1;
            printf("\n");

        }
        cont = cont + 1;


    }

}