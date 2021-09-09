#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    //Imprima números pares de zero a 50  
    printf("Numeros pares de 0 a 50\n");
    for (int num=0; num<=50; num += 2)
    {
        printf("Numero : %d\n",num);
    }

    return 0;
}
