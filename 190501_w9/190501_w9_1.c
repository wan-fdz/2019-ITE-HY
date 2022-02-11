#include <stdio.h>
#include <stdlib.h>

int main(void){
    char name[20];
    char gender[20];
    int birth, trip_period;
    char destination[30];

    printf("<<<< Interview for Travel Plan >>>> \n");
    
    printf("Input your name: ");
    scanf("%s", name);
    
    printf("Gender: ");
    scanf("%s", gender);
    
    printf("Day of birth (ex.19910212): ");
    scanf("%d", &birth);
    
    printf("Destination: ");
    scanf("%s", destination);

    printf("Period of trip (ex. 5): ");
    scanf("%d", &trip_period);


    printf("=============================== \n");
    printf("NAME: %s \n", name);
    printf("GENDER: %s \n", gender);
    printf("DAY OF BIRTH: %d \n", birth);
    printf("DESTINATION: %s \n", destination);
    printf("PERIOD OF TRIP: %d \n", trip_period);
    printf("=============================== \n");
    
    
    system("PAUSE");
    return 0;
}