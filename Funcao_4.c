#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int square (int x){

    printf ("O quadrado é %d",(x*x));
return(0);
}
int main (){

int num;
    printf ("Entre com um número: ");
    scanf ("%d",&num);
    printf ("\n\n");
    square(num);
return(0);
}