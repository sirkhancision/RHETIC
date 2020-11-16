/* RHETIC v1.42857
*  by sirkhancision
*  RHETI v2.5 is copyrighted to
*  Don Richard Riso and Russ Hudson
*  and Houghton Mifflin Company */

#include <stdio.h>
#include "../lang/en/RHETIC_en.h" /* Header for english greetins */
#include "../include/colors.h" /* Header for color macros */
#include "../include/stats.h" /* Header for the statements of the test */

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

    printf("RHETIC v1.42857\n"
           "This program is made by %ssirkhancision%s.\n"
           "All rights are reserved to the respective owners of this test.\n",
           B_GREEN, RESET_C);
    putchar('\n');

    /* Select the language of the test */

    printf("LANG:\n"
           "%s[1] English\t%s[2] Portugues%s\n"
           "Enter any other key to exit.\n",
           B_RED, B_GREEN, RESET_C);
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

            stats_eng(); /*Print statements */

        /* Results */
        
        print_result_en(a_type9, b_type6, c_type3,
                        d_type1, e_type4, f_type2,
                        g_type8, h_type5, i_type7);
        }
    }

    /* Linguagem: Português */

    if (lang == '2') {
        printf("soon\n");
        return 2;
    }

    else printf("Exiting...\n");

    return 0;
}