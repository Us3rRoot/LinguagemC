#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    printf ("Olá! Eu estou vivo!\n");
    
return(0);
}