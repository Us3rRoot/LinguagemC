#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int prod (int x,int y){
return (x*y);
}

int main (){
    int saida;
    saida=prod (12,7);
    printf ("A saida e: %d\n",saida);
return(0);
}