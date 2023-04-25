#include "../include/results.h"
#include "../include/types.h"
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

/* Calculate the Enneagram Type */
int result_type(TYPE *types) {
  GROUPS GROUPS = {
      .INTELLIGENCE.feeling = types->f_2 + types->c_3 + types->e_4,
      .INTELLIGENCE.thinking = types->h_5 + types->b_6 + types->i_7,
      .INTELLIGENCE.instinct = types->a_9 + types->g_8 + types->d_1,
      .HORNEVIAN.assertive = types->c_3 + types->i_7 + types->g_8,
      .HORNEVIAN.dutiful = types->d_1 + types->f_2 + types->b_6,
      .HORNEVIAN.withdrawn = types->e_4 + types->h_5 + types->a_9,
      .HARMONIC.positive = types->f_2 + types->i_7 + types->a_9,
      .HARMONIC.reactive = types->e_4 + types->b_6 + types->g_8,
      .HARMONIC.competency = types->d_1 + types->c_3 + types->h_5};

  HASH_TABLE scores_table = {{{types->d_1, 1},
                              {types->f_2, 2},
                              {types->c_3, 3},
                              {types->e_4, 4},
                              {types->h_5, 5},
                              {types->b_6, 6},
                              {types->i_7, 7},
                              {types->g_8, 8},
                              {types->a_9, 9}}};

  /* This array will be sorted in ascending order */
  int types_array[9] = {types->d_1, types->f_2, types->c_3,
                        types->e_4, types->h_5, types->b_6,
                        types->i_7, types->g_8, types->a_9};

  /* Sort biggest value */
  qsort(types_array, 9, (sizeof(int)), cmpfunc);

  /* Highest score method */
  int highest_score = types_array[8];
  int base_result = 0;

  for (int i = 0; i < 9; i++) {
    if (scores_table.entries[i].key == highest_score) {
      base_result = scores_table.entries[i].value;
      break;
    }
  }
  types->result = base_result;

  /* In case there are two top types with same score, select the one
   * with higher scored wings */
  if (types_array[8] == types_array[7]) {
    int second_highest = 0;
    for (int i = 0; i < 9; i++) {
      if (types_array[7] == scores_table.entries[i].key &&
          scores_table.entries[i].value != types->result) {
        second_highest = scores_table.entries[i].value;
        break;
      }
    }

    int wing_sum = 0;
    for (int i = 0; i < 9; i++) {
      if (scores_table.entries[i].value == types->result ||
          scores_table.entries[i].value == second_highest) {
        wing_sum += (i + 1) * scores_table.entries[i].key;
      }
    }

    if (wing_sum < 5 * 2 * (second_highest + types_array[7])) {
      types->result = second_highest;
    }
  }

  /* Triads method */
  if (GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.thinking &&
      GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.feeling &&
      GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.assertive &&
      GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.withdrawn &&
      GROUPS.HARMONIC.competency > GROUPS.HARMONIC.reactive &&
      GROUPS.HARMONIC.competency > GROUPS.HARMONIC.positive) {
    types->result = 1;
  } else if (GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.thinking &&
             GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.instinct &&
             GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.assertive &&
             GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.withdrawn &&
             GROUPS.HARMONIC.positive > GROUPS.HARMONIC.reactive &&
             GROUPS.HARMONIC.positive > GROUPS.HARMONIC.competency) {
    types->result = 2;
  } else if (GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.thinking &&
             GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.instinct &&
             GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.dutiful &&
             GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.withdrawn &&
             GROUPS.HARMONIC.competency > GROUPS.HARMONIC.reactive &&
             GROUPS.HARMONIC.competency > GROUPS.HARMONIC.positive) {
    types->result = 3;
  } else if (GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.thinking &&
             GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.instinct &&
             GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.dutiful &&
             GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.assertive &&
             GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.competency &&
             GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.positive) {
    types->result = 4;
  } else if (GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.feeling &&
             GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.instinct &&
             GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.assertive &&
             GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.dutiful &&
             GROUPS.HARMONIC.competency > GROUPS.HARMONIC.reactive &&
             GROUPS.HARMONIC.competency > GROUPS.HARMONIC.positive) {
    types->result = 5;
  } else if (GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.feeling &&
             GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.instinct &&
             GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.assertive &&
             GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.withdrawn &&
             GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.competency &&
             GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.positive) {
    types->result = 6;
  } else if (GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.feeling &&
             GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.instinct &&
             GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.dutiful &&
             GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.withdrawn &&
             GROUPS.HARMONIC.positive > GROUPS.HARMONIC.competency &&
             GROUPS.HARMONIC.positive > GROUPS.HARMONIC.reactive) {
    types->result = 7;
  } else if (GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.thinking &&
             GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.feeling &&
             GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.dutiful &&
             GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.withdrawn &&
             GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.competency &&
             GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.positive) {
    types->result = 8;
  } else if (GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.thinking &&
             GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.feeling &&
             GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.dutiful &&
             GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.assertive &&
             GROUPS.HARMONIC.positive > GROUPS.HARMONIC.reactive &&
             GROUPS.HARMONIC.positive > GROUPS.HARMONIC.competency) {
    types->result = 9;
  }

  return (types->result);
}

/* Calculate the Enneagram Type wing */
int result_wing(TYPE *types) {
  int wing;

  switch (types->result) {
  case 1:
    if (types->a_9 == types->f_2) {
      wing = 0;
    } else if (types->a_9 > types->f_2) {
      wing = 9;
    } else {
      wing = 2;
    }
    break;

  case 2:
    if (types->d_1 == types->c_3) {
      wing = 0;
    } else if (types->d_1 > types->c_3) {
      wing = 1;
    } else {
      wing = 3;
    }
    break;

  case 3:
    if (types->f_2 == types->e_4) {
      wing = 0;
    } else if (types->f_2 > types->e_4) {
      wing = 2;
    } else {
      wing = 4;
    }
    break;

  case 4:
    if (types->c_3 == types->h_5) {
      wing = 0;
    } else if (types->c_3 > types->h_5) {
      wing = 3;
    } else {
      wing = 5;
    }
    break;

  case 5:
    if (types->e_4 == types->b_6) {
      wing = 0;
    } else if (types->e_4 > types->b_6) {
      wing = 4;
    } else {
      wing = 6;
    }
    break;

  case 6:
    if (types->h_5 == types->i_7) {
      wing = 0;
    } else if (types->h_5 > types->i_7) {
      wing = 5;
    } else {
      wing = 7;
    }
    break;

  case 7:
    if (types->b_6 == types->g_8) {
      wing = 0;
    } else if (types->b_6 > types->g_8) {
      wing = 6;
    } else {
      wing = 8;
    }
    break;

  case 8:
    if (types->i_7 == types->a_9) {
      wing = 0;
    } else if (types->i_7 > types->a_9) {
      wing = 7;
    } else {
      wing = 9;
    }
    break;

  case 9:
    if (types->g_8 == types->d_1) {
      wing = 0;
    } else if (types->g_8 > types->d_1) {
      wing = 8;
    } else {
      wing = 1;
    }
    break;

  default:
    wing = 0;
  }

  return (wing);
}
