#include <stdio.h>
#include <string.h>


int main(void)
{
    // --- Declaração de variáveis para a Carta 1 ---
    // Cada variável é inicializada com um valor padrão.

    char estado00 = 'A';                      // Armazena a letra do estado (um único caractere de acordo com o enunciado).
    char codigo_carta00[4] = "A01";           // Armazena o código da carta formado pela letra mais o caracter '0' mais o código de entrada (O tamanho 4 é para 3 caracteres mais o terminador nulo '\0'.
    char nome_cidade00[30] = "cidade";        // Armazena o nome da cidade. O tamanho 30 define um limite de 29 caracteres para o nome.
    unsigned int populacao00 = 0;                      // Armazena o número de habitantes (inteiro).
    float area00 = 0;                         // Armazena a área em km² (ponto flutuante).
    float pib00 = 0;                          // Armazena o PIB da cidade (ponto flutuante).
    int num_pontos_turisticos00 = 0;          // Armazena a quantidade de pontos turísticos (inteiro).
    float densidade_pop00 = 0;
    float inverso_densidade_pop00 = 0;
    float pib_per_capta00 = 0;
    float super_poder00 = 0;

    // --- Declaração de variáveis para a Carta 2 ---
    // Segue a mesma lógica da Carta 1.

    char estado01 = 'A';
    char codigo_carta01[4] = "A01";
    char nome_cidade01[30] = "cidade";
    unsigned int populacao01 = 0;
    float area01 = 0;
    float pib01 = 0;
    int num_pontos_turisticos01 = 0;
    float densidade_pop01 = 0;
    float inverso_densidade_pop01 = 0;
    float pib_per_capta01 = 0;
    float super_poder01 = 0;
    //int resultado_disputa = 0;

    // --- Coleta de dados para a Carta 1 ---

    printf("Digite os dados da carta 1 \n"); // Exibe uma mensagem inicial para o usuário iniciar a entrada de dados da carta correspondente.

    printf("Digite o Estado da carta 1:\n");  // Pede para o usuário inserir a letra correspondente ao estado de acordo com o enunciado ('A' a 'H').
    scanf(" %c", &estado00);                  // Lê um único caractere do teclado (letra correspondente ao estado) e o armazena na variável 'estado00'. O espaço antes de %c ignora quebras de linha ou espaços anteriores.

    codigo_carta00[0] = estado00;             // Atribui o caractere do estado à primeira posição do código da carta.

    printf("Digite o código da carta 1:\n");  // Pede o dígito do código.
    scanf(" %c", &codigo_carta00[2]);         // Lê o dígito e o armazena na terceira posição do código (índice 2).

    codigo_carta00[1] = '0';                  // Define o caractere do meio do código como '0'.
    codigo_carta00[3] = '\0';                 // Adiciona o terminador nulo ao final da string, essencial para que a string seja lida corretamente.
    getchar(); //captura o caracter new line -> limpa o buffer

    printf("Digite o nome da cidade:\n");     // Pede o nome da cidade.
    fgets(nome_cidade00, 30, stdin);
    nome_cidade00[strcspn(nome_cidade00, "\n")] = '\0';              // Lê uma string (sequência de caracteres sem espaços) e armazena em 'nome_cidade00'.

    printf("Digite a quantidade populacional:\n"); // Pede a população.
    scanf(" %d", &populacao00);                // Lê um número inteiro e armazena em 'populacao00'.

    printf("Digite a area da cidade:\n");      // Pede a área.
    scanf(" %f", &area00);                     // Lê um número de ponto flutuante (float) e armazena em 'area00'.

    printf("Digite o PIB da cidade:\n");       // Pede o PIB.
    scanf(" %f", &pib00);                     // Lê um float e armazena em 'pib00'.

    printf("Digite o número de pontos turísticos:\n"); // Pede o número de pontos turísticos.
    scanf(" %d", &num_pontos_turisticos00);    // Lê um inteiro e armazena em 'num_pontos_turisticos00'.

    // --- Coleta de dados para a Carta 2 ---
    // O processo é idêntico ao da Carta 1.
    printf("\n");
    printf("Digite os dados da carta 2 \n");

    printf("Digite o Estado da carta 2:\n");
    scanf(" %c", &estado01);

    codigo_carta01[0] = estado01;

    printf("Digite o código da carta 2:\n");
    scanf(" %c", &codigo_carta01[2]);
    
    codigo_carta01[1] = '0';
    codigo_carta01[3] = '\0';
    getchar(); //captura o caracter new line -> limpa o buffer
    printf("Digite o nome da cidade:\n");     // Pede o nome da cidade.
    fgets(nome_cidade01, 30, stdin);
    nome_cidade01[strcspn(nome_cidade01, "\n")] = '\0';

    printf("Digite a quantidade populacional:\n");
    scanf(" %d", &populacao01);

    printf("Digite a area da cidade:\n");
    scanf(" %f", &area01);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib01);


    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &num_pontos_turisticos01);

    // --- Exibição dos dados da Carta 1 ---
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado00);                               // exibe a letra correspondente a 1 dos 8 estados.
    printf("Código da Carta: %s\n", codigo_carta00);                 // exibe o código da carta formado pela letra mais o número do estado
    printf("Nome da Cidade: %s\n", nome_cidade00);
    printf("População: %d\n", populacao00);                          // exibe o valor da população
    printf("Área (Km²): %.2f km²\n", area00);                            // exibe o valor da área com 2 casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pib00);                                    // exibe o valor do PIB com 2 casas decimais
    printf("Números de Pontos Turísticos: %d\n", num_pontos_turisticos00); // exibe o número de pontos turísticos.

    densidade_pop00 = (float)populacao00 / area00; // Calcula a densidade populacional e armazena o valor
    inverso_densidade_pop00 = area00 / (float)populacao00;
    pib_per_capta00 = (pib00 * 1000000000) / (float)populacao00;    
    super_poder00 = inverso_densidade_pop00 + (float)populacao00 + area00 + pib00 + (float)num_pontos_turisticos00;

    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop00);
    printf("PIB per Capita: %.2f reais\n", pib_per_capta00);

    // --- Exibição dos dados da Carta 2 ---
    printf("\n");
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado01);
    printf("Código da Carta: %s\n", codigo_carta01);
    printf("Nome da Cidade: %s\n", nome_cidade01);
    printf("População: %d\n", populacao01);
    printf("Área (Km²): %.2f\n", area01);
    printf("PIB: %.2f bilhões de reais\n", pib01);
    printf("Números de Pontos Turísticos: %d\n", num_pontos_turisticos01);

    densidade_pop01 = (float)populacao01 / area01; // Calcula a densidade populacional e armazena o valor
    inverso_densidade_pop01 = area01 / (float)populacao01;
    pib_per_capta01 = (pib01 * 1000000000) / (float)populacao01; 
    super_poder01 = inverso_densidade_pop01 + (float)populacao01 + area01 + pib01    + (float)num_pontos_turisticos01;

    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop01);
    printf("PIB per Capita: %.2f reais\n", pib_per_capta01);

    //--- Comparando os atributos das cartas ---
    printf("\n");
    printf("Comparação de Cartas\n\n");
    printf("(Atributo População):\n");
    
    if(populacao00 > populacao01)
    {
        printf("Carta %c - %s: %u\n", codigo_carta00[2], nome_cidade00, populacao00);
        printf("Carta %c - %s: %u\n", codigo_carta01[2], nome_cidade01, populacao01);
        printf("Resultado: Carta %c (%s) venceu!\n", codigo_carta00[2], nome_cidade00);
    }

    else//if(populacao01 > populacao00)
    {
        printf("Carta %c - %s: %u\n", codigo_carta01[2], nome_cidade01, populacao01);
        printf("Carta %c - %s: %u\n", codigo_carta00[2], nome_cidade00, populacao00);
        printf("Resultado: Carta %c (%s) venceu!\n", codigo_carta01[2], nome_cidade01);
    }

    printf("\n");
    printf("Atributo Área:\n");

    if(area00 > area01)
    {
        printf("Carta %c - %s: %.2f\n", codigo_carta00[2], nome_cidade00, area00);
        printf("Carta %c - %s: %.2f\n", codigo_carta01[2], nome_cidade01, area01);
        printf("Resultado: Carta %c (%s) venceu!\n", codigo_carta01[2], nome_cidade00);
    }

    else//if(area01 > area00)
    {
        printf("Carta %c - %s: %.2f\n", codigo_carta01[2], nome_cidade01, area01);
        printf("Carta %c - %s: %.2f\n", codigo_carta00[2], nome_cidade00, area00);
        printf("Resultado: Carta %c (%s) venceu!\n", codigo_carta01[2], nome_cidade01);
        
    }
    
    printf("\n");
    printf("Atributo PIB:\n");

    if(pib00 > pib01)
    {
        printf("Carta %c - %s: %.2f\n", codigo_carta00[2], nome_cidade00, pib00); 
        printf("Carta %c - %s: %.2f\n", codigo_carta01[2], nome_cidade01, pib01);
        printf("Resultado: Carta %c (%s) venceu!\n", codigo_carta01[2], nome_cidade01);

    }

    else//if(pib01 > pib00)
    {
        printf("Carta %c - %s: %.2f\n", codigo_carta01[2], nome_cidade01, pib01);
        printf("Carta %c - %s: %.2f\n", codigo_carta00[2], nome_cidade00, pib00);
        printf("Resultado: Carta %c (%s) venceu!\n", codigo_carta01[2], nome_cidade01);
    }

    printf("\n");
    printf("Atributo Número de pontos turísticos:\n");

    if(num_pontos_turisticos00 > num_pontos_turisticos01)
    {
        printf("Carta %c - %s: %d\n", codigo_carta00[2], nome_cidade00, num_pontos_turisticos00);
        printf("Carta %c - %s: %d\n", codigo_carta00[2], nome_cidade01, num_pontos_turisticos01);
        printf("Resultado: Carta %c (%s) venceu!\n", codigo_carta01[2], nome_cidade00);
        
    }

    else//if(num_pontos_turisticos01 > num_pontos_turisticos00)
    {
        printf("Carta %c - %s: %d\n", codigo_carta01[2], nome_cidade01, num_pontos_turisticos01);
        printf("Carta %c - %s: %d\n", codigo_carta00[2], nome_cidade00, num_pontos_turisticos00);
        printf("Resultado: Carta %c (%s) venceu!\n", codigo_carta01[2], nome_cidade01);
        
    }
    
    printf("\n");
    printf("Atributo Densidade Populacional:\n");

    if(densidade_pop00 < densidade_pop01)
    {
        printf("Carta %c - %s: %.2f\n", codigo_carta01[2], nome_cidade01, densidade_pop00);
        printf("Carta %c - %s: %.2f\n", codigo_carta00[2], nome_cidade00, densidade_pop01);
        printf("Resultado: Carta %c (%s) venceu!\n", codigo_carta01[2], nome_cidade00);
        
    }

    else//if(densidade_pop01 < densidade_pop00)
    {
        printf("Carta %c - %s: %.2f\n", codigo_carta01[2], nome_cidade01, densidade_pop01);
        printf("Carta %c - %s: %.2f\n", codigo_carta00[2], nome_cidade00, densidade_pop00);
        printf("Resultado: Carta %c (%s) venceu!\n", codigo_carta01[2], nome_cidade01);
        
    }
    
    printf("\n");
    printf("Atributo PIB per capita:\n");

    if(pib_per_capta00 > pib_per_capta01)
    {
        printf("Carta %c - %s: %.2f\n", codigo_carta00[2], nome_cidade00, pib_per_capta00);
        printf("Carta %c - %s: %.2f\n", codigo_carta01[2], nome_cidade01, pib_per_capta01);
        printf("Resultado: Carta %c (%s) venceu!\n", codigo_carta01[2], nome_cidade00);
        
    }

    else//if(pib_per_capta01 > pib_per_capta00)
    {
        printf("Carta %c - %s: %.2f\n", codigo_carta01[2], nome_cidade01, pib_per_capta01);
        printf("Carta %c - %s: %.2f\n", codigo_carta00[2], nome_cidade00, pib_per_capta00);
        printf("Resultado: Carta %c (%s) venceu!\n", codigo_carta01[2], nome_cidade01);
        
    }

    return 0;
}
