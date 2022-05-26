#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void dec2bin (int dec);
int main() {
int dec;

printf("Digite um numero inteiro: ");
scanf("%d",&dec);
printf("Resultado: ");
dec2bin(dec);
return 0;
}

void dec2bin (int dec) {
int i,pos,acumulador,resto;
i=0;
pos=1;
acumulador=0;
for(;dec>0;){
	resto =dec%2;
	acumulador = (acumulador +(resto*pos)) ;
	pos *=10;
	dec = dec/2;
}

printf("%d",acumulador);
}









