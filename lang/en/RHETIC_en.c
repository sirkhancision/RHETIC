#include <stdio.h>
#include "../../include/colors.h"
#include "../../include/res.h"
#include "RHETIC_en.h"

void print_greet_en() {
    printf("Welcome to %sRHETIC%s, the Riso-Hudson Enneagram Type Indicator (RHETI) in C!\n"
           "Enter [1] to proceed with the instructions, or [2] to go directly to the test\n"
           "(without the brackets between the numbers).\n", CYAN, RESET_C);
}

void print_instructions_en() {
    printf("This test has %s144%s paired statements, where you have to choose the statement in\n"
    "each pair that describes you best. Even if you feel that in certain pairs,\n"
    "neither describes you very well, or that both statements are almost equally\n"
    "true, you must try to choose the statement that describes you best.\n",
    B_RED, RESET_C);

    printf("\nThe most accurate approach to the test is to take it from the point of view of\n"
    "the past, as you have been most of your life.\n"
    "You must enter the letter that corresponds to the statement you want to select,\n"
    "without the brackets. If you're unsure of what to choose, you can skip the\n"
    "current pair by entering [>].\n");

    printf("\nThe profile you get from RHETI will reflect your personality's principal\n"
    "psychological functions, the balance of which changes over time. Your basic\n"
    "personality type should remain the same, but other personality functions shift\n"
    "over time. You might also want to take the test as you are in the present,\n"
    "after you've taken it before. This test takes approximately 40 minutes.\n");

    printf("\nAfter you've taken the test, it's recommended that you read about the enneagram\n"
    "type you got as a result. Personal recommendations are:\n"
    "%shttps://www.enneagraminstitute.com/%s (english)\n"
    "%shttps://os16mistypes.wixsite.com/16mistypes%s (portuguese)\n",
    BLUE, RESET_C, BLUE, RESET_C);

    printf("\n%sPLEASE NOTE!%s The accuracy of this test will be increased if you understand that\n"
    "we have four \"selves\": our past self, our present self, our ideal self, and\n"
    "our self as others see us. The RHETI is attempting to discern only your past\n"
    "self. Therefore, it's essential that you keep your focus on answering in your\n"
    "past self only, and not mix your past, present, ideal, or social self.\n",
    B_RED, RESET_C);
}

void print_result_en(int a, int b, int c,
                     int d, int e, int f,
                     int g, int h, int i) {
    short unsigned int type_res, wing_res = 0;
    putchar('\n');
    printf("RESULTS:\n");

    type_res = res_type(a, b, c, 
                        d, e, f, 
                        g, h, i);

    wing_res = res_wing(a, b, c, 
                        d, e, f, 
                        g, h, i);
    putchar('\n');

    if (wing_res > 0)
        printf("Your type is likely: %sEnneagram Type %huw%hu%s\n", 
        B_RED, type_res, wing_res, RESET_C);

    else if (type_res == 0 && wing_res == 0)
        printf("Your type is likely: %sa sneaky bastard%s\n", 
        B_RED, RESET_C);
    
    else if (wing_res == 0)
        printf("Your type is likely: %sEnneagram Type %hu%s (wing couldn't be calculated)\n", 
        B_RED, type_res, RESET_C);
    putchar('\n');

    printf("Score:\n"
    "Type 1: %hu\tType 2: %hu\tType 3: %hu\n"
    "Type 4: %hu\tType 5: %hu\tType 6: %hu\n"
    "Type 7: %hu\tType 8: %hu\tType 9: %hu\n",
    d, f, c, 
    e, h, b,
    i, g, a);
    putchar('\n');

    printf("Thanks for trying out RHETIC! :)\n");
}