#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");
   //Fa�a um programa que receba uma certa quantidade de n�meros
   // e diga quantos s�o pares, �mpares, a soma dos pares e a soma dos �mpares.
    int somaP= 0;
    int somaI= 0;
    int numpares=0;
    int numimpar=0;
	int input = 1;
	
	printf("Digite os n�meros desejados ou digite 0 para os resultados\n");
	while(input != 0)
	{
		printf(" ");
		setbuf(stdin,NULL);
		scanf("%d", &input);
		if( input % 2)
		{
			somaI += input;
			numimpar ++;
		} else
		{
			somaP += input;
			numpares ++;
		}
		
	}
	numpares--;

	printf("Resultados\n");
	printf("Quantidade de n�meros Impares: %d\n", numimpar);
	printf("Quantidade de n�meros Pares: %d\n", numpares);
	printf("Soma dos n�meros Impares %d\n", somaI);
	printf("Soma dos n�meros Pares %d\n", somaP);
	
   system("pause");
	return 0;
}

