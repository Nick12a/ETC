#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
	//Variaveis fodas
    char name [20];
	double price = 0; 
	int amount = 0;
	double total = 0;
	double total2 = 0;
	
	//Receber Variaveis
	printf ("Digite o Nome desse produto: ");
	scanf ("%s", name);
    
   	printf ("Digite o Preço desse produto: ");
	scanf ("%lf", &price);
	
	printf ("Digite a Quantidade desse produto: ");
	scanf ("%d", &amount);
	
	//Calculos
	
	total = price * amount;
	total2 = total - (total * 0.1);
	
	//saida
	printf("\n\t\t\t    EXTRATO \n\n");
   	printf("\n- Produto: %s\n- Preço: %.2lf\n- Quantidade: %d\n- Total Sem Desconto: R$%.2lf\n- Total Com Desconto: R$%.2lf\n", name, price, amount, total, total2 );

	return 0;
}
