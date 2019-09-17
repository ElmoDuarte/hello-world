#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
	float a;
	int b;
	
	
	
	printf("Entre com um numero: ");
	scanf("%f", &a);
	printf("Entre com outro numero: ");
	scanf("%d", &b);
	
	
	
	printf("\n A elevado B e: %.5e \n",pow (a,b));

	system("pause");
	
	
}
