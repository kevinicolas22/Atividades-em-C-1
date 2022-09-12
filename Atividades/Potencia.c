#include <stdio.h>

int main()

{
  int expo = 2;
  int num1 = 0;
  
  printf("Informe o expoente: \n");
  scanf("%d", &num1);

  int potencia = 0;
  potencia = pow(expo, num1);
  printf("O resultado da potência é %d", potencia);
  printf(". Fim do programa...");
}