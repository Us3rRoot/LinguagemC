#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mensagem (){
    setlocale(LC_ALL, "Portuguese");
    
    printf ("Olá! ");
return(0);
}

int main (){
    mensagem();
    printf ("Eu estou vivo!\n");
return(0);
}