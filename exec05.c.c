#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*5. Faça o algoritmo de um procedimento que receba um valor inteiro representando uma
quantidade de segundos e retorne o equivalente em horas, minutos e segundos.*/


void tempo(int *seg, int *min, int *hor);

int main(int argc, char *argv[]) {
int s,m,h;

printf("Digite s:");
scanf("%d",&s);

tempo(&s,&m,&h);

printf("%d horas %dminutos %dsegundos",h,m,s);
	
	return 0;
}

void tempo(int *seg, int *min, int *hor){		
	*min = *seg / 60;
	*seg= *seg % 60;
	*hor = *min / 60;
	*min = *min % 60;	
}
