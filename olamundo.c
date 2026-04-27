
#include <stdio.h>

int main(){
    int idade;
    float altura;
    char nome[50];
    int matricula;

    printf ("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matrícula: %d \n", nome, matricula);
    printf("Idade: %d - Altura: %f", idade, altura);

 return 0;
}
 #include <stdio.h>

int main(){
    int idade = 19;
    float altura = 1.70;
    char opcao = 'S';
    char nome [20] = "samara";

    printf ("A idade é:");
    scanf ("%d", &idade);

    /*
    printf ("A idade do %s é: %d\n", nome, idade);
    printf ("A altura é: %f\n", altura);
    printf ("A opção é: %c\n", opcao);
    */

    /*
    printf("%formato1, %formato2, %formato3", variável1, variável2, variável3)

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma caadeia (string) de caracteres.
    */
}
 (Desenvolvendo a lógica de jogo em C);
