#ifndef STATEMENTS_H
#define STATEMENTS_H
#include "types.h"

void statement(char statement_1[], char statement_2[], char option_1,
               char option_2, int *statement_1_type, int *statement_2_type);

void print_statements(int language, TYPE *types);

#endif
