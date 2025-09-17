#include <stdio.h>
#include <string.h>
   //Recursivo para mover a torre
    void movertorre(int casas) {
    if (casas > 0) {
      printf("Torre direita\n");
      movertorre(casas - 1);
    }
    
   }
// Recursivo para mexer o Bispo para cima
  void moverbispoc(int casas) {
    if (casas > 0) {
      printf("Bispo cima\n");
      moverbispoc(casas - 1);
    } }
    // Recursivo para mexer o Bispo para a direita
   void moverbispo(int casas){
    if (casas > 0){ 
      printf("Bispo direita\n");
      moverbispo(casas - 1);
    }
    }
    // Recursivo para mover a Rainha para a esquerda
    void moverrainha(int casas){
      if (casas > 0){
        printf("Rainha esquerda\n");
        moverrainha(casas - 1);
      }
    }
   



int main() {
 
 printf("Movimentando peças de xadrez!!!\n");
  
 
 //movimento da torre usando recursividade
 
  movertorre(5);
 
  printf("\n");
  
  //movimento do bispo usando recursividade

  moverbispoc(5);
  moverbispo(5);
  
  printf("\n");

  //movimento da Rainha usando recursividade

  moverrainha(8);

  printf("\n");

   //movimento do cavalo usando loop aninhado

  for(int cavaloc = 0, cavalo = 1; cavalo <= 1; cavalo++) {
       for(cavaloc = 0; cavaloc <= 1; cavaloc++)
       {
        printf("Cavalo cima\n");
    }
    printf("Cavalo Direita\n");
  }
    return 0;

   }
