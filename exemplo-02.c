#include <stdio.h>
int main(){
    char nome[50]; //texto
    puts("Digite seu nome com até 50 caracteres: "); //printf
    gets(nome);
    printf("Seu nome: %s. Que nome bonito!\n",nome);
    return 0;
}