#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(void){
    setlocale(LC_ALL, "Portuguese");
    //Variaveis fodas
    
    int option = 1;
    int num1 = 0;
	int num2 = 0; 
	int result = 1;
	//Receber Variaveis fodas
	
   	printf ("Digite os valores a serem usados nas operações:\n\n");
    printf ("Valor 1: ");
    scanf  ("%d", &num1);
    printf ("Valor 2: ");
    scanf  ("%d", &num2);
    while (option  !=0 ){
     	printf ("\nEscolha uma das opções abaixo:\n\n");
     	printf ("1 – Para Soma\n");
     	printf ("2 – Para Subtração\n");
     	printf ("3 – Para Produto\n");
     	printf ("4 – Para Divisão\n");
     	printf ("5 – Para Potenciação\n");
     	printf ("6 – Para raiz da soma\n");
     	printf ("0 – Sair do Programa\n\n");
     	printf ("Sua opção: ");
     	scanf  ("%d", &option);
     	
     	//Calculos
     	
     	switch (option)
		{
        	case 1:
        		result = num1 + num2;
    	 		printf ("\nResultado da sua soma é: %d",result);
    	 		option = 0;
  			break;

       		case 2:
        		result = num1 - num2;
    	 		printf ("\nResultado da sua Subtração é: %d",result);
    	 		option = 0;
   			break;
   			
   		 	case 3:
        		result = num1 * num2;
    	 		printf ("\nResultado da seu Produto é: %d",result);
    	 		option = 0;
  			break;
  			
         	case 4:
        		result = num1 / num2;
    	 		printf ("\nResultado da sua Divisão é: %d",result);
    	 		option = 0;
  			break;
  			
  	       	case 5:
        	    for (int i = 0; i < num2; i ++)
				{
        	      result *= num1;	
				}
    	 		printf ("\nResultado da sua Potenciação é: %d",result);
    	 		option = 0;
  			break;

  	       	case 6:
        		result = sqrt (num1 + num2);
    	 		printf ("\nResultado da sua Raiz da Soma é: %d",result);
    	 		option = 0;
  			break;
			    
			//Saida
							
        	case 0:
    	 		printf ("\nSaindo do Programa...");
  			break;

   			default:
     			printf ("\nEscolha apenas as opções indicadas \n\n");
		}
	}
     
     	

    return 0;
 }
