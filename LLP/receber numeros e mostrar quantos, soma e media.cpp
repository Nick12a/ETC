#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");
   //Fa�a um programa que receba uma quantidade de n�meros e mostre 
   //quanto n�meros foram digitados, a soma e a m�dia desses n�meros.
    int soma= 0;
	float media= 0;
    int Qnum= 0;

	printf("Digite os n�meros a serem digitados ou digite 0 para os resultados\n");
	for (int input = 1; input != 0; Qnum ++ )
	{
		printf(" ");
		setbuf(stdin,NULL);
		scanf("%d", &input);
		soma += input;
		
	}
	media += soma/--Qnum;

	printf("Resultados\n");
	printf("Quantidade de n�meros digitados %d\n", Qnum);
	printf("Soma dos n�meros digitados %d\n", soma);
	printf("Media dos n�meros digitados %.3f\n", media);
	
   system("pause");
	return 0;
}
