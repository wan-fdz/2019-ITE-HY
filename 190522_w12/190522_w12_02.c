#include <stdio.h>

int main(){
    FILE *ptr_file;
    ptr_file = fopen("io.txt","w");
    if(!ptr_file) return 1;

    int x;

    for(x=1;x<=10;x++) fprintf(ptr_file,"%d\n",x);
    
    for(x='a';x<='z';x++) fprintf(ptr_file,"%c\n",x);

    fclose(ptr_file);
    return 0;
}