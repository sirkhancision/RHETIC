/*  RHETIC v1.57
 *  by sirkhancision
 *  RHETI v2.5 is copyrighted to
 *  Don Richard Riso and Russ Hudson
 */

#include "../include/RHETIC_lang.h" /* Header for text in different languages */
#include "../include/colors.h"      /* Header for color macros */
#include "../include/constants.h" /* Header for constants used throughout the project */
#include "../include/statements.h" /* Header for the statements of the test */
#include "../include/types.h"      /* Header for the Enneagram types */
#include <locale.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_greeting(int argc, char *argv[]);
int language_choice(void);
int instructions_or_test_choice(int language);

int main(int argc, char *argv[]) {
  setlocale(LC_ALL, "");

  TYPE *enneagram_types = (struct TYPE *)malloc(sizeof(struct TYPE));
  if (enneagram_types == NULL) {
    perror("Error allocating memory for \"types\"");
    exit(EXIT_FAILURE);
  }

  print_greeting(argc, argv);
  int language = language_choice();
  print_post_greeting(language);

  int choice;
  do {
    choice = instructions_or_test_choice(language);
    if (choice == INSTRUCTIONS) {
      print_instructions(language);
    }
  } while (choice != TEST);

  print_statements(language, enneagram_types);
  print_result(language, enneagram_types);

  free(enneagram_types);

  return (0);
}

void print_greeting(int argc, char *argv[]) {
  bool display_symbol = true;

  for (int i = 1; i < argc; i++) {
    if (strcmp(argv[i], "--no-symbol") == 0) {
      display_symbol = false;
    }
  }

  if (display_symbol == true) {
    /* Open the enneagram_symbol file */
    FILE *enneagram_symbol = fopen("include/enneagram_symbol.txt", "r");
    if (enneagram_symbol == NULL) {
      perror("Error opening enneagram_symbol.txt");
      exit(EXIT_FAILURE);
    }

    /* Print the content of the enneagram_symbol file */
    printf("%s", CYAN); /* Add cyan color to enneagram_symbol content */

    int file_stream;
    while ((file_stream = fgetc(enneagram_symbol)) != EOF) {
      if (putchar(file_stream) == EOF) {
        perror("Error printing character.");
        exit(EXIT_FAILURE);
      }
    }

    /* Close the enneagram_symbol file */
    if (fclose(enneagram_symbol) != 0) {
      perror("Error closing enneagram_symbol.txt");
      exit(EXIT_FAILURE);
    }

    printf("%s", RESET_C); /* Reset color */
  }

  printf("RHETIC v1.57\n"
         "RHETIC is made by %ssirkhancision%s\n"
         "All rights are reserved to the respective owners of RHETI\n\n",
         GREEN, RESET_C);
}

int language_choice(void) {
  int language;

  puts("Select the language of the test:");
  puts("(select a different option to exit)");
  printf("%s", RED);
  puts("[1] English");
  printf("%s", GREEN);
  puts("[2] Português(BR)");
  printf("%s", RESET_C);

  if (scanf("%d", &language) == EOF) {
    perror("Error reading input.");
    exit(EXIT_FAILURE);
  }

  if (language != ENGLISH && language != PORTUGUESE) {
    puts("Exiting...");
    exit(EXIT_SUCCESS);
  }

  return language;
}

int instructions_or_test_choice(int language) {
  int choice = 0;

  switch (language) {
  case ENGLISH:
    printf("\n%s[1] %sInstructions%s\n", RED, GREEN, RESET_C);
    printf("%s[2] %sThe RHETIC test%s\n", RED, GREEN, RESET_C);

    if (scanf("%d", &choice) == EOF) {
      perror("Error: failed to read input.");
      exit(EXIT_FAILURE);
    }
    break;

  case PORTUGUESE:
    printf("\n%s[1] %sInstruções%s\n", RED, GREEN, RESET_C);
    printf("%s[2] %sO teste RHETIC%s\n", RED, GREEN, RESET_C);

    if (scanf("%d", &choice) == EOF) {
      perror("Erro: falha ao ler entrada.");
      exit(EXIT_FAILURE);
    }
    break;

  default:
    perror("Invalid language choice.");
    exit(EXIT_FAILURE);
    break;
  }

  return choice;
}
