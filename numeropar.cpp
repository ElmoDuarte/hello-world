#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int num1,num2;

    printf ("\nInforme um numero: ");
    scanf ("%d", &num1);

    if (num1 % 2 == 0)
        printf ("\nO numero %d foi par",num1);
    else
        printf("\nO numero %d foi impar",num1);
        
        
        return 0;
        
}
             
       
