#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  
  float nota1, nota2, nota3, media;
  
  
  printf("Digite a primeira nota: ");
   scanf("%f",&nota1);
  
  printf("Digite a segunda nota: ");
   scanf("%f",&nota2);
  
  printf("Digite a terceira nota: ");
   scanf("%f",&nota3);
  
  
  media = (nota1 * 1  + nota2 * 1 + nota3 * 2);
  if (media >=60)
   printf("aprovado!");
  else(media <60);
   printf("\n reprovado!\t");
  
  //Saída
  printf("Media do aluno = %1.f\n",media);
  
  system("pause");
  return 0; 
}
