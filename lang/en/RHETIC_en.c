#include "RHETIC_en.h"
#include "../../include/colors.h"
#include "../../include/results.h"
#include "../../include/types.h"
#include <stdio.h>

/* Prints the initial greeting text in English */
void print_greet_en(void) {
  printf("Welcome to %sRHETIC%s, the Riso-Hudson Enneagram Type Indicator "
         "(RHETI) in C!\n"
         "Enter [1] to proceed with the instructions, or [2] to go directly to "
         "the test\n"
         "(without the brackets).\n",
         CYAN, RESET_C);
}

/* Prints the test's instructions in English */
void print_instructions_en(void) {
  printf(
      "This test has %s144%s paired statements, where you have to choose the "
      "statement in\n"
      "each pair that describes you best. Even if you feel that in certain "
      "pairs,\n"
      "neither describes you very well, or that both statements are almost "
      "equally\n"
      "true, you must try to choose the statement that describes you best.\n",
      RED, RESET_C);

  puts("\nThe most accurate approach to the test is to take it from the point "
       "of view of\n"
       "the past, as you have been most of your life.\n"
       "You must enter the letter that corresponds to the statement you want "
       "to select,\n"
       "without the brackets. If you're unsure of what to choose, you can skip "
       "the\n"
       "current pair by entering [>].");

  puts("\nThe profile you get from RHETIC will reflect your personality's "
       "principal\n"
       "psychological functions, the balance of which changes over time. Your "
       "basic\n"
       "personality type should remain the same, but other personality "
       "functions shift\n"
       "over time. You might also want to take the test as you are in the "
       "present,\n"
       "after you've taken it before. This test takes approximately 40 "
       "minutes to complete.");

  printf("\nAfter you've taken the test, it's recommended that you read about "
         "the Enneagram\n"
         "type you got as a result. Personal recommendations are:\n"
         "%shttps://www.enneagraminstitute.com/%s (English)\n"
         "%shttps://os16mistypes.wixsite.com/16mistypes%s (Portuguese)\n",
         BLUE, RESET_C, BLUE, RESET_C);

  printf("\n%sPLEASE NOTE!%s The accuracy of this test will be increased if "
         "you understand that\n"
         "we have four \"selves\": our past self, our present self, our ideal "
         "self, and\n"
         "our self as others see us. RHETIC is attempting to discern only "
         "your past\n"
         "self. Therefore, it's essential that you keep your focus on "
         "answering in your\n"
         "past self only, and not mix your past, present, ideal, or social "
         "self.\n\n",
         RED, RESET_C);
}

/* Prints the test's results in English */
void print_result_en(TYPE *types) {
  struct RESULT {
    int type, wing;
  } RESULT;

  RESULT.type = result_type(types);
  RESULT.wing = result_wing(types);

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
         types->d_1, types->f_2, types->c_3, types->e_4, types->h_5, types->b_6,
         types->i_7, types->g_8, types->a_9);

  printf("\nThanks for using RHETIC! :)\n");
}
