#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
	//Imprima números de zero a 10 usando for 

    printf("Numeros Naturais de 0 a 10\n");
    for (int num=0; num<=10; num++)
    {
        printf("Numero Natural: %d\n",num);
    }
    
    return 0;
}
