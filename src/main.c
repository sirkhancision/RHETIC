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
	int filec; /* Declared as int due to use of EOF */
	char lang, ins_or_test;
	FILE *ennea_sym;

	/* Print greeting */
	/* Checks if ennea_sym file exists beforehand */
	if (!(ennea_sym = fopen("include/ennea_sym.txt", "r"))) {
		printf("\"ennea_sym\" file missing\n");
		return 1;
	}

	printf("%s", CYAN); /* Add cyan color to ennea_sym content */
	while ((filec = fgetc(ennea_sym)) != EOF)
		putchar(filec);
	fclose(ennea_sym);
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
	while ((lang = getchar()) && (getchar() != '\n'));

	/* Language: English */
	if (lang == '1') {
		print_greet_en();

		while ((ins_or_test = getchar()) && (getchar() != '\n'));

		if (ins_or_test == '1') {
			/* Instructions */
			print_instructions_en();
			putchar('\n');

			/* Go to test */
			while (ins_or_test != '2') {
				printf("Enter [2] to proceed to the test.\n");
				while ((ins_or_test = getchar()) && (getchar() != '\n'));
			}
		}

		if (ins_or_test == '2') {
			/* The RHETI test */
			stats_eng(); /* Print statements */

			/* Results */
			print_result_en(types_global);
		}
	}

	/* Linguagem: Português(BR) */
	else if (lang == '2') {
		print_greet_pt();

		while ((ins_or_test = getchar()) && (getchar() != '\n'));

		if (ins_or_test == '1') {
			/* Instruções */
			print_instructions_pt();
			putchar('\n');

			/* Ir ao teste */
			while (ins_or_test != '2') {
				printf("Entre com [2] para prosseguir com o teste.\n");
				while ((ins_or_test = getchar()) && (getchar() != '\n'));
			}
		}

		if (ins_or_test == '2') {
			/* O teste RHETI */
			stats_pt(); /* Imprimir frases */

			/* Resultados */
			print_result_pt(types_global);
		}
	}

	/* Langue: Français(CA) */
	else if (lang == '3')
		printf("Soon\n");

	return 0;
}
