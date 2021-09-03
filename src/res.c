#include "../include/res.h"
#include "../include/type.h"
#include "../include/quick.h"

/* Function using different algorithms to calculate the Enneagram Type, based on
 * the test's answers */
int res_type(TYPE types) {
	GROUPS GROUPS = {
		.INTELLIGENCE.feeling = types.f_2 + types.c_3 + types.e_4,
		.INTELLIGENCE.thinking = types.h_5 + types.b_6 + types.i_7,
		.INTELLIGENCE.instinct = types.a_9 + types.g_8 + types.d_1,
		.HORNEVIAN.assertive = types.c_3 + types.i_7 + types.g_8,
		.HORNEVIAN.dutiful = types.d_1 + types.f_2 + types.b_6,
		.HORNEVIAN.withdrawn = types.e_4 + types.h_5 + types.a_9,
		.HARMONIC.positive = types.f_2 + types.i_7 + types.a_9,
		.HARMONIC.reactive = types.e_4 + types.b_6 + types.g_8,
		.HARMONIC.competency = types.d_1 + types.c_3 + types.h_5
	};

	int types_array[9] = {
		types.a_9, types.b_6, types.c_3,
		types.d_1, types.e_4, types.f_2,
		types.g_8, types.h_5, types.i_7
	};

	/* Sort biggest value */
	quicksort(types_array, 0, ((int) sizeof(types_array) / (int) sizeof(types_array[0])) - 1);
	/* Highest score method */
	/* Maybe make this implementation better */
	if (types_array[8] == 0)
		types.result = 0;
	else if (types_array[8] == types.a_9)
		types.result = 9;
	else if (types_array[8] == types.b_6)
		types.result = 6;
	else if (types_array[8] == types.c_3)
		types.result = 3;
	else if (types_array[8] == types.d_1)
		types.result = 1;
	else if (types_array[8] == types.e_4)
		types.result = 4;
	else if (types_array[8] == types.f_2)
		types.result = 2;
	else if (types_array[8] == types.g_8)
		types.result = 8;
	else if (types_array[8] == types.h_5)
		types.result = 5;
	else if (types_array[8] == types.i_7)
		types.result = 7;

	/* Triads method: Type 1 */
	if ((GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.thinking) &&
	(GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.feeling))
		if ((GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.assertive) &&
		(GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.withdrawn))
			if ((GROUPS.HARMONIC.competency > GROUPS.HARMONIC.reactive) &&
			(GROUPS.HARMONIC.competency > GROUPS.HARMONIC.positive)) {
				types.result = 1;
				return types.result;
			}
	/* Triads method: Type 2 */
	if ((GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.thinking) &&
	(GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.instinct))
		if ((GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.assertive) &&
		(GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.withdrawn))
			if ((GROUPS.HARMONIC.positive > GROUPS.HARMONIC.reactive) &&
			(GROUPS.HARMONIC.positive > GROUPS.HARMONIC.competency)) {
				types.result = 2;
				return types.result;
			}
	/* Triads method: Type 3 */
	if ((GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.thinking) &&
	(GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.instinct))
		if ((GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.dutiful) &&
		(GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.withdrawn))
			if ((GROUPS.HARMONIC.competency > GROUPS.HARMONIC.reactive) &&
			(GROUPS.HARMONIC.competency > GROUPS.HARMONIC.positive)) {
				types.result = 3;
				return types.result;
			}
	/* Triads method: Type 4 */
	if ((GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.thinking) &&
	(GROUPS.INTELLIGENCE.feeling > GROUPS.INTELLIGENCE.instinct))
		if ((GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.dutiful) &&
		(GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.assertive))
			if ((GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.competency) &&
			(GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.positive)) {
				types.result = 4;
				return types.result;
			}
	/* Triads method: Type 5 */
	if ((GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.feeling) &&
	(GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.instinct))
		if ((GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.assertive) &&
		(GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.dutiful))
			if ((GROUPS.HARMONIC.competency > GROUPS.HARMONIC.reactive) &&
			(GROUPS.HARMONIC.competency > GROUPS.HARMONIC.positive)) {
				types.result = 5;
				return types.result;
			}
	/* Triads method: Type 6 */
	if ((GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.feeling) &&
	(GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.instinct))
		if ((GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.assertive) &&
		(GROUPS.HORNEVIAN.dutiful > GROUPS.HORNEVIAN.withdrawn))
			if ((GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.competency) &&
			(GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.positive)) {
				types.result = 6;
				return types.result;
			}
	/* Triads method: Type 7 */
	if ((GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.feeling) &&
	(GROUPS.INTELLIGENCE.thinking > GROUPS.INTELLIGENCE.instinct))
		if ((GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.dutiful) &&
		(GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.withdrawn))
			if ((GROUPS.HARMONIC.positive > GROUPS.HARMONIC.competency) &&
			(GROUPS.HARMONIC.positive > GROUPS.HARMONIC.reactive)) {
				types.result = 7;
				return types.result;
			}
	/* Triads method: Type 8 */
	if ((GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.thinking) &&
	(GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.feeling))
		if ((GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.dutiful) &&
		(GROUPS.HORNEVIAN.assertive > GROUPS.HORNEVIAN.withdrawn))
			if ((GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.competency) &&
			(GROUPS.HARMONIC.reactive > GROUPS.HARMONIC.positive)) {
				types.result = 8;
				return types.result;
			}
	/* Triads method: Type 9 */
	if ((GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.thinking) &&
	(GROUPS.INTELLIGENCE.instinct > GROUPS.INTELLIGENCE.feeling))
		if ((GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.dutiful) &&
		(GROUPS.HORNEVIAN.withdrawn > GROUPS.HORNEVIAN.assertive))
			if ((GROUPS.HARMONIC.positive > GROUPS.HARMONIC.reactive) &&
			(GROUPS.HARMONIC.positive > GROUPS.HARMONIC.competency)) {
				types.result = 9;
				return types.result;
			}
	return types.result;
}

/* Function to calculate the Enneagram Type wing based on the main result and
 * other scores on the test */
int res_wing(TYPE types) {
	switch (types.result) {
		case 1:
			if (types.a_9 == types.f_2)
				types.wing = 0;
			else
				types.wing = types.a_9 > types.f_2 ? 9 : 2;
			break;
		case 2:
			if (types.d_1 == types.c_3)
				types.wing = 0;
			else
				types.wing = types.d_1 > types.c_3 ? 1 : 3;
			break;
		case 3:
			if (types.f_2 == types.e_4)
				types.wing = 0;
			else
				types.wing = types.f_2 > types.e_4 ? 2 : 4;
			break;
		case 4:
			if (types.c_3 == types.h_5)
				types.wing = 0;
			else
				types.wing = types.c_3 > types.h_5 ? 3 : 5;
			break;
		case 5:
			if (types.e_4 == types.b_6)
				types.wing = 0;
			else
				types.wing = types.e_4 > types.b_6 ? 4 : 6;
			break;
		case 6:
			if (types.h_5 == types.i_7)
				types.wing = 0;
			else
				types.wing = types.h_5 > types.i_7 ? 5 : 7;
			break;
		case 7:
			if (types.b_6 == types.g_8)
				types.wing = 0;
			else
				types.wing = types.b_6 > types.g_8 ? 6 : 8;
			break;
		case 8:
			if (types.i_7 == types.a_9)
				types.wing = 0;
			else
				types.wing = types.i_7 > types.a_9 ? 7 : 9;
			break;
		case 9:
			if (types.g_8 == types.d_1)
				types.wing = 0;
			else
				types.wing = types.g_8 > types.d_1 ? 8 : 1;
			break;
		default:
			types.wing = 0;
	}
	return types.wing;
}
