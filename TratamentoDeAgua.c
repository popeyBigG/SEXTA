#include <stdio.h>
#include <string.h>

// Variaveis
double saida, entrada, valor_saida; // Valor da água na entrada ou saida dos canos (CP max: 100.000m³)
double reservatorio_A, reservatorio_B, porcentagem_reservatorio_A, porcentagem_reservatorio_B, porcentagem_diferencial_A, porcentagem_diferencial_B; // Valor da água nos reservatórios (CP max: 1000m³)
char estado_valvula[256];


int main() {

printf("Insira o valor do reservatorio [A]: ");
scanf("%lf", &reservatorio_A);

printf("Insira o valor do reservatorio [B]: ");
scanf(" %lf", &reservatorio_B);

printf("Insira o valor do cano [Entrada]: ");
scanf(" %lf", &entrada);

printf("Insira o valor do cano [Saída]: ");
scanf(" %lf", &saida);


// Calcular porcentagem dos valores nos reservatorios
porcentagem_reservatorio_A = (reservatorio_A / 100); 
porcentagem_reservatorio_B = (reservatorio_B / 100);

// Determinar a diferença em % entre os reservatorios (Ex: Saber se o reservatorio_A teem 25% de diferença do reservatorio_B = porcentagem_diferencial_A < 0.26 )
if (reservatorio_A > reservatorio_B) {
    porcentagem_diferencial_A = (porcentagem_reservatorio_A - porcentagem_reservatorio_B);
} else {
    porcentagem_diferencial_B = (porcentagem_reservatorio_B - porcentagem_reservatorio_A);
}



// Comparações para fazer ações conforme os valores
if (saida < entrada && reservatorio_A >= reservatorio_B) {
    strcpy(estado_valvula, "Totalmente aberta");
    valor_saida = saida;

} else if (saida > entrada && reservatorio_A >= reservatorio_B) {
    strcpy(estado_valvula, "50% aberta");
    valor_saida = (saida /2);

} else if (saida == entrada && reservatorio_A > reservatorio_B) {
    strcpy(estado_valvula, "Totalmente aberta");
    valor_saida = saida;
    
} else if (saida >= entrada && porcentagem_diferencial_A <= 0.25) {
    strcpy(estado_valvula, "50% aberta");
    valor_saida = (saida / 2);

} else if (reservatorio_A < reservatorio_B && saida < entrada) {
    strcpy(estado_valvula, "Abrir válvula");
    valor_saida = saida;

} else if (reservatorio_A > reservatorio_B && porcentagem_reservatorio_A > 0.89 && entrada > saida) {
    strcpy(estado_valvula, "Abrir válvula");
    valor_saida = saida;

}

printf("Estado da válvula: %s\nValor saída: %.02lf\n", estado_valvula, valor_saida);
return 0;    
}

