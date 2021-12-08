#include <strings.h>
#include <ctype.h>
typedef struct lista dadoAluno;
struct lista{
    char nome[50];
    int idade;
};
int main(void){
dadoAluno usuario;

        puts("Nome: ");
        scanf("%s",&usuario.nome);
        puts("Idade: ");
        scanf("%i",&usuario.idade);
        puts("Nome:");
        printf("%s\n",usuario.nome);
        puts("Idade: ");
        printf("%i anos",usuario.idade);

    return 0;
}
