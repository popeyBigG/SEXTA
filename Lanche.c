#include <stdio.h>
#include <string.h>

// Variaveis globais //
double preco;
double precoT;
int quantidade;
char artigo[256] = "Desconhecido";

///////////////////////

int main() {

menu();
definirQtd();
calcs();
outputFinal();

}

menu(void) {

int escolha;

printf(R"EOF(
+-----------------+--------+--------+
|     Artigo      | Código | Preço  |
+-----------------+--------+--------+
| Cachorro Quente | 100    | 2.50 € |
| Hambúrguer      | 101    | 3.50 € |
| Cheeseburger    | 102    | 4.00 € |
| Omelete         | 103    | 3.75 € |
| Francesinha     | 104    | 7.50 € |
+-----------------+--------+--------+
)EOF");

printf("\nInsira o código do produto: ");
scanf("%d", &escolha);

switch(escolha) {

    case 100:
        preco = 2.50;
        strcpy(artigo, "Cachorro Quente");
    break;
    case 101:
        preco = 3.50;
        strcpy(artigo, "Hambúrguer");
    break;
    case 102:
        preco = 4.00;
        strcpy(artigo, "Cheeseburger");
    break;
    case 103:
        preco = 3.75;
        strcpy(artigo, "Omelete");
    break;
    case 104:
        preco = 7.50;
        strcpy(artigo, "Francesinha");
    break;
    default: { printf("Por favor, insira um código valido!\n"); menu(); }

}
}

definirQtd(void) {
    printf("\nInsira a quantidade do produto: ");
    scanf(" %d", &quantidade);
}

calcs(void) {

    precoT = (preco * quantidade);

}

outputFinal(void) {

    printf("\nArtigo: %s \t Quantidade: %d\t   Total a pagar %.02lf\n", artigo, quantidade, precoT);

}