#include <stdlib.h>
#include <stdio.h>
int resultado (int num);
int main (void)
{
int num;
printf("digite um numero inteiro: ");
scanf("%d",&num);
if(num%2==0)//operador %
{
printf("Par");
}
else
printf("Ímpar");

system("pause");

return 0;
}
