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
	
   	printf ("Digite os valores a serem usados nas opera��es:\n\n");
    printf ("Valor 1: ");
    scanf  ("%d", &num1);
    printf ("Valor 2: ");
    scanf  ("%d", &num2);
    while (option  !=0 ){
     	printf ("\nEscolha uma das op��es abaixo:\n\n");
     	printf ("1 � Para Soma\n");
     	printf ("2 � Para Subtra��o\n");
     	printf ("3 � Para Produto\n");
     	printf ("4 � Para Divis�o\n");
     	printf ("5 � Para Potencia��o\n");
     	printf ("6 � Para raiz da soma\n");
     	printf ("0 � Sair do Programa\n\n");
     	printf ("Sua op��o: ");
     	scanf  ("%d", &option);
     	
     	//Calculos
     	
     	switch (option)
		{
        	case 1:
        		result = num1 + num2;
    	 		printf ("\nResultado da sua soma �: %d",result);
    	 		option = 0;
  			break;

       		case 2:
        		result = num1 - num2;
    	 		printf ("\nResultado da sua Subtra��o �: %d",result);
    	 		option = 0;
   			break;
   			
   		 	case 3:
        		result = num1 * num2;
    	 		printf ("\nResultado da seu Produto �: %d",result);
    	 		option = 0;
  			break;
  			
         	case 4:
        		result = num1 / num2;
    	 		printf ("\nResultado da sua Divis�o �: %d",result);
    	 		option = 0;
  			break;
  			
  	       	case 5:
        	    for (int i = 0; i < num2; i ++)
				{
        	      result *= num1;	
				}
    	 		printf ("\nResultado da sua Potencia��o �: %d",result);
    	 		option = 0;
  			break;

  	       	case 6:
        		result = sqrt (num1 + num2);
    	 		printf ("\nResultado da sua Raiz da Soma �: %d",result);
    	 		option = 0;
  			break;
			    
			//Saida
							
        	case 0:
    	 		printf ("\nSaindo do Programa...");
  			break;

   			default:
     			printf ("\nEscolha apenas as op��es indicadas \n\n");
		}
	}
     
     	

    return 0;
 }
