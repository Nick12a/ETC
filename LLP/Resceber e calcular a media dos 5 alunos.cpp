#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    /*
        Faça um programa Que receba o nome De 5 alunos e 3 notas para 
        cada um,calcule a média e mostre ao final os nomes e a média
        de cada estudante
    */
    char name[5][20];
    float grade1, grade2, grade3, media[5];
    for (int alunos = 0; alunos < 5; alunos++)
    {
        //entrada das variaveis
        printf("Digite o Nome do Aluno: ");
        scanf("%s", name[alunos]);

        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &grade1);

        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &grade2);

        printf("Digite a terceira nota do aluno: ");
        scanf("%f", &grade3);
        
        //calculo foda kk
        media[alunos] = (grade1 + grade2 + grade3) / 3;
    }

    printf("A Media dos alunos\n");
    for (int result = 0; result < 5; result++)
    {
        printf("%s com a Media de %.2f\n", name[result], media[result]);
    }

    system("pause");
    return 0;
}
