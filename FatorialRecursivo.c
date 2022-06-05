#include <stdio.h>
//FATORIAL
int fatorial(int num);
int main(void) {
int num;
scanf("%d",&num);
printf("o fatorial de %d ! eh: %d",num, fatorial(num));
  
  return 0;
}
int fatorial(int num){
  if(num == 0){
    return 1;
  }else{
    return(num*fatorial(num-1));
  }
  }