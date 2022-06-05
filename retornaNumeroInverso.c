#include <stdio.h>
//NUMERO REVERSO
void reverso(int num);
int main(void) {
int num;
scanf("%d",&num);
reverso(num);  
  return 0;
}
void reverso(int num){
  if(num == 0){
    printf("");
  }
    else{
      printf("%d",num%10);
      reverso(num/10);
      }
}