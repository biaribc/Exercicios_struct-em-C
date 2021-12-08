#include <stdio.h>
#include <strings.h>
#include <ctype.h>
typedef struct lista cad;
struct lista{
    char nome[50], end[50];
    int telefone;
};
int main(void){
cad usuario[3];
int i;
    for(i=0;i<3;i++)
    {
        puts("Nome: ");
        scanf("%s",&usuario[i].nome);
        puts("Endereco: ");
        scanf("%s",&usuario[i].end);
        puts("Telefone: ");
        scanf("%i",&usuario[i].telefone);
    }
     for(i=0;i<3;i++)
    {
        puts("Nome: ");
        printf("%s",usuario[i].nome);
        puts("Endereco: ");
        printf("%s",usuario[i].end);
        puts("Telefone: ");
        printf("%i",usuario[i].telefone);
    }
    return 0;
}
