#include <stdio.h>

void square(double *dvar){
    double temp = *dvar;
    *dvar = temp*temp;
    return;

}

void getSumDiff(int a, int b, int *pSum, int *pDiff){
    *pSum = a + b;
    *pDiff = a-b;
    return;
}

int main(){

    /*Exercise 1*/

    double dvar;
    printf("User input: \n");
    scanf("%lf", &dvar);

    square(&dvar);
    printf("Squared number: %f \n", dvar);


    /*Exercise 2*/

    int a,b;
    int pSum, pDiff;

    printf("Input the value of a: \n");
    scanf("%d", &a);

    printf("Input the value of b: \n");
    scanf("%d", &b);

    getSumDiff(a,b,&pSum,&pDiff);
    printf("Sum: %d \n", pSum);
    printf("Difference: %d \n", pDiff);





}
