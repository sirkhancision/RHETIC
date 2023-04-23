/*  RHETIC v1.57
 *  by sirkhancision
 *  RHETI v2.5 is copyrighted to
 *  Don Richard Riso and Russ Hudson
 */

#include "../include/colors.h" /* Header for color macros */
#include "../include/statements_en.h" /* Header for the statements of the test in English */
#include "../include/statements_pt.h" /* Header for the statements of the test in Portuguese */
#include "../include/types.h"     /* Header for the Enneagram types */
#include "../lang/en/RHETIC_en.h" /* Header for English general text */
#include "../lang/pt/RHETIC_pt.h" /* Header for Portuguese general text */
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int file_stream;  /* Characters from the file stream */
  int language = 0; /* Variable to define the language of the UI */
  int instructions_or_test =
      0; /* Variable to choose between having instructions or not */
  FILE *enneagram_symbol; /* Pointer to the text file containing ASCII art of
                      the Enneagram symbol */
  TYPE *types = (struct TYPE *)malloc(sizeof(struct TYPE));
  if (types == NULL) {
    puts("Error allocating memory for \"types\".");
    exit(EXIT_FAILURE);
  }

  /* Print greeting */
  /* Checks if enneagram_symbol file exists beforehand */
  if (!(enneagram_symbol = fopen("include/enneagram_symbol.txt", "r"))) {
    puts("\"enneagram_symbol.txt\" file missing.");
    exit(EXIT_FAILURE);
  }

  printf("%s", CYAN); /* Add cyan color to enneagram_symbol content */
  while ((file_stream = fgetc(enneagram_symbol)) != EOF) {
    if (putchar(file_stream) == EOF) {
      puts("Error printing character.");
    }
  }

  if (fclose(enneagram_symbol) == EOF) {
    puts("Error closing enneagram_symbol.txt.");
  }
  printf("%s", RESET_C); /* Reset color */

  printf("RHETIC v1.57\n"
         "RHETIC is made by %ssirkhancision%s.\n"
         "All rights are reserved to the respective owners of RHETI.\n",
         GREEN, RESET_C);

  /* Select the language of the test */
  printf("\nLANG:\n"
         "%s[1] English%s    [2] Português(BR)%s\n"
         "Enter any other key to exit.\n",
         RED, GREEN, RESET_C);

  if (scanf("%d", &language) == EOF) {
    puts("Couldn't read input.");
    exit(EXIT_FAILURE);
  }

  if (language == 1) {
    /* Language: English */
    setlocale(LC_ALL, "en_US.UTF-8");
    print_greet_en();

    while (instructions_or_test != EOF) {
      if (scanf("%d", &instructions_or_test) == EOF) {
        puts("Couldn't read input.");
        exit(EXIT_FAILURE);
      }

      if (instructions_or_test == 1) {
        /* Instructions */
        print_instructions_en();
        puts("Enter [2] to proceed to the test.");
      } else if (instructions_or_test == 2) {
        /* The RHETI test */
        statements_english(types); /* Print statements */

        /* Results */
        print_result_en(types);
        instructions_or_test = EOF; /* To exit the loop */
      }
    }
  } else if (language == 2) {
    /* Linguagem: Português(BR) */
    setlocale(LC_ALL, "pt_BR.UTF-8");
    print_greet_pt();

    while (instructions_or_test != EOF) {
      if (scanf("%d", &instructions_or_test) == EOF) {
        puts("Não foi possível ler a entrada.");
        exit(EXIT_FAILURE);
      }

      if (instructions_or_test == 1) {
        /* Instruções */
        print_instructions_pt();
        puts("Digite [2] para prosseguir com o teste.");
      } else if (instructions_or_test == 2) {
        /* O teste RHETI */
        statements_portuguese(types); /* Imprimir frases */

        /* Resultados */
        print_result_pt(types);
        instructions_or_test = EOF; /* Para sair do loop */
      }
    }
  }

  free(types);

  return (0);
}
