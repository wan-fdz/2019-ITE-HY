#include <stdio.h>
#include <stdlib.h>

int main(void){
    int A, B, C;
    int result;

    printf("A + B - C = ? "); 

    printf("Input A: \n");
    scanf("%d", &A);

    printf("Input B: \n");
    scanf("%d", &B);

    printf("Input C: \n");
    scanf("%d", &C);

    result = A + B - C;

    printf("%d + %d - %d = %d", A,B,C,result);

    system("PAUSE");
    return 0;
}