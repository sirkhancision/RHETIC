#include "../include/res.h"
#include "../include/type.h"
#include "../include/quick.h"

/* Function using different algorithms to calculate the Enneagram Type, based on
* the test's answers */
int res_type(TYPE *types) {
    GROUPS GROUPS = {
        .INTELLIGENCE.feeling = types->f_2 + types->c_3 + types->e_4,
        .INTELLIGENCE.thinking = types->h_5 + types->b_6 + types->i_7,
        .INTELLIGENCE.instinct = types->a_9 + types->g_8 + types->d_1,
        .HORNEVIAN.assertive = types->c_3 + types->i_7 + types->g_8,
        .HORNEVIAN.dutiful = types->d_1 + types->f_2 + types->b_6,
        .HORNEVIAN.withdrawn = types->e_4 + types->h_5 + types->a_9,
        .HARMONIC.positive = types->f_2 + types->i_7 + types->a_9,
        .HARMONIC.reactive = types->e_4 + types->b_6 + types->g_8,
        .HARMONIC.competency = types->d_1 + types->c_3 + types->h_5
    };

    /* This array will be sorted in crescent order */
    int types_array[9] = {
        types->d_1, types->f_2, types->c_3,
        types->e_4, types->h_5, types->b_6,
        types->i_7, types->g_8, types->a_9
    };

    /* Sort biggest value */
    quicksort(types_array, 0, ((int) sizeof(types_array) /
        (int) sizeof(types_array[0])) - 1);
    
    /* Highest score method */
    types->result = types_array[8] == types->a_9 ? 9 :
        types_array[8] == types->b_6 ? 6 :
        types_array[8] == types->c_3 ? 3 :
        types_array[8] == types->d_1 ? 1 :
        types_array[8] == types->e_4 ? 4 :
        types_array[8] == types->f_2 ? 2 :
        types_array[8] == types->g_8 ? 8 :
        types_array[8] == types->h_5 ? 5 :
        types_array[8] == types->i_7 ? 7 : 0;
    
    /* In case there're two top types with same score, select the one
    with higher scored wings */
    if (types_array[8] == types_array[7]) {
        int penum = (types_array[7] == types->a_9) && (types->result != 9) ? 9 :
            (types_array[7] == types->b_6) && (types->result != 6) ? 6 :
            (types_array[7] == types->c_3) && (types->result != 3) ? 3 :
            (types_array[7] == types->d_1) && (types->result != 1) ? 1 :
            (types_array[7] == types->e_4) && (types->result != 4) ? 4 :
            (types_array[7] == types->f_2) && (types->result != 2) ? 2 :
            (types_array[7] == types->g_8) && (types->result != 8) ? 8 :
            (types_array[7] == types->h_5) && (types->result != 5) ? 5 :
            (types_array[7] == types->i_7) && (types->result != 7) ? 7 : 0;
        
        /* This array will be used as a convention for variable name 
        and array position correlation */
        int TA_names[9] = {
            types->d_1, types->f_2, types->c_3,
            types->e_4, types->h_5, types->b_6,
            types->i_7, types->g_8, types->a_9
        };

        if ((TA_names[(types->result - 2) % 9] +
            TA_names[types->result % 9]) <
            (TA_names[(penum - 2) % 9] + TA_names[penum % 9]))
                types->result = penum;
    }
    
    /* Triads method: Type 1 */
    if ((GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.thinking) &&
    (GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.feeling)) {
        if ((GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.assertive) &&
        (GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.withdrawn))
            if ((GROUPS.HARMONIC.competency > GROUPS.HARMONIC.reactive) &&
            (GROUPS.HARMONIC.competency > GROUPS.HARMONIC.positive))
                types->result = 1;
    }
    /* Triads method: Type 2 */
    else if ((GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.thinking) &&
    (GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.instinct)) {
        if ((GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.assertive) &&
        (GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.withdrawn))
            if ((GROUPS.HARMONIC.positive > GROUPS.HARMONIC.reactive) &&
            (GROUPS.HARMONIC.positive > GROUPS.HARMONIC.competency))
                types->result = 2;
    }
    /* Triads method: Type 3 */
    else if ((GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.thinking) &&
    (GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.instinct)) {
        if ((GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.dutiful) &&
        (GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.withdrawn))
            if ((GROUPS.HARMONIC.competency > GROUPS.HARMONIC.reactive) &&
            (GROUPS.HARMONIC.competency > GROUPS.HARMONIC.positive))
                types->result = 3;
    }
    /* Triads method: Type 4 */
    else if ((GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.thinking) &&
    (GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.instinct)) {
        if ((GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.dutiful) &&
        (GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.assertive))
            if ((GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.competency) &&
            (GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.positive))
                types->result = 4;
    }
    /* Triads method: Type 5 */
    else if ((GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.feeling) &&
    (GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.instinct)) {
        if ((GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.assertive) &&
        (GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.dutiful))
            if ((GROUPS.HARMONIC.competency > GROUPS.HARMONIC.reactive) &&
            (GROUPS.HARMONIC.competency > GROUPS.HARMONIC.positive))
                types->result = 5;
    }
    /* Triads method: Type 6 */
    else if ((GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.feeling) &&
    (GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.instinct)) {
        if ((GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.assertive) &&
        (GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.withdrawn))
            if ((GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.competency) &&
            (GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.positive))
                types->result = 6;
    }
    /* Triads method: Type 7 */
    else if ((GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.feeling) &&
    (GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.instinct)) {
        if ((GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.dutiful) &&
        (GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.withdrawn))
            if ((GROUPS.HARMONIC.positive > GROUPS.HARMONIC.competency) &&
            (GROUPS.HARMONIC.positive > GROUPS.HARMONIC.reactive))
                types->result = 7;
    }
    /* Triads method: Type 8 */
    else if ((GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.thinking) &&
    (GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.feeling)) {
        if ((GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.dutiful) &&
        (GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.withdrawn))
            if ((GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.competency) &&
            (GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.positive))
                types->result = 8;
    }
    /* Triads method: Type 9 */
    else if ((GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.thinking) &&
    (GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.feeling)) {
        if ((GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.dutiful) &&
        (GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.assertive))
            if ((GROUPS.HARMONIC.positive > GROUPS.HARMONIC.reactive) &&
            (GROUPS.HARMONIC.positive > GROUPS.HARMONIC.competency))
                types->result = 9;
    }

    return types->result;
}

/* Function to calculate the Enneagram Type wing based on the main result and
* other scores on the test */
int res_wing(TYPE *types) {
    int wing;
    
    switch (types->result) {
        case 1:
            wing = types->a_9 == types->f_2 ? 0 :
                types->a_9 > types->f_2 ? 9 : 2;
            break;
        case 2:
            wing = types->d_1 == types->c_3 ? 0 :
                types->d_1 > types->c_3 ? 1 : 3;
            break;
        case 3:
            wing = types->f_2 == types->e_4 ? 0 :
                types->f_2 > types->e_4 ? 2 : 4;
            break;
        case 4:
            wing = types->c_3 == types->h_5 ? 0 :
                types->c_3 > types->h_5 ? 3 : 5;
            break;
        case 5:
            wing = types->e_4 == types->b_6 ? 0 :
                types->e_4 > types->b_6 ? 4 : 6;
            break;
        case 6:
            wing = types->h_5 == types->i_7 ? 0 :
                types->h_5 > types->i_7 ? 5 : 7;
            break;
        case 7:
            wing = types->b_6 == types->g_8 ? 0 :
                types->b_6 > types->g_8 ? 6 : 8;
            break;
        case 8:
            wing = types->i_7 == types->a_9 ? 0 :
                types->i_7 > types->a_9 ? 7 : 9;
            break;
        case 9:
            wing = types->g_8 == types->d_1 ? 0 :
                types->g_8 > types->d_1 ? 8 : 1;
            break;
        default:
            wing = 0;
    }

    return wing;
}
