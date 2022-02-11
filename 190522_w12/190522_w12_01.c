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
	
	printf("============================\n");
	printf("operator: +, -, *, /, %, ^\n");
	printf("============================\n");
	
	printf("Operand >> ");
    scanf("%f", &op1);
    
    
        
	
	while(1)
	{

        printf("Operator >> ");
        scanf(" %c", &op);

        printf("Operand >> ");
        scanf("%f", &op2);
        

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
        
        
       

        op1 = result;

        

	}

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
