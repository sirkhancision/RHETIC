#ifndef TYPE_H
#define TYPE_H

typedef struct TYPE {
    int d_1, f_2, c_3,
        e_4, h_5, b_6,
        i_7, g_8, a_9; /* the nine Enneagram types */
    int result; /* the resulting type of the test */
} TYPE;

typedef struct GROUPS {
    struct INTELLIGENCE {
        int feeling, thinking, instinct;
    } INTELLIGENCE;
    struct HORNEVIAN {
        int assertive, dutiful, withdrawn;
    } HORNEVIAN;
    struct HARMONIC {
        int positive, reactive, competency;
    } HARMONIC;
} GROUPS;

#endif
