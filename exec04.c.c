#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*4. Faça o algoritmo de um procedimento que troque entre si os valores das duas variáveis
reais passadas como parâmetro.*/

void trocaValores(int *valor1, int *valor2);

int main(int argc, char *argv[]) {
	
int a,b;
printf("Digite um valor: ");
scanf("%d",&a);
	
printf("Digite um outro valor: ");
scanf("%d",&b);	
	
trocaValores(&a, &b);

printf("Valores trocados sao, a = %d  e b= %d .",a,b);	

	return 0;
}

void trocaValores(int *valor1, int *valor2){
	int aux;
	
	aux = *valor1;
	*valor1 = *valor2;
	*valor2 = aux;
	

}
