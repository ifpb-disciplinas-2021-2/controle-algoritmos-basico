#include <stdio.h>
int main(){
  int idade;
  char letra; // 'a', '4', 'w'
  // Exibir dados ao usuário
  printf("Digite sua idade: ");
  // Ler dados de entrada
  scanf("%d",&idade);
  scanf("%c", &letra);
  printf("Que legal, sua idade é: %d. Você ainda é jovem!\n", idade);
  return 0;
}