#include <stdio.h>

int main() {
    float costo_biglietto, importo_da_pagare;
    char condizione;

    printf("Inserisci il costo del biglietto: ");
    scanf("%f", &costo_biglietto);

    printf("Inserisci la condizione dell'utente (P per pensionato, S per studente, D per disoccupato: ");
    scanf(" %c", &condizione);

    switch (condizione) {

        case'P':
            importo_da_pagare = costo_biglietto * 0.90; // Sconto del 10%
        printf("l'importo da pagare è: %.2f", importo_da_pagare);
        break;

        case 'S':
            importo_da_pagare = costo_biglietto * 0.85;  //Sconto del 15%
        printf("l'importo da pagare è: %.2f", importo_da_pagare);
        break;

        case 'D':
            importo_da_pagare = costo_biglietto * 0.75; // Sconto del 25%
        printf("l'importo da pagare è: %.2f", importo_da_pagare);
        break;

        default:
            printf("Condizione non valida");

    }

    return 0;
}