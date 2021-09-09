#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) { 
    setlocale(LC_ALL, "Portuguese");

    // Imprima a soma dos números naturais de 0 a 10 
    printf("Numeros Naturais de 0 a 10\n");
    int soma = 0;
    for (int num=0; num<=10; num ++)
    {
        printf("Numero: %d\n",num);
        soma += num;
    }
    printf("Resultado da soma dos Numeros de 0 a 10 : %d\n",soma);

    return 0;
}
