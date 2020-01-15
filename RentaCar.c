#include <stdio.h>
#include <string.h>

            /*   Const globais   */

// Valor da tarifa conforme a classe diaria se KM Ilimitado //

const double aIlimitado = 27.50; 
const double bIlimitado = 32.50; 
const double cIlimitado = 37.50; 
const double dIlimitado = 40.00; 



// Valor da tarifa diaria conforme a classe se Diaria + KM percorrido //

const double aDiaria = 14.00; const double aPrecoKM = 0.17;
const double bDiaria = 17.00; const double bPrecoKM = 0.20;
const double cDiaria = 20.00; const double cPrecoKM = 0.25;
const double dDiaria = 22.00; const double dPrecoKM = 0.30;



// Valor do seguro diario conforme a classe  //

const double aSeguro = 6.50; const double bSeguro = 7.50;
const double cSeguro = 8.50; const double dSeguro = 10.00;


            /* Variaveis globais */

char classe[256]; char tarifa[256]; char seguro[256];

int dias;
double total, precoTarifa;

            /* ================= */

int main() {

pergunta1();
menu1();
menu2();
menu3();
calculos();
outputFinal();

return 0;
}


/* Funções secundárias */

pergunta1(void) {

printf("Número de dias p/ aluguer: ");
scanf("%d", &dias);

}

/* =================== */

menu1(void) {
    // Selecção da classe pelo utilizador //

char escolha1;

printf(R"EOF(
    +----------------+--------------+   +--------+
    | KMs Ilimitados | Diaria + KM  |   | Seguro |
+---+----------------+-------+------+   +--------+
| A |      27,50     | 14,00 | 0,17 |   |  6,50  |
+---+----------------+-------+------+   +--------+
| B |      32,50     | 17,00 | 0,20 |   |  7,50  |
+---+----------------+-------+------+   +--------+
| C |      37,50     | 20,00 | 0,25 |   |  8,50  |
+---+----------------+-------+------+   +--------+
| D |      40,00     | 22,00 | 0,30 |   |  10,00 |
+---+----------------+-------+------+   +--------+
)EOF");


printf("\nEscolha a classe conforme a Letra: ");
scanf(" %c", &escolha1);

switch (escolha1) {

    case 'A':
    case 'a':
          strcpy(classe, "A");
          system("clear");
          printf("Classe selecionada: %s\n", classe);
          break;
    case 'B':
    case 'b':
          strcpy(classe, "B");
          system("clear");
          printf("Classe selecionada: %s\n", classe);
          break;
    case 'C':
    case 'c':
          strcpy(classe, "C");
          system("clear");
          printf("Classe selecionada: %s\n", classe);
          break;
    case 'D':
    case 'd':
          strcpy(classe, "D");
          system("clear");
          printf("Classe selecionada: %s\n", classe);
          break;
    default: { system("clear"); printf("Por favor, insira uma letra válida!"); menu1(); break;}
}

}

menu2(void) {
    // Selecção da tarifa pelo utilizador

int escolha2;

printf(R"EOF(
    +----------------+--------------+   +--------+
    | KMs Ilimitados | Diaria + KM  |   | Seguro |
+---+----------------+-------+------+   +--------+
| A |      27,50     | 14,00 | 0,17 |   |  6,50  |
+---+----------------+-------+------+   +--------+
| B |      32,50     | 17,00 | 0,20 |   |  7,50  |
+---+----------------+-------+------+   +--------+
| C |      37,50     | 20,00 | 0,25 |   |  8,50  |
+---+----------------+-------+------+   +--------+
| D |      40,00     | 22,00 | 0,30 |   |  10,00 |
+---+----------------+-------+------+   +--------+
)EOF");

    
printf("\nEscolha uma tarifa:\t1 - KMs Ilimitados\n\t                2 - Diaria + KM\n");
scanf(" %d", &escolha2);

switch (escolha2) {

    case 1:
          strcpy(tarifa, "KMs Ilimitados");
          system("clear");
          printf("Tarifa selecionada: %s\n", tarifa);
          break;
    case 2:
          strcpy(tarifa, "Diaria + KM");
          system("clear");
          printf("Tarifa selecionada: %s\n", tarifa);
          break;

    default: { system("clear"); printf("Por favor, insira uma opção válida!"); menu2(); break;}
}
}

menu3(void) {
// Pergutar se o utilizador quer o seguro //
int escolha3;

printf(R"EOF(
    +--------+
    | Seguro |
+---+--------+
| A |  6,50  |
+---++-------+
| B |  7,50  |
+---+--------+
| C |  8,50  |
+---+--------+
| D |  10,00 |
+---+--------+
)EOF");


printf("\nIncluir seguro?\n1 - Sim\t2 - Não\n");
scanf(" %d", &escolha3);

switch (escolha3) {

    case 1:
          strcpy(seguro, "Sim");
          system("clear");
          printf("Seguro: %s\n", seguro);
          break;
    case 2: 
          strcpy(seguro, "Não");
          system("clear");
          printf("Seguro: %s\n", seguro);
          break;

    default: { system("clear"); printf("Por favor, insira uma opção válida!"); menu3(); break;}
}

}

calculos(void) {

    if (tarifa == "KMs Ilimitados") {

    precoTarifa = 20;
    total = (precoTarifa * dias);

    } else {

        precoTarifa = 30;
        total = (precoTarifa * dias);

    }

}

outputFinal(void) {

printf("Total: %.02lf", total);

}
/* =================== */