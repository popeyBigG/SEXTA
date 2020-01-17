#include <stdio.h>
#include <string.h> 

// Constantes
double viagem = 620;     // Preço da viagem por pessoa
double hotel = 40;      // Preço Hotel por pessoa & dia
double aluguer = 29;   // Preço Alguer por dia

// Variaveis
double pacote1_desconto = 15; double pacote2_desconto = 05; double pacote3_desconto = 7.5; // Definir descont em % no final total da soma

double destino_lisboa = 30; double destino_porto = +25; double destino_rabopeixe = -96; // Definir % de cada destino p/ Viagem

double lugar_tivoli = 20; double lugar_universo = 15; double lugar_caranguejo = -96; // Definir % de cada lugar p/ Hotel

double aluguer_europcar = 15; double aluguer_altis = 16; double aluguer_carroca = -98; // Definir % de cada transporte p/ Aluguer

double pacote_total, viagem_total, hotel_total, aluguer_total;

int pessoas, dias;


int main() {

pacote();


return 0;
}

pacote(void) {

int escolha_pacote;

printf("Pacotes:\n        1 - (Viagem + Hotel)   Desconto: %.02lf%\n        2 - (Hotel + Aluguer)  Desconto: %.02lf%\n        3 - (Viagem + Aluguer) Desconto: %.02lf%\n\nEscolha: ", pacote1_desconto, pacote2_desconto, pacote3_desconto); // (- %x é o desconto no valor total)
scanf("%d", &escolha_pacote);

switch (escolha_pacote) {
    case 1:
            pacote1();
            break;
    case 2:
            pacote2();
            break;
    case 3:
            pacote3();
            break;
    default: { system("clear"); printf("Por favor, insira um número valido!\n"); pacote(); }
}

}

definir_pessoas(void) {
    printf("\nNúmero de pessoas: ");
    scanf(" %d", &pessoas); // Definir numero de pessoas pelo input p/ variavel pessoas
}

definir_dias(void) {
    printf("\nNúmero de dias: ");
    scanf(" %d", &dias); // Definir numero de dias pelo input p/ variavel pessoas

}


destino_viagem(void) {

int escolha;

printf("\nDestinos:\n        1 - (Lisboa)   Porcentagem: %.02lf%\n        2 - (Porto)  Porcentagem: %.02lf%\n        3 - (Rabo Peixe) Porcentagem: %.02lf%\n\nEscolha: ", destino_lisboa, destino_porto, destino_rabopeixe); // (desconto dos preços para cada destino)
scanf(" %d", &escolha);

switch (escolha) {
    case 1:
            viagem = viagem + (viagem * destino_lisboa / 100);
            viagem_total = (viagem * pessoas);
            break;
    case 2:
            viagem = viagem + (viagem * destino_porto / 100);
            viagem_total = (viagem * pessoas);
            break;
    case 3:
            viagem = viagem + (viagem * destino_rabopeixe / 100);
            viagem_total = (viagem * pessoas);
            break;
    default: { system("clear"); printf("Por favor, insira um número valido!\n"); destino_viagem(); }

    
}
}

destino_hotel(void) {

int escolha;

printf("\nLugar:\n        1 - (Tivoli Lisboa)   Porcentagem: %.02lf%\n        2 - Universo Porto  Porcentagem: %.02lf%\n        3 - (Caranguejo) Porcentagem: %.02lf%\n\nEscolha: ", lugar_tivoli, lugar_universo, lugar_caranguejo); // (desconto dos preços para cada lugar)
scanf(" %d", &escolha);

switch (escolha) {
    case 1:
            hotel = hotel + (hotel * lugar_tivoli / 100);
            hotel_total = (hotel * dias * pessoas);
            break;
    case 2:
            hotel = hotel + (hotel * lugar_universo / 100);
            hotel_total = (hotel * dias * pessoas);
            break;
    case 3:
            hotel = hotel + (hotel * lugar_caranguejo / 100);
            hotel_total = (hotel * dias * pessoas);
            break;
    default: { system("clear"); printf("Por favor, insira um número valido!\n"); destino_hotel(); }
    
    
}
}


tipo_aluguer(void) {

int escolha;

printf("\nAlguer:\n        1 - (EuropCar)   Porcentagem: %.02lf%\n        2 - (Altis)  Porcentagem: %.02lf%\n        3 - (Carroça) Porcentagem: %.02lf%\n\nEscolha: ", aluguer_europcar, aluguer_altis, aluguer_carroca); // (desconto dos preços para cada destino)
scanf(" %d", &escolha);

switch (escolha) {
    case 1:
            aluguer = aluguer + (aluguer) * (aluguer_europcar / 100);
            aluguer_total = (aluguer * dias);
            break;
    case 2:
            aluguer = aluguer + (aluguer * aluguer_altis / 100);
            aluguer_total = (aluguer * dias);
            break;
    case 3:
            aluguer = aluguer + (aluguer * aluguer_carroca / 100);
            aluguer_total = (aluguer * dias);
            break;
    default: { system("clear"); printf("Por favor, insira um número valido!\n"); tipo_aluguer(); }

    aluguer_total = (aluguer * dias);
}
}


pacote1(void) {

definir_pessoas();
definir_dias();

destino_viagem();
destino_hotel();


pacote_total = (viagem_total + hotel_total) + (viagem_total + hotel_total * pacote1_desconto / 100);

printf("Valor do pacote 1: %.02lf\n", pacote_total);
}


pacote2(void) {

definir_pessoas();
definir_dias();

destino_hotel();
tipo_aluguer();

pacote_total = (hotel_total + aluguer_total) + (hotel_total + aluguer_total * pacote2_desconto / 100);

printf("Valor do pacote 2: %.02lf\n", pacote_total);
}


pacote3(void) {

definir_pessoas();
definir_dias();

destino_viagem();
tipo_aluguer();

pacote_total = (viagem_total + aluguer_total) + (viagem_total + aluguer_total * pacote3_desconto / 100);

printf("Valor do pacote 2: %.02lf\n", pacote_total);
}
