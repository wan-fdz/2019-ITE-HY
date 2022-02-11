
#include <stdio.h>
#include <stdlib.h>
int comp(int var1,int var2);

int main(){

int var1, var2, result;
printf("Give me value of the variable 1.\n");
scanf("%d",&var1);
printf("Give me value of the variable 2.\n");
scanf("%d",&var2);

result = comp(var1,var2);
printf("%d",result);
return 0;

}

int comp(int var1, int var2){
    if(var1 > var2){
        return 1;
    }
    else if (var1 < var2){
        return -1;
    }
    else if(var1 == var2){
        return 0;
    }

}