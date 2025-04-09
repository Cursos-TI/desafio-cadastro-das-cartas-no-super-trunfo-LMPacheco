#include <stdio.h>

int main() {

    char estado;
    char codigo[10];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int turismo;

//As maiúsculas diferenciam as variáveis das duas cartas

    char Estado;
    char Codigo[10];
    char Cidade[20];
    int Populacao;
    float Area;
    float Pib;
    int Turismo;


    printf("Digite nome do estado: \n");
    scanf("%c", &estado);

    printf("Digite nome do estado: \n");
    scanf("%c", &Estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);

    printf("Digite o código da carta: \n");
    scanf("%s", &Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade);
    
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite a área da cidade: \n");
    scanf("%f", &Area);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &Pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turismo);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &Turismo);

    printf("\n");//Essa linha gera um espaço entre as entradas e saídas

    printf("Carta 1\n");

    printf("Nome do estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População da cidade: %d\n", populacao);
    printf("Área da cidade: %.1f km²\n", area);
    printf("PIB da cidade: %.1f milhões de reais\n", pib);
    printf("Quantidade de pontos turísticos: %d\n", turismo);

    printf("\n");//Essa linha gera um espaço entre as duas cartas

    printf("Carta 2\n");

    printf("Nome do estado: %c\n", Estado);
    printf("Código da carta: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Cidade);
    printf("População da cidade: %d\n", Populacao);
    printf("Área da cidade: %.1f km²\n", Area);
    printf("PIB da cidade: %.1f milhões de reais\n", Pib);
    printf("Quantidade de pontos turísticos: %d\n", Turismo);

    
    return 0;
}
