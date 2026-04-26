#include <stdio.h>

int main () {
    
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Digite a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Digite a umidade: \n");
    scanf("%f", &umidade);

    printf("Digite o estoque: \n");
    scanf("%u", &estoque);
    
    if(temperatura > 30.0){
        printf("A temperatura está alta. \n");
    }else{
        printf("A temperatura está baixa. \n");   
    }

    if(umidade > 50.0){
        printf("umidade elevada. \n");
    }else{
        printf("umidade está dentro dos parâmetros. \n");
    }

    if(estoque < estoqueMinimo){
        printf("Estoque abaixo do mínimo. \n");
    }else{
        printf("Estoque normal. \n");
    }



 }