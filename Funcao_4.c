#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int square (int x){

    printf ("O quadrado � %d",(x*x));
return(0);
}
int main (){

int num;
    printf ("Entre com um n�mero: ");
    scanf ("%d",&num);
    printf ("\n\n");
    square(num);
return(0);
}