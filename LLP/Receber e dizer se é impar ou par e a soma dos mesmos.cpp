#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");
   //Faça um programa que receba uma certa quantidade de números
   // e diga quantos são pares, ímpares, a soma dos pares e a soma dos ímpares.
    int somaP= 0;
    int somaI= 0;
    int numpares=0;
    int numimpar=0;
	int input = 1;
	
	printf("Digite os números desejados ou digite 0 para os resultados\n");
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
	printf("Quantidade de números Impares: %d\n", numimpar);
	printf("Quantidade de números Pares: %d\n", numpares);
	printf("Soma dos números Impares %d\n", somaI);
	printf("Soma dos números Pares %d\n", somaP);
	
   system("pause");
	return 0;
}

