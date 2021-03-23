#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int Dias; /* Declaracao de Variaveis */
    float Anos;
    printf ("Entre com o número de dias: "); /* Entrada de Dados
    */
    scanf ("%d",&Dias);
    Anos=Dias/365.25; /* Conversao Dias->Anos */
    printf ("\n\n%d dias equivalem a %f anos.\n",Dias,Anos);
    
return(0);
}