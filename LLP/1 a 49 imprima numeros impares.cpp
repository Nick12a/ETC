#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    //Imprima os números ímpares de 1 a 49  
    printf("Numeros Impares de 1 a 49\n");
    for (int num=1; num<=49; num += 2)
    {
        printf("Numero : %d\n",num);
    }

    return 0;
}
