#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
     int option = 1;
     while (option  !=0 ){
     	printf ("Escolha uma das op��es abaixo:\n\n");
     	printf ("1 � Para Ret�ngulo\n");
     	printf ("2 � Para Quadrado\n");
     	printf ("3 � Para Trap�zio\n");
     	printf ("4 � Para Tri�ngulo\n");
     	printf ("5 � Circunfer�ncia\n");
     	printf ("0 � Sair do Programa\n\n");
     	printf ("Sua op��o: ");
     	scanf  ("%d", &option);
     	switch (option)
		{
        	case 1:
    	 		printf ("\nVoc� escolheu Ret�ngulo");
    	 		option = 0;
  			break;

       		case 2:
    	 		printf ("\nVoc� escolheu Quadrado");
    	 		option = 0;
   			break;
   			
   		 	case 3:
    	 		printf ("\nVoc� escolheu Trap�zio");
    	 		option = 0;
  			break;
  			
         	case 4:
    	 		printf ("\nVoc� escolheu Tri�ngulo");
    	 		option = 0;
  			break;
  			
  	       	case 5:
    	 		printf ("\nVoc� escolheu Circunfer�ncia");
    	 		option = 0;
  			break;
        	case 0:
    	 		printf ("\nSaindo do Programa...");
  			break;

   			default:
     			printf ("\nEscolha apenas as op��es indicadas \n\n");
}
	 }
     
     	

    return 0;
 }
