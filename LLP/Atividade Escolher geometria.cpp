#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
     int option = 1;
     while (option  !=0 ){
     	printf ("Escolha uma das opções abaixo:\n\n");
     	printf ("1 – Para Retângulo\n");
     	printf ("2 – Para Quadrado\n");
     	printf ("3 – Para Trapézio\n");
     	printf ("4 – Para Triângulo\n");
     	printf ("5 – Circunferência\n");
     	printf ("0 – Sair do Programa\n\n");
     	printf ("Sua opção: ");
     	scanf  ("%d", &option);
     	switch (option)
		{
        	case 1:
    	 		printf ("\nVocê escolheu Retângulo");
    	 		option = 0;
  			break;

       		case 2:
    	 		printf ("\nVocê escolheu Quadrado");
    	 		option = 0;
   			break;
   			
   		 	case 3:
    	 		printf ("\nVocê escolheu Trapézio");
    	 		option = 0;
  			break;
  			
         	case 4:
    	 		printf ("\nVocê escolheu Triângulo");
    	 		option = 0;
  			break;
  			
  	       	case 5:
    	 		printf ("\nVocê escolheu Circunferência");
    	 		option = 0;
  			break;
        	case 0:
    	 		printf ("\nSaindo do Programa...");
  			break;

   			default:
     			printf ("\nEscolha apenas as opções indicadas \n\n");
}
	 }
     
     	

    return 0;
 }
