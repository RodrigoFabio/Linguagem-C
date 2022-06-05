#include <stdio.h>
//soma dos elementos de um vetor
int soma(int j,int vet[]);
int main(void) {
int j,i;
printf("DIGITE O TAMANHO DO VETOR: ");
scanf("%d",&j);
int vet[j];
for(i=0; i<j;i++)
{
printf("DIGITE O VALOR DA POSIÇÃO %d: ",i);
scanf("%d",&vet[i]);
}

printf("%d",soma(j, vet));

  return 0;
}
int soma(int j,int vet[]){
if(j==0)
  return 0;
else 
{
 return vet[j-1] + soma(j-1, vet);
}
}