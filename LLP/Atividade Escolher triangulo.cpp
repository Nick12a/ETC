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
	
   	printf ("Digite os tamanhos para classifica��o do tri�ngulo:\n\n");
    printf ("Informe o tamanho do lado 1: ");
    scanf  ("%d", &a);
    printf ("Informe o tamanho do lado 2: ");
    scanf  ("%d", &b);
    printf ("Informe o tamanho do lado 3: ");
    scanf  ("%d", &c);
    //� um triangulo foda?
    if(a < b + c & b < a + c & c < a + b)
    {
   	 //Qual triangulo ser�?
    
    	if ((a == b && b != c) || (a != b && b == c ))
		{    
			printf ("O Tri�ngulo formado � Is�seles");
		
		} else if (a !=b && b != c && c != a)
		{
		
		printf ("O Tri�ngulo formado � Escaleno");
		
		} else
		{
		
			printf ("O Tri�ngulo formado � Equil�tero");
		
		}

	}else
		printf("\n\n As medidas n�o formam um Tri�ngulo.");
	return 0;
}
