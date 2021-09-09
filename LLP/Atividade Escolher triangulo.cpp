#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(void){
    setlocale(LC_ALL, "Portuguese");
     //Variaveis fodas
    int a = 0;
	int b = 0; 
	int c = 0;
	//Receber Variaveis fodas
	
   	printf ("Digite os tamanhos para classificação do triângulo:\n\n");
    printf ("Informe o tamanho do lado 1: ");
    scanf  ("%d", &a);
    printf ("Informe o tamanho do lado 2: ");
    scanf  ("%d", &b);
    printf ("Informe o tamanho do lado 3: ");
    scanf  ("%d", &c);
    //é um triangulo foda?
    if(a < b + c & b < a + c & c < a + b)
    {
   	 //Qual triangulo será?
    
    	if ((a == b && b != c) || (a != b && b == c ))
		{    
			printf ("O Triângulo formado é Isóseles");
		
		} else if (a !=b && b != c && c != a)
		{
		
		printf ("O Triângulo formado é Escaleno");
		
		} else
		{
		
			printf ("O Triângulo formado é Equilátero");
		
		}

	}else
		printf("\n\n As medidas não formam um Triângulo.");
	return 0;
}
