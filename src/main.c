/*	RHETIC v1.42-4
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

TYPE types_global = {
	.a_9 = 0, .b_6 = 0, .c_3 = 0, .d_1 = 0, .e_4 = 0, .f_2 = 0, .g_8 = 0, .h_5 = 0, .i_7 = 0
};

int main(void) {
	int filec; /* Characters from the file stream */
	int lang = 0; /* Variable to define the language of the UI */
	int ins_or_test = 0; /* Variable to choose between having instructions or not */
	FILE *ennea_sym; /* Pointer to the text file containing ASCII art of the Enneagram symbol */

	/* Print greeting */
	/* Checks if ennea_sym file exists beforehand */
	if (!(ennea_sym = fopen("include/ennea_sym.txt", "r"))) {
		printf("\"ennea_sym.txt\" file missing\n");
		return 1;
	}

	printf("%s", CYAN); /* Add cyan color to ennea_sym content */
	while ((filec = fgetc(ennea_sym)) != EOF)
		if (putchar(filec) == EOF)
			printf("Error printing character.\n");
	if (fclose(ennea_sym) == EOF)
		printf("Error closing ennea_sym.txt\n");
	printf("%s", RESET_C); /* Reset color */

	printf("RHETIC v1.42-4\n"
		"This program was made by %ssirkhancision%s.\n"
		"All rights are reserved to the respective owners of this test.\n",
		GREEN, RESET_C);

	/* Select the language of the test */
	printf("\nLANG:\n"
		"%s[1] English%s\t[2] Português(BR)%s\t[3] Français(CA)%s\n"
		"Enter any other key to exit.\n",
		RED, GREEN, BLUE, RESET_C);
	if (scanf("%d", &lang) == EOF) {
		printf("Couldn't read input.\n");
		return 2;
	}

	/* Language: English */
	if (lang == 1) {
		print_greet_en();

		while (ins_or_test != EOF) {
			if (scanf("%d", &ins_or_test) == EOF) {
				printf("Couldn't read input.\n");
				return 2;
			}

			if (ins_or_test == 1) {
				/* Instructions */
				print_instructions_en();
				printf("Enter [2] to proceed to the test.\n");
			}
			else if (ins_or_test == 2) {
				/* The RHETI test */
				stats_eng(); /* Print statements */

				/* Results */
				print_result_en(types_global);
				ins_or_test = EOF; /* To exit the loop */
			}
		}
	}
	/* Linguagem: Português(BR) */
	else if (lang == 2) {
		print_greet_pt();

		while (ins_or_test != EOF) {
			if (scanf("%d", &ins_or_test) == EOF) {
				printf("Não foi possível ler a entrada.\n");
				return 2;
			}

			if (ins_or_test == 1) {
				/* Instruções */
				print_instructions_pt();
				printf("Digite [2] para prosseguir com o teste.\n");
			}
			else if (ins_or_test == 2) {
				/* O teste RHETI */
				stats_pt(); /* Imprimir frases */

				/* Resultados */
				print_result_pt(types_global);
				ins_or_test = EOF; /* Para sair do loop */
			}
		}
	}
	/* Langue: Français(CA) */
	else if (lang == 3)
		printf("Soon\n");

	return 0;
}
