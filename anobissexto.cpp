#include <stdio.h>
#include <stdlib.h>


int main()
{
	
	int ano;
	
	printf("\nDigite um ano para descobrir ano bissexto\n Digite: ");
	scanf("%d", &ano);
	
	if (ano % 4 == 0 && ano%100 != 0)
	   printf("Ano Bissexto!\n");  
	if(ano% 400 == 0)
	 printf("Ano Bissexto!\n");
	
	else
	printf("Ano nao correspondente bissexto");
	
	
	printf("\n");
	
	system("pause");
	
	return 0;
	
	
}
