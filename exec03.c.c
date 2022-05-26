#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*3. Faça o algoritmo de uma função lógica que receba três valores inteiros e retorne
VERDADEIRO se eles podem ser os valores dos lados de um triângulo, ou FALSO em
caso contrário.*/

int triangulo(int lado1, int lado2, int lado3);

int main(int argc, char *argv[]) {
	int a,b,c;
	
	printf("Digite o primeiro valor: ");
	scanf("%d",&a);
	
	printf("Digite o primeiro valor: ");
	scanf("%d",&b);
	
	printf("Digite o primeiro valor: ");
	scanf("%d",&c);
	
	triangulo(a,b,c);
	
	
	return 0;
}



int triangulo(int lado1, int lado2, int lado3){
int valorLogico;

if((lado1 + lado2 >=lado3) && (lado2 + lado3 >=lado1) && (lado1 + lado3 >=lado2)) {
	valorLogico = printf("VERDADEIRO");
} else 
	valorLogico = printf("FALSO");
	
	
return valorLogico;
}
