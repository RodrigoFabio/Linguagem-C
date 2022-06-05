#include <stdio.h>
//CONVERTE DECIMAL PARA BINARIO
void bin(int dec);
int main(void) {
int dec;
scanf("%d",&dec);
bin(dec);
  return 0;
}
void bin(int dec){
  if(dec==0)
    printf("");
    else{
      bin(dec/2);
      printf("%d",dec%2);
    }
}