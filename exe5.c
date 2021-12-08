#include <strings.h>
#include <ctype.h>
typedef struct vetor1 dado1;
typedef struct vetor2 dado2;
typedef struct vetor3 dado3;
struct vetor1{
int a;
int b;
int c;
};
struct vetor2{
int a;
int b;
int c;
};
struct vetor3{
int a;
int b;
int c;
};
int main(void){
dado1 A;
dado2 B;
dado3 C;
int resultado;
    puts("VETOR A");
    puts("Valor de a: ");
    scanf("%i",&A.a);
    puts("Valor de b: ");
    scanf("%i",&A.b);
    puts("Valor de c: ");
    scanf("%i",&A.c);
    puts("VETOR B");
    puts("Valor de a: ");
    scanf("%i",&B.a);
    puts("Valor de b: ");
    scanf("%i",&B.b);
    puts("Valor de c: ");
    scanf("%i",&B.c);
    C.a=(A.a+B.a);
    C.b=(A.b+B.b);
    C.c=(A.c+B.c);
    printf("A soma do vetor e igual a \nvetorResult{\n%i\n%i\n%i\n}",C.a,C.b,C.c);
    return 0;
}
