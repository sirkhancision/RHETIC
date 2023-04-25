#include "../include/RHETIC_lang.h"
#include "../include/colors.h"
#include "../include/constants.h"
#include "../include/results.h"
#include "../include/types.h"
#include <stdio.h>

/* Prints the second greeting text */
void print_post_greeting(int language) {
  switch (language) {
  case ENGLISH:
    printf(
        "Welcome to %sRHETIC%s, the Riso-Hudson Enneagram Type Indicator "
        "(RHETI) in C!\n"
        "Enter [1] to proceed with the instructions, or [2] to go directly to "
        "the test\n",
        CYAN, RESET_C);
    break;

  case PORTUGUESE:
    printf("Bem-vindo ao %sRHETIC%s, o Indicador de Tipo do Eneagrama de "
           "Riso-Hudson\n"
           "(RHETI) em C!\n"
           "Digite [1] para seguir com as instruções, ou [2] para ir direto ao "
           "teste\n",
           CYAN, RESET_C);
    break;
  }
}

/* Prints the test's instructions */
void print_instructions(int language) {
  switch (language) {
  case ENGLISH:
    printf(
        "This test has %s144%s paired statements, where you have to choose the "
        "statement in\n"
        "each pair that describes you best. Even if you feel that in certain "
        "pairs,\n"
        "neither describes you very well, or that both statements are almost "
        "equally\n"
        "true, you must try to choose the statement that describes you best.\n",
        RED, RESET_C);

    puts(
        "\nThe most accurate approach to the test is to take it from the point "
        "of view of\n"
        "the past, as you have been most of your life.\n"
        "You must enter the letter that corresponds to the statement you want "
        "to select.\n"
        "If you're unsure of what to choose, you can "
        "skip "
        "the\n"
        "current pair by entering [>].");

    puts(
        "\nThe profile you get from RHETIC will reflect your personality's "
        "principal\n"
        "psychological functions, the balance of which changes over time. Your "
        "basic\n"
        "personality type should remain the same, but other personality "
        "functions shift\n"
        "over time. You might also want to take the test as you are in the "
        "present,\n"
        "after you've taken it before. This test takes approximately 40 "
        "minutes to complete.");

    printf(
        "\nAfter you've taken the test, it's recommended that you read about "
        "the Enneagram\n"
        "type you got as a result. Personal recommendations are:\n"
        "%shttps://www.enneagraminstitute.com/%s (English)\n"
        "%shttps://os16mistypes.wixsite.com/16mistypes%s (Portuguese)\n",
        BLUE, RESET_C, BLUE, RESET_C);

    printf(
        "\n%sPLEASE NOTE!%s The accuracy of this test will be increased if "
        "you understand that\n"
        "we have four \"selves\": our past self, our present self, our ideal "
        "self, and\n"
        "our self as others see us. RHETIC is attempting to discern only "
        "your past\n"
        "self. Therefore, it's essential that you keep your focus on "
        "answering in your\n"
        "past self only, and not mix your past, present, ideal, or social "
        "self.\n",
        RED, RESET_C);
    break;

  case PORTUGUESE:
    printf("Esse teste possui %s144%s pares de frases, onde você tem que "
           "escolher a frase em\n"
           "cada par que lhe descreve melhor. Até se você sentir que em certos "
           "pares,\n"
           "nenhum te descreve muito bem, ou que ambas as frases são quase "
           "igualmente\n"
           "verdadeiras, você deve tentar escolher a frase que lhe descreve "
           "melhor.\n",
           RED, RESET_C);

    puts(
        "\nA abordagem mais precisa para o teste é fazê-lo pelo ponto de vista "
        "do\n"
        "passado, como você tem sido na maior parte de sua vida.\n"
        "Você deve digitar a letra correspondente à frase que você deseja "
        "selecionar.\n"
        "Se você estiver incerto do que escolher, você pode "
        "pular o\n"
        "par atual se digitar [>].");

    puts(
        "\nO perfil que você receberá do RHETIC irá refletir as principais "
        "funções\n"
        "psicológicas da sua personalidade, da qual o equilíbrio muda com o "
        "tempo.\n"
        "O seu tipo básico de personalidade deve continuar o mesmo, mas outras "
        "funções\n"
        "da personalidade mudam com o tempo. Você pode querer também fazer o "
        "teste\n"
        "pensando em como você é no presente, depois de já tê-lo feito. Esse "
        "teste\n"
        "leva aproximadamente 40 minutos para fazer.");

    printf("\nApós ter feito o teste, é recomendado que você leia sobre o tipo "
           "do Eneagrama\n"
           "que você obteve como resultado. Recomendações pessoais são:\n"
           "%shttps://www.enneagraminstitute.com/%s (Inglês)\n"
           "%shttps://os16mistypes.wixsite.com/16mistypes%s (Português)\n",
           BLUE, RESET_C, BLUE, RESET_C);

    printf("\n%sATENÇÃO!%s A precisão desse teste será aumentada se você "
           "entender que possuímos\n"
           "quatro \"eus\": o nosso eu do passado, o nosso eu do presente, o "
           "nosso eu ideal,\n"
           "e o eu como os outros nos veem. O RHETIC está tentando discernir "
           "apenas o seu\n"
           "eu do passado. Portanto, é essencial que você mantenha o foco em "
           "responder\n"
           "apenas no seu eu do passado, e não misturar o seu eu do passado, "
           "presente,\n"
           "ideal, ou social.\n",
           RED, RESET_C);
    break;
  }
}

/* Prints the test's results */
void print_result(int language, TYPE *types) {
  struct RESULT {
    int type, wing;
  } RESULT;

  RESULT.type = result_type(types);
  RESULT.wing = result_wing(types);

  switch (language) {
  case ENGLISH:
    printf("\nRESULTS:\n");

    if (RESULT.wing > 0) {
      printf("\nYour type is likely: %sEnneagram Type %dw%d%s\n", RED,
             RESULT.type, RESULT.wing, RESET_C);
    } else if (RESULT.type == 0 && RESULT.wing == 0) {
      printf("\nYour type is likely: %sa sneaky bastard%s\n", RED, RESET_C);
    } else if (RESULT.wing == 0) {
      printf("\nYour type is likely: %sEnneagram Type %d%s (wing couldn't be "
             "calculated)\n",
             RED, RESULT.type, RESET_C);
    }

    printf("\nScore:\n"
           "Type 1: %d\tType 2: %d\tType 3: %d\n"
           "Type 4: %d\tType 5: %d\tType 6: %d\n"
           "Type 7: %d\tType 8: %d\tType 9: %d\n",
           types->d_1, types->f_2, types->c_3, types->e_4, types->h_5,
           types->b_6, types->i_7, types->g_8, types->a_9);

    printf("\nThanks for using RHETIC! :)\n");
    break;

  case PORTUGUESE:
    printf("\nRESULTADOS:\n");

    if (RESULT.wing > 0) {
      printf("\nSeu tipo é provavelmente: %sTipo %dw%d do Eneagrama%s\n", RED,
             RESULT.type, RESULT.wing, RESET_C);
    } else if (RESULT.type == 0 && RESULT.wing == 0) {
      printf("\nSeu tipo é provavelmente: %sum malandro sorrateiro%s\n", RED,
             RESET_C);
    } else if (RESULT.wing == 0) {
      printf(
          "\nSeu tipo é provavelmente: %sTipo %d do Eneagrama%s (asa não pôde "
          "ser calculada)\n",
          RED, RESULT.type, RESET_C);
    }

    printf("\nPontuação:\n"
           "Tipo 1: %d\tTipo 2: %d\tTipo 3: %d\n"
           "Tipo 4: %d\tTipo 5: %d\tTipo 6: %d\n"
           "Tipo 7: %d\tTipo 8: %d\tTipo 9: %d\n",
           types->d_1, types->f_2, types->c_3, types->e_4, types->h_5,
           types->b_6, types->i_7, types->g_8, types->a_9);

    printf("\nObrigado por usar o RHETIC! :)\n");
    break;
  }
}
