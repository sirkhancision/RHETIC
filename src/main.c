/* RHETIC v1.42
*  by sirkhancision
*  RHETI v2.5 is copyrighted to
*  Don Richard Riso and Russ Hudson */

#include <stdio.h>
#include "../include/colors.h" /* Header for color macros */
#include "../lang/en/RHETIC_en.h" /* Header for english general text */
#include "../lang/pt/RHETIC_pt.h" /* Header for portuguese general text */
#include "../include/stats_en.h" /* Header for the statements of the test in english */
#include "../include/stats_pt.h" /* Header for the statements of the test in portuguese */

short unsigned int type;
short unsigned int d_type1, f_type2, c_type3,
                   e_type4, h_type5, b_type6,
                   i_type7, g_type8, a_type9;

int main() {
    char filec;
    char lang, ins_or_test;
    FILE *ennea_sym;

    /* Print greeting */

    ennea_sym = fopen("include/ennea_sym", "r");
    if (!ennea_sym) {
        printf("\"ennea_sym\" file missing\n");
        return 1;
    }

    filec = fgetc(ennea_sym);
    printf("%s", CYAN); /* Add cyan color to ennea_sym content */
    while (!feof(ennea_sym)) {
        putchar(filec);
        filec = fgetc(ennea_sym);
    }
    fclose(ennea_sym);
    printf("%s", RESET_C); /* Reset color */

    printf("RHETIC v1.42\n"
           "This program is made by %ssirkhancision%s.\n"
           "All rights are reserved to the respective owners of this test.\n",
           B_GREEN, RESET_C);
    putchar('\n');

    /* Select the language of the test */

    printf("LANG:\n"
           "%s[1] English%s\t[2] Português%s\t[3] Français%s\n"
           "Enter any other key to exit.\n",
           B_RED, B_GREEN, BLUE, RESET_C);
    lang = getchar();
    while (getchar() != '\n');

    /* Language: English */

    if (lang == '1') {
        putchar('\n');
        
        print_greet_en();

        ins_or_test = getchar();
        while (getchar() != '\n');
        
        if (ins_or_test == '1') {

            /* Instructions */

            putchar('\n');

            print_instructions_en();
            putchar('\n');

            /* Go to test */

            while(1) {
                printf("Enter [2] to proceed to the test.\n");
                ins_or_test = getchar();
                while (getchar() != '\n');
                if (ins_or_test == '2') break;
            }
        }

        if (ins_or_test == '2') {

            /* The RHETI test */

            stats_eng(); /* Print statements */

        /* Results */
        
        print_result_en(a_type9, b_type6, c_type3,
                        d_type1, e_type4, f_type2,
                        g_type8, h_type5, i_type7);
        }
    }

    /* Linguagem: Português */

    else if (lang == '2') {
        putchar('\n');
        
        print_greet_pt();

        ins_or_test = getchar();
        while (getchar() != '\n');
        
        if (ins_or_test == '1') {

            /* Instruções */

            putchar('\n');

            print_instructions_pt();
            putchar('\n');

            /* Ir ao teste */

            while(1) {
                printf("Entre com [2] para prosseguir com o teste.\n");
                ins_or_test = getchar();
                while (getchar() != '\n');
                if (ins_or_test == '2') break;
            }
        }

        if (ins_or_test == '2') {

            /* O teste RHETI */

            stats_pt(); /* Imprimir frases */

        /* Resultados */
        
        print_result_pt(a_type9, b_type6, c_type3,
                        d_type1, e_type4, f_type2,
                        g_type8, h_type5, i_type7);
        }
    }

    /* Langue: Français */

    else if (lang == '3')
        printf("Soon\n");

    return 0;
}
