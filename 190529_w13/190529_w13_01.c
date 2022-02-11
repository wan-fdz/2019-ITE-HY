#include <stdio.h>

void page1(){

int arrayInt[] = {1,2,3,4,5,6,7,8};
int sizeArrayInt = sizeof(arrayInt);
printf("The size of the array is: %d \n", sizeArrayInt);

double arrayDouble[] = {1,2,3,4,5,6,7,8};
int sizeArrayDouble = sizeof(arrayDouble);
printf("The size of the array is: %d \n", sizeArrayDouble);

float arrayFloat[] = {1,2,3,4,5,6,7,8};
int sizeArrayFloat = sizeof(arrayFloat);
printf("The size of the array is: %d \n", sizeArrayFloat);

}



int mean(int arr[], const int n){

    int totMean = 0;

    for (int x=0; x<n; x++){
        totMean += arr[x];
    }

    int mean = totMean / n;

    return mean;

/*We need to send the size because using the sizeof function 
won't give us the quantity of elements*/

}



void page2(){
    int arr1[5]={1,2,3,4,5};
    int number = sizeof(arr1) / sizeof(int);
    int arrayMean = mean(arr1,number);
    printf("The mean of the array is: %d \n", arrayMean);
    
}


void page3(){

    /* STEPS 1 TO 3 */

    double arr1[5] = {1.,2.,3.,4.,5.};

    for (int x = 0; x < 5; x++){
        printf("Address of element %d: %d and %p. \n", x, &arr1[x],arr1+x);
    }

    printf("\n");

    for (int x = 0; x < 5; x++){
        printf("Values of element %d: %f and %f. \n", x, *(arr1+x),*arr1+x);
    }

    printf("\n");

}

void page4(){
    /* STEPS 4 to 6 */

    double arr1[5] = {1.,2.,3.,4.,5.};
    double *ptr = NULL;


    ptr = &arr1[0];

    printf("Pointer value: %d and %d. \n", arr1, &arr1[0]);
    printf("Pointer value: %d and %d. \n", arr1 + 2, &arr1[2]);
    printf("Pointer value: %f and %f \n", *arr1, arr1[0]);
    printf("Pointer value: %f and %f. \n", *(arr1+2), arr1[2]);

}

void page5(){
    int m = 7;
    int* ptr = &m;
    printf("%d \n",ptr);
    printf("%d \n", *ptr);

    *ptr = 10;
    printf("The value of m is: %d \n", m);


}

/* FUNCTION FOR PAGE 6 */

void sumArray(int arr[], const int n){
    int* ptr = NULL;
    int totSum = 0;
    for(int i = 0; i < n; i++){
        ptr = arr + i;
        totSum += *ptr;       
    }

    printf("The total sum is: %d \n", totSum);

}

void page6(){
    int arr[9] = {1,2,3,4,5,6,7,8,9};

    int*ptr = NULL;
    for(int i = 0; i < 9; i++){
        ptr = &arr[i];
        printf("The value of element %d is: %d \n", i, *ptr);
        
    }

    sumArray(arr,9);

    int cont = 8;
    for(int i = 0; i < 9; i++){
        printf("%d \t", arr[cont]);
        cont--;        
    }
    printf("\n");



}


/* FUNCTION FOR PAGE 7 */

int getMin(int arr[], const int n){

    int* ptr = NULL;
    int aux;
    for(int i = 0; i < n; i++){

        ptr = arr + i;

        if (i == 0){
            aux = *ptr;
        }

        else{
            if(aux > *ptr){
                aux = *ptr;
            }
        }
           
    }
    return aux;


}

int getMax(int arr[], const int n){
    int* ptr = NULL;
    int aux;
    for(int i = 0; i < n; i++){

        ptr = arr + i;

        if (i == 0){
            aux = *ptr;
        }

        else{
            if(aux < *ptr){
                aux = *ptr;
            }
        }
           
    }
    return aux;

}

void page7(){

    int arr[5];
    int i;
    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
   }

   int maxValue = getMax(arr,5);
   int minValue = getMin(arr,5);
   printf("The max value of the array is: %d \n", maxValue);
   printf("The min value of the array is: %d \n", minValue);

}


void page8(){
    int arr_1d[12] = {10,20,30,40,50,60,70,80,90,100,110,120};

    int arr_2d[3][4];
    int cont = 0;

   for(int i=0; i<3; i++){
       for(int j=0;j<4;j++){
        arr_2d[i][j] = arr_1d[cont];
        printf("%d \t",arr_2d[i][j]);
        cont++;
      }
      printf("\n");
   }
 

   int cont2 = 11;

   for(int i=0; i<3; i++){
       for(int j=0;j<4;j++){
        arr_2d[i][j] = arr_1d[cont2];
        printf("%d \t",arr_1d[cont2]);
        cont2--;
      }
   }
   printf("\n");
 
}


int main(){
    page1();
    page2();
    page3();
    page4();
    page5();
    page6();
    page7();
    page8();
    return 0;
}