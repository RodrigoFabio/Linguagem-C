#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { 

//MOSTRAR A MEDIANA
int vet[21];
int i,j,aux;

//ler os valores
for(i=0; i<21; i++){
	printf("Digite o valor da posiçao %d: ",i);
	scanf("%d",&vet[i]);
	printf("\n");
}

//trocando de posição
for(i=0; i<21;i++){
	for(j=i+1;j<21;j++){
		if(vet[i]>vet[j]){
			aux= vet[i];
			vet[i]=vet[j];
			vet[j]=aux;
		}
	}
}

for(i=0;i<21;i++){
	printf("Ordem crescente, posiçao %d: %d \n", i, vet[i]);
}

printf("\n A mediana eh: %d",vet[11]);

*/
	return 0;
}
