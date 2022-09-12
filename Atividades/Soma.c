#include <stdio.h>

int main(void) {

  int num1 = 0;
  int num2 = 0;
  
  printf("Soma de dois números\n");

  printf("Digite o 1º número:\n");
  scanf("%d", &num1);
  printf("Digite o 2º número:\n");
  scanf("%d", &num2);

  int sum = 0;
  sum = num1 + num2;
  printf("A soma é %d", sum);
  printf(". Fim do programa...");
}