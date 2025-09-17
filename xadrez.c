#include <stdio.h>
#include <string.h>
   
int main() {
 
 int torre = 0, Rainha = 0, Bispo, Bispoc;
 int cavalob, cavalo = 0;
  
  //movimento da torre usando loop do-while
  do 
  {
    printf("Torre direita\n");
    torre++;
  }while(torre <= 4);
  printf("\n");
  //movimento do bispo usando loop aninhado

  for(Bispo = 1; Bispo <= 5; Bispo++)
  {
    for(Bispoc = 1; Bispoc <=1; Bispoc++){
    printf("Bispo cima\n");
  } 
    printf("Bispo Direita\n");
  }
  printf("\n");
  //movimento da Rainha usando loop while
  while (Rainha <= 8)
  {
   printf("Rainha esquerda\n");
    Rainha++;
    }
  printf("\n");
   //movimento do cavalo usando loop aninhado
  
   for(cavalob = 1; cavalob <= 1; cavalob++) {
        while(cavalo <= 1) {
            printf("cavalo baixo\n");
            cavalo++;
        }
        printf("cavalo esquerda\n");
    } 
  

    return 0;

   }
