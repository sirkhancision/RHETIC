#include "../include/res.h"
#include "../include/quick.h"

extern short unsigned int type;

/* Function using different algorithms to calculate the Enneagram Type, based on the test's answers */
short unsigned int res_type(int a, int b, int c, 
                            int d, int e, int f, 
                            int g, int h, int i) {
    short unsigned int feel, think, instinct, 
                       assertive, dutiful, withdrawn, 
                       positive, reactive, competency,
                       n, types[9];

    types[0] = a; types[1] = b; types[2] = c;
    types[3] = d; types[4] = e; types[5] = f;
    types[6] = g; types[7] = h; types[8] = i;

    /* Sort biggest value */
    n = sizeof(types)/sizeof(types[0]);
    quicksort(types, 0, n-1);

    /* Highest score method */
    if (types[8] == 0) type = 0;
    else if (types[8] == a) type = 9;
    else if (types[8] == b) type = 6;
    else if (types[8] == c) type = 3;
    else if (types[8] == d) type = 1;
    else if (types[8] == e) type = 4;
    else if (types[8] == f) type = 2;
    else if (types[8] == g) type = 8;
    else if (types[8] == h) type = 5;
    else if (types[8] == i) type = 7;

    /* Defining triads */
    /* Centers of Intelligence */
    feel = (c + e + f); /* 3 + 4 + 2 */
    think = (b + h + i); /* 6 + 5 + 7 */
    instinct = (a + d + g); /* 9 + 1 + 8 */

    /* Hornevian Groups */
    assertive = (c + i + g); /* 3 + 7 + 8 */
    dutiful = (d + f + b); /* 1 + 2 + 6 */
    withdrawn = (e + h + a); /* 4 + 5 + 9 */

    /* Harmonic Groups */
    positive = (a + i + f); /* 9 + 7 + 2 */
    reactive = (g + b + e); /* 8 + 6 + 4 */
    competency = (d + c + h); /* 1 + 3 + 5 */

    /* Triads method: Type 1 */
    if ((instinct > think) && (instinct > feel)) {
        if ((dutiful > assertive) && (dutiful > withdrawn)) {
            if ((competency > reactive) && (competency > positive)) {
                type = 1;
                return type;
            }
        }
    }

    /* Triads method: Type 2 */
    if ((feel > think) && (feel > instinct)) {
        if ((dutiful > assertive) && (dutiful > withdrawn)) {
            if ((positive > reactive) && (positive > competency)) {
                type = 2;
                return type;
            }
        }
    }

    /* Triads method: Type 3 */
    if ((feel > think) && (feel > instinct)) {
        if ((assertive > dutiful) && (assertive > withdrawn)) {
            if ((competency > reactive) && (competency > positive)) {
                type = 3;
                return type;
            }
        }
    }

    /* Triads method: Type 4 */
    if ((feel > think) && (feel > instinct)) {
        if ((withdrawn > dutiful) && (withdrawn > assertive)) {
            if ((reactive > competency) && (reactive > positive)) {
                type = 4;
                return type;
            }
        }
    }

    /* Triads method: Type 5 */
    if ((think > feel) && (think > instinct)) {
        if ((withdrawn > assertive) && (withdrawn > dutiful)) {
            if ((competency > reactive) && (competency > positive)) {
                type = 5;
                return type;
            }
        }
    }

    /* Triads method: Type 6 */
    if ((think > feel) && (think > instinct)) {
        if ((dutiful > assertive) && (dutiful > withdrawn)) {
            if ((reactive > competency) && (reactive > positive)) {
                type = 6;
                return type;
            }
        }
    }

    /* Triads method: Type 7 */
    if ((think > feel) && (think > instinct)) {
        if ((assertive > dutiful) && (assertive > withdrawn)) {
            if ((positive > competency) && (positive > reactive)) {
                type = 7;
                return type;
            }
        }
    }

    /* Triads method: Type 8 */
    if ((instinct > think) && (instinct > feel)) {
        if ((assertive > dutiful) && (assertive > withdrawn)) {
            if ((reactive > competency) && (reactive > positive)) {
                type = 8;
                return type;
            }
        }
    }

    /* Triads method: Type 9 */
    if ((instinct > think) && (instinct > feel)) {
        if ((withdrawn > dutiful) && (withdrawn > assertive)) {
            if ((positive > reactive) && (positive > competency)) {
                type = 9;
                return type;
            }
        }
    }

    return type;
}

/* Function to calculate the Enneagram Type wing based on the main result and other scores on the test */
short unsigned int res_wing(int a, int b, int c, 
                            int d, int e, int f, 
                            int g, int h, int i) {
    short unsigned int wing;

    switch (type) {
        case 1:
            if (a == f) wing = 0;
            else wing = a > f ? 9 : 2;
        break;
        
        case 2:
            if (d == c) wing = 0;
            else wing = d > c ? 1 : 3;
        break;

        case 3:
            if (f == e) wing = 0;
            else wing = f > e ? 2 : 4;
        break;

        case 4:
            if (c == h) wing = 0;
            else wing = c > h ? 3 : 5;
        break;

        case 5:
            if (e == b) wing = 0;
            else wing = e > b ? 4 : 6;
        break;

        case 6:
            if (h == i) wing = 0;
            else wing = h > i ? 5 : 7;
        break;

        case 7:
            if (b == g) wing = 0;
            else wing = b > g ? 6 : 8;
        break;

        case 8:
            if (i == a) wing = 0;
            else wing = i > a ? 7 : 9;
        break;

        case 9:
            if (g == d) wing = 0;
            else wing = g > d ? 8 : 1;
        break;

        default:
            wing = 0;
    }

    return wing;
}
