#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
    {
        char numeroPlaca[10];
        char diaSemana[30];

        scanf("%s", numeroPlaca);
        scanf("%s", diaSemana);

  

    if ((strlen(numeroPlaca) == 8 && numeroPlaca[3] == '-' && isalpha(numeroPlaca[0]) && isalpha(numeroPlaca[1]) && isalpha(numeroPlaca[2]) && isdigit(numeroPlaca[4]) && isdigit(numeroPlaca[5]) && isdigit(numeroPlaca[6]) && isdigit(numeroPlaca[7])) ||
        (strlen(numeroPlaca) == 7 && isalpha(numeroPlaca[0]) && isalpha(numeroPlaca[1]) && isalpha(numeroPlaca[2]) && isdigit(numeroPlaca[3]) && isalpha(numeroPlaca[4]) && isdigit(numeroPlaca[5]) && isdigit(numeroPlaca[6]))) {

            char ultimo = numeroPlaca[strlen (numeroPlaca)-1];
            
        if (strcmp(diaSemana, "SEGUNDA-FEIRA") == 0) {
            if (ultimo == '0' || ultimo == '1') {
                printf("%s nao pode circular segunda-feira\n", numeroPlaca);
            } else {
                printf("%s pode circular segunda-feira\n", numeroPlaca);
            }
        } else if (strcmp(diaSemana, "TERCA-FEIRA") == 0) {
            if (ultimo == '2' || ultimo == '3') {
                printf("%s nao pode circular terca-feira\n", numeroPlaca);
            } else {
                printf("%s pode circular terca-feira\n", numeroPlaca);
            }
        } else if (strcmp(diaSemana, "QUARTA-FEIRA") == 0) {
            if (ultimo == '4' || ultimo == '5') {
                printf("%s nao pode circular quarta-feira\n", numeroPlaca);
            } else {
                printf("%s pode circular quarta-feira\n", numeroPlaca);
            }
        } else if (strcmp(diaSemana, "QUINTA-FEIRA") == 0) {
            if (ultimo == '6' || ultimo == '7') {
                printf("%s nao pode circular quinta-feira\n", numeroPlaca);
            } else {
                printf("%s pode circular quinta-feira\n", numeroPlaca);
            }
        } else if (strcmp(diaSemana, "SEXTA-FEIRA") == 0) {
            if (ultimo == '8' || ultimo == '9') {
                printf("%s nao pode circular sexta-feira\n", numeroPlaca);
            } else {
                printf("%s pode circular sexta-feira\n", numeroPlaca);
            }
        } else if (strcmp(diaSemana, "SABADO") == 0 || strcmp(diaSemana, "DOMINGO") == 0) {
            printf("Nao ha proibicao no fim de semana\n");
        } 
        else {
            printf("Dia da semana invalido\n");

        }
    } else {
        printf("Placa invalida\n");
        if( strcmp(diaSemana,"SEGUNDA-FEIRA" ) != 0 &&
        strcmp(diaSemana,"TERCA-FEIRA" ) != 0 &&
        strcmp(diaSemana,"QUARTA-FEIRA" ) != 0 &&
        strcmp(diaSemana,"QUINTA-FEIRA" ) != 0 &&
        strcmp(diaSemana,"SEXTA-FEIRA" ) != 0 &&
        strcmp(diaSemana,"SABADO" ) != 0 &&
        strcmp(diaSemana,"DOMINGO" ) != 0 
        ) {
            printf("Dia da semana invalido\n");
        }
    }

    return 0;
}
