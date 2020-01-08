#include <stdio.h>

// Variaveis globais const preço por m² //

const double moradia = 550;
const double terreno = 300;
const double quinta = 200;
const double armazem = 600;

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> //

// Variaveis globais de escolhas        //

int desconto;
int aumento;
double comprimento;
double largura;
double areaTotal;

char negocio[256];
char tipo[256];
char loc[256];
int valorm2;
double total;


// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> //

int main() {

    menu1();

return 0;
}

menu1(void) {

    int escolha;

    printf("Imobiliária ENTA\n\n    ↳ Negocio: 1 - Compra\n               2 - Venda\n\nEscolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
               negocio == "Compra";
               menuTipo();
               break;
        case 2:
               negocio == "Venda";
               menuTipo();
               break;
        default: (printf("\n\nOpção inválida! Por favor, selecione uma opção correta.\n\n\n\n")); menu1(); break;
    }
}   

menuTipo(void) {

    char escolhaTipo;

printf(R"EOF(
+-------------+-----------+
|     Tipo     | Preço m² |
+-----------+-------------+
| M - Moradia  |   550 €  |
| T - Terreno  |   300 €  |
| Q - Quinta   |   200 €  |
| A - Armazém  |   600 €  |
+------------+------------+
)EOF");

    printf("\nEscolha: ");
    scanf(" %c", &escolhaTipo);

    switch (escolhaTipo) {
    
    case 'M':
    case 'm':
        tipo == "Moradia";
        valorm2 == moradia;
        localizacao();
        break;
    case 'T':
    case 't':
        tipo == "Terreno";
        valorm2 = terreno;
        localizacao();
        break;
    case 'Q':
    case 'q':
        tipo == "Quinta";
        valorm2 = quinta;
        localizacao();
        break;
    case 'A':
    case 'a':
        tipo == "Armazém";
        valorm2 = armazem;
        localizacao();
        break;
    default: (printf("\nOpção inválida! Por favor, selecione uma opção correta.\n")); menuTipo(); break;
    }

}

localizacao(void) {

char escolhaLoc;

printf(R"EOF(
+-------------+------------+-----------+
|                 | Desconto | Aumento |
+   Localização   +----------+---------+
|                 |  Compra  |  Venda  |
+-------------+------------+-----------+
| P - PDL         |   -4  %  |  + 5%   |
+-------------+------------+-----------+
| L - LAGOA       |   -3  %  |  + 2%   |
+-------------+------------+-----------+
| N - NORDESTE    |   -30 %  |    1%   |
+-------------+------------+-----------+
)EOF");

    printf("\nEscolha: ");
    scanf(" %c", &escolhaLoc);

    switch (escolhaLoc) {
    
    case 'P':
    case 'p':
        loc == "PDL";
        calcArea();
        break;
    case 'L':
    case 'l':
        loc == "LAGOA";
        calcArea();
        break;
    case 'N':
    case 'n':
        loc == "NORDESTE";
        calcArea();
        break;
    default: (printf("\nOpção inválida! Por favor, selecione uma opção correta.\n")); localizacao(); break;
    }
}

calcArea(void) {

    printf("\nIntroduza a área:\n\nComprimento: ");
    scanf(" %lf", &comprimento);

    printf("\nLargura: ");
    scanf(" &lf", &largura);

    areaTotal = (comprimento * largura);

    calculos();
}


calculos(void) {

/* REFERENCIAS
char negocio[256];
char tipo[256];
char loc[256];
int valorm2;
double total; */

if (negocio == "Compra" && loc == "PDL") {
    desconto = 0.04;
} else if (negocio == "Venda" && loc == "PDL") {
    aumento = 0.05;
} else if (negocio == "Compra" && loc == "LAGOA") {
    desconto = 0.03;
} else if (negocio == "Venda" && loc == "LAGOA") {
    aumento = 0.02;
} else if (negocio == "Compra" && loc == "NORDESTE") {
    desconto = 0.30;
} else if (negocio == "Venda" && loc == "NORDESTE") {
    aumento = 0.01;
}

total = (areaTotal * valorm2) - (areaTotal * valorm2 * desconto);


}