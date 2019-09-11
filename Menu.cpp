#include <conio.h>
#include <stdio.h>

int main(){
	
	int i = 0;
	
	scanf("%d", &i);
	
	while(i != 0)
	{
		
		// testa se esta entre 1 e 9
		if(i>0 && i<10){
			printf("opcao escolhida foi %d\n", i);
			// senao invalido
		}	else{
			if (i == 0)
		
		
				printf("valor inexistente\n");
			}
			
			scanf("%d", &i);
			
			
			}
			printf("acabou!");
			
			getch();
			return 0;
			
			
	}
