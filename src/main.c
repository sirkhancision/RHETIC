/*	RHETIC v1.42-41
 *	by sirkhancision
 *	RHETI v2.5 is copyrighted to
 *	Don Richard Riso and Russ Hudson
 */

#include "../include/colors.h" /* Header for color macros */
#include "../include/stats_en.h" /* Header for the statements of the test in english */
#include "../include/stats_pt.h" /* Header for the statements of the test in portuguese */
#include "../include/type.h" /* Header for the enneagram types */
#include "../lang/en/RHETIC_en.h" /* Header for english general text */
#include "../lang/pt/RHETIC_pt.h" /* Header for portuguese general text */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int filec; /* Characters from the file stream */
    int lang = 0; /* Variable to define the language of the UI */
    int ins_or_test = 0; /* Variable to choose between having instructions or not */
    FILE *ennea_sym; /* Pointer to the text file containing ASCII art of the Enneagram symbol */
    TYPE *types = (struct TYPE*) malloc(sizeof(struct TYPE));
    if (types == NULL) {
            puts("Error allocating memory for \"types\".");
            exit(EXIT_FAILURE);
    }

    /* Print greeting */
    /* Checks if ennea_sym file exists beforehand */
    if (!(ennea_sym = fopen("include/ennea_sym.txt", "r"))) {
        puts("\"ennea_sym.txt\" file missing.");
        exit(EXIT_FAILURE);
    }

    printf("%s", CYAN); /* Add cyan color to ennea_sym content */
    while ((filec = fgetc(ennea_sym)) != EOF)
        if (putchar(filec) == EOF)
            puts("Error printing character.");
    
    if (fclose(ennea_sym) == EOF)
        puts("Error closing ennea_sym.txt.");
    printf("%s", RESET_C); /* Reset color */

    printf("RHETIC v1.42-41\n"
        "This program was made by %ssirkhancision%s.\n"
        "All rights are reserved to the respective owners of this test.\n",
        GREEN, RESET_C);

    /* Select the language of the test */
    printf("\nLANG:\n"
        "%s[1] English%s    [2] Português(BR)%s    [3] Français(CA)%s\n"
        "Enter any other key to exit.\n",
        RED, GREEN, BLUE, RESET_C);
    
    if (scanf("%d", &lang) == EOF) {
        puts("Couldn't read input.");
        exit(EXIT_FAILURE);
    }

    if (lang == 1) {
        /* Language: English */
        print_greet_en();

        while (ins_or_test != EOF) {
            if (scanf("%d", &ins_or_test) == EOF) {
                puts("Couldn't read input.");
                exit(EXIT_FAILURE);
            }

            if (ins_or_test == 1) {
                /* Instructions */
                print_instructions_en();
                puts("Enter [2] to proceed to the test.");
            } else if (ins_or_test == 2) {
                /* The RHETI test */
                stats_eng(types); /* Print statements */

                /* Results */
                print_result_en(types);
                ins_or_test = EOF; /* To exit the loop */
            }
        }
    } else if (lang == 2) {
        /* Linguagem: Português(BR) */
        print_greet_pt();

        while (ins_or_test != EOF) {
            if (scanf("%d", &ins_or_test) == EOF) {
                puts("Não foi possível ler a entrada.");
                exit(EXIT_FAILURE);
            }

            if (ins_or_test == 1) {
                /* Instruções */
                print_instructions_pt();
                puts("Digite [2] para prosseguir com o teste.");
            } else if (ins_or_test == 2) {
                /* O teste RHETI */
                stats_pt(types); /* Imprimir frases */

                /* Resultados */
                print_result_pt(types);
                ins_or_test = EOF; /* Para sair do loop */
            }
        }
    } else if (lang == 3) {
        /* Langue: Français(CA) */
        puts("Soon.");
    }

    free(types);
    
    return 0;
}
