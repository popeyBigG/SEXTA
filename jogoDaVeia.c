#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

// VARIAVEIS GLOBAIS (N SEI USAR POINTERS) [VARIAVEIS GLOBAIS SAO MÀ PRATICAS]

char index[9] = {'A','B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
int jogador = 1;

// »»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»

char mostrarTabela() {

    printf(R"EOF(
             |        |
        %c    |   %c    |   %c
    +--------+--------+--------+
             |        |
        %c    |   %c    |   %c   
    +--------+--------+--------+
             |        |
        %c    |   %c    |   %c

)EOF", index[0], index[1], index[2], index[3], index[4], index[5], index[6], index[7], index[8]);

}

char funcao_escolha(void) {


char escolha = ' ';


printf("[Vez: %d] Escolha um quadrado: ", jogador);
scanf(" %c", &escolha);

switch(escolha) {

// »»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»
    case 'A': case 'a':
    
    if (index[0] == 'x' || index[0] == 'o') {
            system("clear"); printf("Ja em uso! Por favor, escolha outro quadrado.");
    } else {
        // Se não jogado fazer: 

            if (jogador == 1 || jogador == 3 || jogador == 5 || jogador == 7 || jogador == 9 ) {
              index[0] = 'o';  
            } else if (jogador == 2 || jogador == 4 || jogador == 6 || jogador == 8) {
              index[0] = 'x';
            }

            jogador++;
    }
            jogar();
            break; 
// »»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»
    case 'B': case 'b':

        if (index[1] == 'x' || index[1] == 'o') {
            system("clear"); printf("Ja em uso! Por favor, escolha outro quadrado.");
    } else {
        // Se não jogado fazer:  

            if (jogador == 1 || jogador == 3 || jogador == 5 || jogador == 7 || jogador == 9) {
              index[1] = 'o';  
            } else if (jogador == 2 || jogador == 4 || jogador == 6 || jogador == 8) {
              index[1] = 'x';
            }
            jogador++;
    }
            jogar();
            break;
// »»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»
    case 'C': case 'c':

        if (index[2] == 'x' || index[2] == 'o') {
            system("clear"); printf("Ja em uso! Por favor, escolha outro quadrado.");
    } else { 
        // Se não jogado fazer:
        
            if (jogador == 1 || jogador == 3 || jogador == 5 || jogador == 7 || jogador == 9) {
              index[2] = 'o';  
            } else if (jogador == 2 || jogador == 4 || jogador == 6 || jogador == 8) {
              index[2] = 'x';
            }
            jogador++;
    }
            jogar();
            break;
    case 'D': case 'd':

        if (index[3] == 'x' || index[3] == 'o') {
            system("clear"); printf("Ja em uso! Por favor, escolha outro quadrado.");
    } else {
        // Se não jogado fazer:

            if (jogador == 1 || jogador == 3 || jogador == 5 || jogador == 7 || jogador == 9) {
              index[3] = 'o';  
            } else if (jogador == 2 || jogador == 4 || jogador == 6 || jogador == 8) {
              index[3] = 'x';
            }
            jogador++;
    }
            jogar();
            break;
// »»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»
    case 'E': case 'e':

        if (index[4] == 'x' || index[4] == 'o') {
            system("clear"); printf("Ja em uso! Por favor, escolha outro quadrado.");
    } else {
        // Se não jogado fazer:

            if (jogador == 1 || jogador == 3 || jogador == 5 || jogador == 7 || jogador == 9) {
              index[4] = 'o';  
            } else if (jogador == 2 || jogador == 4 || jogador == 6 || jogador == 8) {
              index[4] = 'x';
            }
            jogador++;
    }
            jogar();
            break;
// »»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»
    case 'F': case 'f':

        if (index[5] == 'x' || index[5] == 'o') {
            system("clear"); printf("Ja em uso! Por favor, escolha outro quadrado.");
    } else {
        // Se não jogado fazer:

            if (jogador == 1 || jogador == 3 || jogador == 5 || jogador == 7 || jogador == 9) {
              index[5] = 'o';  
            } else if (jogador == 2 || jogador == 4 || jogador == 6 || jogador == 8) {
              index[5] = 'x';
            }
            jogador++;
    }
            jogar();
            break;
// »»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»
    case 'G': case 'g':

        if (index[6] == 'x' || index[6] == 'o') {
            system("clear"); printf("Ja em uso! Por favor, escolha outro quadrado.");
    } else {
        // Se não jogado fazer:
            if (jogador == 1 || jogador == 3 || jogador == 5 || jogador == 7 || jogador == 9) {
              index[6] = 'o';  
            } else if (jogador == 2 || jogador == 4 || jogador == 6 || jogador == 8) {
              index[6] = 'x';
            }
            jogador++;
    }    
            jogar();
            break;
// »»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»
    case 'H': case 'h':

        if (index[7] == 'x' || index[7] == 'o') {
            system("clear"); printf("Ja em uso! Por favor, escolha outro quadrado.");
    } else {
        // Se não jogado fazer:

            if (jogador == 1 || jogador == 3 || jogador == 5 || jogador == 7 || jogador == 9) {
              index[7] = 'o';  
            } else if (jogador == 2 || jogador == 4 || jogador == 6 || jogador == 8) {
              index[7] = 'x';
            }
            jogador++;
    }    
            jogar();
            break;
// »»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»
    case 'I': case 'i':

        if (index[8] == 'x' || index[8] == 'o') {
            system("clear"); printf("Ja em uso! Por favor, escolha outro quadrado."); 
    } else {
        // Se não jogado fazer:

            if (jogador == 1 || jogador == 3 || jogador == 5 || jogador == 7 || jogador == 9) {
              index[8] = 'o';  
            } else if (jogador == 2 || jogador == 4 || jogador == 6 || jogador == 8) {
              index[8] = 'x';
            }
            jogador++;
    }
            jogar();
            break;
   default: { jogar(); }

} 
// »»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»

}

void jogar(void) {

  system("clear");
  chegarGanhador();
  mostrarTabela();
  funcao_escolha();

}

chegarGanhador(void) {
    if (index[0] == 'x' && index[1] == 'x' && index[2] == 'x' || index[3] == 'x' && index[4] == 'x' && index[5] == 'x' ||
        index[6] == 'x' && index[7] == 'x' && index[8] == 'x' || index[0] == 'x' && index[3] == 'x' && index[6] == 'x' ||
        index[1] == 'x' && index[4] == 'x' && index[7] == 'x' || index[2] == 'x' && index[5] == 'x' && index[8] == 'x' ||
        index[0] == 'x' && index[4] == 'x' && index[8] == 'x' || index[6] == 'x' && index[4] == 'x' && index[2] == 'x'  ) {
        printf("O jogador 2 venceu a partida! Parabéns!\n");
        exit(1);

    } else if 

       (index[0] == 'o' && index[1] == 'o' && index[2] == 'o' || index[3] == 'o' && index[4] == 'o' && index[5] == 'o' ||
        index[6] == 'o' && index[7] == 'o' && index[8] == 'o' || index[0] == 'o' && index[3] == 'o' && index[6] == 'o' ||
        index[1] == 'o' && index[4] == 'o' && index[7] == 'o' || index[2] == 'o' && index[5] == 'o' && index[8] == 'o' ||
        index[0] == 'o' && index[4] == 'o' && index[8] == 'o' || index[6] == 'o' && index[4] == 'o' && index[2] == 'o'  ) {
        printf("O jogador 1 venceu a partida! Parabéns!\n");
        exit(1);
    }
}

int main() {   

jogar();

return 0;
}

