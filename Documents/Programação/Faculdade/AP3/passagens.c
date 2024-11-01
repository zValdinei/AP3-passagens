#include <stdio.h>

struct lugar {
    char origem[50], destino[50];
};

struct data {
    char data_ida[10], data_volta[10];
};

int main()
{
    struct lugar cidade;
    struct data tempo;
    int quantidade_passagens;
   
    printf("Digite sua Origem: ");
    scanf("%s", cidade.origem);
    printf("Digite seu Destino: ");
    scanf("%s", cidade.destino);
   
    printf(" === Digite a data como DD/MM/AAAA === \n");
    printf("Digite a data da ida: ");
    scanf("%s", tempo.data_ida);
    printf("Digite a data de volta: ");
    scanf("%s", tempo.data_volta);
    
    printf("Digite a quantidades de passagens: ");
    scanf("%i", &quantidade_passagens);
   
    printf("Origem: %s\n", cidade.origem);
    printf("Destino: %s\n", cidade.destino);
    return 0;
}