int main() {
#include <stdio.h>
#include <string.h>

//para mexer a torre 5 casas à direita 
  int torre = 0, Rainha = 0, Bispo;

   do 
  {
    printf("Torre direita\n");
    torre++;
  }while(torre <= 4);

  //para mexer o bispo 5 casas na diagonal

  for(Bispo = 1; Bispo <= 5; Bispo++)
  {
    printf("Bispo cima e direita\n");
  }
  //para mexer a Rainha 8 casas à esquerda
  while (Rainha <= 8)
  {
   printf("Rainha esquerda\n");
    Rainha++;
    }
return 0;
}
