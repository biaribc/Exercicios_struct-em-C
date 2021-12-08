#include <stdio.h>
#include <stdlib.h>
typedef struct dados item;
struct dados{
    char modelo[20],cor[20],marca[20],motor[20];
    int portas;
};
void incluir(item carro){
    puts("\nMarca: ");
    scanf("%s",&carro.marca);
    puts("\Modelo: ");
    scanf("%s",&carro.modelo);
    puts("\Cor: ");
    scanf("%s",&carro.cor);
    puts("\Motorizacao: ");
    scanf("%s",&carro.motor);
    puts("\Quantidade de Portas: ");
    scanf("%i",&carro.portas);
}
void imprime(item carro){
    puts("\nMarca: ");
    printf("%s",carro.marca);
    puts("\Modelo: ");
    printf("%s",carro.modelo);
    puts("\Cor: ");
    printf("%s",carro.cor);
    puts("\Motorizacao: ");
    printf("%s",carro.motor);
    puts("\Quantidade de Portas: ");
    printf("%i",carro.portas);
}
int main(void){
    int opcao;
    item carro;
    do{
        puts("1 - Inserir Dados");
        puts("2 - Listar");
        puts("0 - SAIR");
        scanf("%i",&opcao);
        switch (opcao)
        {
        case 1:
            incluir(carro);
            break;
        case 2:
            imprime(carro);
            break;
        case 0:
            break;
        }
    }while(opcao!=0);
    return 0;
}