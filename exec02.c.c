#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void multiplos(int a, int b, int c);

int main(int argc, char *argv[]) {
int a,b,c;	
printf("Digite um valor: ");
scanf("%d",&a);
	
printf("Digite um segundo valor: ");
scanf("%d",&b);
	
printf("Digite um terceiro valor: ");
scanf("%d",&c);		

multiplos(a,b, c);
	
	return 0;
}


void multiplos(int a, int b, int c){
int i, sinalizador;	
sinalizador= 0;			
if(a < b){
	for(i=a;i<=b;i++){
		if(i%c== 0){
			sinalizador=1;
			printf("Um multiplo eh: %d",i);
			printf("\n");
		}
	}
}
else 
	for(i=a; i>=b; i--){	
		if(i% c==0){
			sinalizador=0;
			printf("Um multiplo é: %d",i);
			printf("\n");
		}
}
if(sinalizador == 0)
	printf("Nao ha multiplos de %d entre %d e %d", c,a,b);
	
}


