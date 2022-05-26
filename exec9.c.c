#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//EXERCICIO 09
//Crie um algoritmo que leia uma matriz 5x5. Em seguida, conte quantos números pares existem na matriz.

int matriz[5][5];
int i,j, contador;
contador =0;
//RECEBE OS ELEMENTOS DA MATRIZ
for(i=0; i<5; i++){
	for(j=0; j<5; j++){
	printf("Digite o elemento da posicao [%d][%d]: ", i,j);
	scanf("%d",&matriz[i][j]);
	}
}
//CONTA QUANTOS SÃO PARES
for(i=0; i<5; i++){
	for(j=0; j<5; j++){
		if(matriz[i][j]%2==0)
			contador++;
	}
}
printf("A quantidade de pares eh: %d", contador);
	return 0;
}
