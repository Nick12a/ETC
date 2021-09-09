#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
	//Variaveis fodas
	double price = 0; 
	int amount = 0;
	double total = 0;
	double total2 = 0;

	
	//Receber Variaveis
	printf ("Insira o valor de KW: ");
	scanf ("%lf", &price);

	printf ("Insira a quantidade consumida em KW: ");
	scanf ("%d", &amount);
	
	//Calculos
	
	total = price * amount;
	total2 = total + (total * 0.2);
	
	//saida
	printf("\n\t\t\t    Conta \n\n");
   	printf("\n- Total a Pagar: R$%.2lf \n- Total a Pagar com ICMS: R$%.2lf", total,total2);

	return 0;
}
