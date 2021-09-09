#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");
   //Faça um programa que receba uma quantidade de números e mostre 
   //quanto números foram digitados, a soma e a média desses números.
    int soma= 0;
	float media= 0;
    int Qnum= 0;

	printf("Digite os números a serem digitados ou digite 0 para os resultados\n");
	for (int input = 1; input != 0; Qnum ++ )
	{
		printf(" ");
		setbuf(stdin,NULL);
		scanf("%d", &input);
		soma += input;
		
	}
	media += soma/--Qnum;

	printf("Resultados\n");
	printf("Quantidade de números digitados %d\n", Qnum);
	printf("Soma dos números digitados %d\n", soma);
	printf("Media dos números digitados %.3f\n", media);
	
   system("pause");
	return 0;
}
