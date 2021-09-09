    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
    int main(void)
    {
     setlocale(LC_ALL, "Portuguese");
      float nota1, nota2,nota3, media;
      
      //entrada das variaveis
      printf("Digite a primeira nota do aluno: ");
      scanf("%f",&nota1);
      
      printf("Digite a segunda nota do aluno: ");
      scanf("%f",&nota2);
      
      printf("Digite a terceira nota do aluno: ");
      scanf("%f",&nota3);
      
      //calculo foda kk
      media = (nota1 + nota2 + nota3) / 3;
      
      //sistema só vai aceitar numeros de 0 a 10 pq sim
      if (nota1,nota2,nota3 >= 11){
       	printf ("A gente num aceita esse valor bobão! só números de 0 a 10. ");
	   }else{
        printf("Media do aluno = %.1f\n",media);
      
        if (media >=7){
        printf("O aluno foi aprovado! ");
          }
        if (media >=5){
        	printf ("O aluno esta de recuperação! ");
		}else{
            printf("O aluno foi reprovado! ");
         }
		}
      
      system("pause");
      return 0;
      
     }
