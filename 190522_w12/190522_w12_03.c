#include <stdio.h>
#include <math.h>

float add_func(float, float);
float minus_func(float, float);
float mult_func(float, float);
float div_func(float, float);
float mod_func(float, float);
float exp_func(float, float);

int main(void)
{
	float op1, op2, result;
	char op;
	
    FILE *ptr_file;
    ptr_file = fopen("calculator.txt","w");
    if(!ptr_file) return 1;

	printf("============================\n");
    fprintf(ptr_file,"============================\n");

	printf("operator: +, -, *, /, %, ^\n");
    fprintf(ptr_file,"operator: +, -, *, /, %, ^\n");

	printf("============================\n");
    fprintf(ptr_file,"============================\n");
	
	printf("Operand >> ");
    scanf("%f", &op1);
    fprintf(ptr_file,"Operand >> %f \n",op1);
    
    
        
	int x = 0;
	while(x<5)
	{

        printf("Operator >> ");
        scanf(" %c", &op);
        fprintf(ptr_file,"Operator >> %c \n",op);

        printf("Operand >> ");
        scanf("%f", &op2);
        fprintf(ptr_file,"Operand >> %f \n",op2);
        

        switch (op){

            case '+':
                result = add_func(op1,op2);
                break;

            case '-':
                result = minus_func(op1,op2);
                break;

            case '/':
                result = div_func(op1,op2);
                break;

            case '*':
                result = mult_func(op1,op2);
                break;

            case '^':
                result = exp_func(op1,op2);
                break;

            case '%':
                result = mod_func(op1,op2);
                break;

        }

        printf("Result >> %f \n", result);
        fprintf(ptr_file,"Result >> %f \n",result);
        
        
       

        op1 = result;
        x++;

        

	}

    fclose(ptr_file);
}


float add_func(float a, float b)
{
    float result = a + b;
	return result;
}

float minus_func(float a, float b)
{
	float result = a - b;
	return result;
}

float mult_func(float a, float b)
{
	float result = a * b;
	return result;
}

float div_func(float a, float b)
{
	float result = a / b;
	return result;
}

float mod_func(float a, float b)
{
    ///modular operator cannot be defined with float operands. need type casting (float -> int)
    float aux = a - (int)a;
    float result = (int) a % (int) b;
    result = result + aux;
	return result;
}

float exp_func(float a, float b)
{
    
	float result = powf(a,b);
	return result;
}
