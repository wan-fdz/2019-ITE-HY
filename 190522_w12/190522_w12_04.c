#include <stdio.h>
#include <ctype.h>


int main(){
    char ch;
    int contChar = 0, contStr = 0, contLetter = 0;
    FILE *ptr_file;
    ptr_file = fopen("article.txt","r");
    if(!ptr_file) return 1;

      
    while((ch=fgetc(ptr_file))  !=EOF) {
        
		printf("%c",&ch);


        if(isspace(ch) || isblank(ch)){
            contStr++;
        }
        else if(isalpha(ch)){
            contChar++;
        }
        else if(ispunct(ch)){
            contLetter++;
        }
  

        
	}

    printf("\n");
    printf("The number of words in total is: %d \n", contStr);
    printf("The number of characters in total is: %d \n", contChar);
    printf("The number of letters in total is: %d \n", contLetter+contChar);
    fclose(ptr_file);

    int x, aux=0;
    char mostFreq, leastFreq;

    for(x='a'; x<='z'; x++) {
        int cont = 0;
        char letter = (char) x;
        

        ptr_file = fopen("article.txt","r");

        while((ch = fgetc(ptr_file)) !=EOF){
            
            if(ch == letter || ch == toupper(letter)){
                cont++;
            }
        }

        fclose(ptr_file);

        if(cont > aux){
            aux = cont;
            mostFreq = letter;

        }

    }

    int finalMostFreq = aux;
    
    printf("The most frequent alphabet letter is: %c. It appears %d times. \n", mostFreq, finalMostFreq);

    

    for(x='a'; x<='z'; x++) {

        int cont = 0;
        char letter = (char) x;
        

        ptr_file = fopen("article.txt","r");

        while((ch = fgetc(ptr_file)) !=EOF){
            
            if(ch == letter || ch == toupper(letter)){
                cont++;
            }
        }
        
        fclose(ptr_file);

        if(cont < aux){
            aux = cont;
            leastFreq =  letter;

        }

    }

    printf("The least frequent alphabet letter is: %c. It appears %d times. \n", leastFreq, aux);


    fclose(ptr_file);
    return 0;
}