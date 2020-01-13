#include <stdio.h>
#include <string.h>

// Variaveis globais //

double peso, altura, IMC;
char clasf[256] = "Desconhecido";

///////////////////////

int main() {

intrDados();
calcIMC();

}

intrDados(void) {

    printf("Introduza seu peso (KG): ");
    scanf("%lf", &peso);

    printf("Introduza sua altura (m): ");
    scanf(" %lf", &altura);

}


calcIMC(void) {

    IMC = (peso) / (altura * altura);

    if (IMC < 18.5) {

        strcpy(clasf, "Abaixo do peso");

    } else if (IMC > 18.59 && IMC < 25) {

        strcpy(clasf, "Saudável");

    } else if (IMC > 24.99 && IMC < 29.91) {

        strcpy(clasf, "Peso em excesso");

    } else if (IMC > 29.99 && IMC < 35) {

        strcpy(clasf, "Obesidade Grau I");

    } else if (IMC > 34.99 && IMC < 40) {

        strcpy(clasf, "Obesidade Grau II");

    } else {
        strcpy(clasf, "Obesidade Grau III");
    }
    printf("\nSeu IMC: %.02lf\t           Classificação: %s\n", IMC, clasf);
}

