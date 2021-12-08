#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>
typedef struct endereco  end;
struct endereco{
    char bairro[50],rua[50],estado[50], cidade[50];
    int numero;
};
typedef struct lista dado;
struct lista{
    char nome[50],estado_civil[50],sexo[20];
    int rg, cpf, telefone,idade;
    end endereco;
    float salario;
};
int main() {
    dado usuario[5];
    int i,maior=0,n,idade;
    float salario;
    for(i=0;i<5;i++){
    printf("Digite o nome: ");
    scanf("%s", &usuario[i].nome);
    printf("Digite o Estado Civil: ");
    scanf("%s", &usuario[i].estado_civil);
    printf("Digite o Sexo: ");
    scanf("%s", &usuario[i].sexo);
    printf("Digite o Idade: ");
    scanf("%i", &usuario[i].idade);
    printf("Digite o Salario: ");
    scanf("%f", &usuario[i].salario);
    printf("Digite o CPF: ");
    scanf("%i", &usuario[i].cpf);
    printf("Digite o RG: ");
    scanf("%i", &usuario[i].rg);
    printf("Digite a Cidade: ");
    scanf("%s", &usuario[i].endereco.cidade);
    printf("Digite a Estado: ");
    scanf("%s", &usuario[i].endereco.estado);
    printf("Digite a Bairro: ");
    scanf("%s", &usuario[i].endereco.bairro);
    printf("Digite a Rua: ");
    scanf("%s", &usuario[i].endereco.rua);
    printf("Digite o Numero: ");
    scanf("%i", &usuario[i].endereco.numero);
    }
    for(i=0;i<5;i++){
        if(usuario[i].idade>maior){
        maior=usuario[i].idade;
        n=i;
        }
    }
    printf("A maior idade e de %i anos do usuario %s",maior,usuario[n].nome);
    puts("Usuarios do sexo masculino: ");
    for(i=0;i<5;i++){
        if(stricmp(usuario[i].sexo,"masculino")==0){
        printf("%s\n",usuario[i].nome);
        }
    }
    puts("Usuarios com salario maior que 1000 reais: ");
    for(i=0;i<5;i++){
        if(usuario[i].salario>1000){
        printf("%s\n",usuario[i].nome);
        }
    }
    puts("Insira o valor de idade que deseja pesquisar:");
    scanf("%i",idade);
    for(i=0;i<5;i++){
        if(usuario[i].idade=idade){
        printf("%s\n",usuario[i].nome);
        }
    }
    return 0;
}
