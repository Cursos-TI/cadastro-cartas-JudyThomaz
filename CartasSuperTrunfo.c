#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

// Estrutura para armazenar os dados das cartas
struct SuperTrunfo {
    char estado;
    char codigo[4];          // Array para 3 caracteres + terminador '\0'
    char nomeCidade[50];     // Array para nomes de cidades com até 49 caracteres
    unsigned long populacao; // Tipo long para populações grandes
    float area;              // Área em km²
    double pib;              // PIB (digitado em bilhões, ex: 699.28)
    int pontosTuristicos;    // Contagem de pontos turísticos
    
    // Variáveis para armazenar os cálculos solicitados
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    // Declaração das cartas utilizando a estrutura criada
    struct SuperTrunfo Carta01A;
    struct SuperTrunfo Carta02B;

    // ==========================================
    // LEITURA DOS DADOS DA CARTA 1
    // ==========================================
    printf("--- CADASTRO DA CARTA 1 ---\n");

    printf("Digite o Estado (Ex: A): ");
    scanf(" %c", &Carta01A.estado); // O espaço antes de %c limpa o buffer do teclado
    
    printf("Digite o Código da Carta (Ex: A01): ");
    scanf("%3s", Carta01A.codigo); // Sem '&' para strings, limitado a 3 caracteres
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", Carta01A.nomeCidade); // Lê textos com espaços até apertar Enter
    
    printf("Digite a População: ");
    scanf("%lu", &Carta01A.populacao);
    
    printf("Digite a Área (em km²): ");
    scanf("%f", &Carta01A.area);
    
    printf("Digite o PIB (em bilhões de reais - Ex: 699.28): ");
    scanf("%lf", &Carta01A.pib); 
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &Carta01A.pontosTuristicos);
    printf("\n");

    // ==========================================
    // PROCESSAMENTO / CÁLCULOS DA CARTA 1
    // ==========================================
    
    // 1. Densidade Populacional = População / Área
    Carta01A.densidadePopulacional = (float)Carta01A.populacao / Carta01A.area;
    
    // 2. PIB per Capita = (PIB convertido para reais) / População
    // Multiplicamos por 1.000.000.000 porque o usuário digita o valor em bilhões
    Carta01A.pibPerCapita = (float)((Carta01A.pib * 1000000000.0) / Carta01A.populacao);

    //3. Calcular o Super Poder = Soma(PIB + area + população + pontos turísticos)
    // Soma de todos os atributos numéricos com a devida conversão de tipos (cast)
    float Carta01ASuperPoder;

    // Inverso da densidade: evitamos divisão por zero se a densidade for zero
    float inversoDensidade01A = (Carta01A.densidadePopulacional > 0) ? (1.0f / Carta01A.densidadePopulacional) : 0.0f;

    //Soma de todos os atributos numéricos
    Carta01ASuperPoder = (float)Carta01A. populacao + Carta01A.area + (float)Carta01A.pib + 
                        (float)Carta01A.pontosTuristicos + Carta01A.pibPerCapita + inversoDensidade01A;



    



    // ==========================================
    // EXIBIÇÃO DOS DADOS DA CARTA 1
    // ==========================================
    printf("--- DADOS DA CARTA 1 ---\n");
    printf("Estado: %c\n", Carta01A.estado);
    printf("Código: %s\n", Carta01A.codigo);
    printf("Nome da Cidade: %s\n", Carta01A.nomeCidade);
    printf("População: %lu habitantes\n", Carta01A.populacao);
    printf("Área: %.2f km²\n", Carta01A.area);
    printf("PIB: %.2f bilhões de reais\n", Carta01A.pib);
    printf("Pontos Turísticos: %d\n", Carta01A.pontosTuristicos);
    
    printf("\n--- INDICADORES CALCULADOS ---\n");
    printf("Densidade Populacional: %.2f hab/km²\n", Carta01A.densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", Carta01A.pibPerCapita);



    // ==========================================
    // LEITURA DOS DADOS DA CARTA 2
    // ==========================================
    printf("--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite o Estado (Ex: B): ");
    scanf(" %c", &Carta01A.estado); // O espaço antes de %c limpa o buffer do teclado
    
    printf("Digite o Código da Carta (Ex: B02): ");
    scanf("%3s", Carta02B.codigo); // Sem '&' para strings, limitado a 3 caracteres
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", Carta02B.nomeCidade); // Lê textos com espaços até apertar Enter
    
    printf("Digite a População: ");
    scanf("%lu", &Carta02B.populacao);
    
    printf("Digite a Área (em km²): ");
    scanf("%f", &Carta02B.area);
    
    printf("Digite o PIB (em bilhões de reais - Ex: 699.28): ");
    scanf("%lf", &Carta02B.pib); 
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &Carta02B.pontosTuristicos);
    printf("\n");

    // ==========================================
    // PROCESSAMENTO / CÁLCULOS DA CARTA 2
    // ==========================================
    
    // 1. Densidade Populacional = População / Área
    Carta02B.densidadePopulacional = (float)Carta01A.populacao / Carta01A.area;
    
    // 2. PIB per Capita = (PIB convertido para reais) / População
    // Multiplicamos por 1.000.000.000 porque o usuário digita o valor em bilhões
    Carta02B.pibPerCapita = (float)((Carta02B.pib * 1000000000.0) / Carta01A.populacao);

    //3. Calcular o Super Poder = Soma(PIB + area + população + pontos turísticos)
    // Soma de todos os atributos numéricos com a devida conversão de tipos (cast)
    float Carta02BSuperPoder;
    float inversoDensidade2 = (Carta02B.densidadePopulacional > 0) ? (1.0f / Carta02B.densidadePopulacional) : 0.0f;
    
    Carta02BSuperPoder = (float)Carta02B.populacao + Carta02B.area + (float)Carta02B.pib + 
                        (float)Carta02B.pontosTuristicos + Carta02B.pibPerCapita + inversoDensidade2;

    // ==========================================
    // EXIBIÇÃO DOS DADOS DA CARTA 2
    // ==========================================
    printf("--- DADOS DA CARTA 2 ---\n");
    printf("Estado: %c\n", Carta02B.estado);
    printf("Código: %s\n", Carta02B.codigo);
    printf("Nome da Cidade: %s\n", Carta02B.nomeCidade);
    printf("População: %lu habitantes\n", Carta01A.populacao);
    printf("Área: %.2f km²\n", Carta02B.area);
    printf("PIB: %.2f bilhões de reais\n", Carta02B.pib);
    printf("Pontos Turísticos: %d\n", Carta01A.pontosTuristicos);
    
    printf("\n--- INDICADORES CALCULADOS ---\n");
    printf("Densidade Populacional: %.2f hab/km²\n", Carta02B.densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", Carta02B.pibPerCapita);


    // ==========================================
    // EXIBIÇÃO DOS RESULTADOS DA COMPARAÇÃO
    // ==========================================
    printf("--- RESULTADO DAS COMPARAÇÕES ---\n");
    printf("(1 para Vitória da Carta01A | 0 para Vitória da Carta02B)\n\n");

    // Maior valor vence
    printf("População: %d\n", Carta01A.populacao > Carta02B.populacao);
    printf("Área: %d\n", Carta01A.area > Carta02B.area);
    printf("PIB: %d\n", Carta01A.pib > Carta02B.pib);
    printf("Pontos Turísticos: %d\n", Carta01A.pontosTuristicos > Carta02B.pontosTuristicos);
    printf("PIB per Capita: %d\n", Carta01A.pibPerCapita > Carta02B.pibPerCapita);
    
    // Menor valor vence (Densidade Populacional)
    printf("Densidade Populacional: %d\n", Carta01A.densidadePopulacional < Carta02B.densidadePopulacional);
    
    // Maior valor vence
    printf("Super Poder: %d\n", Carta01ASuperPoder > Carta02BSuperPoder);
   

    return 0;
}
