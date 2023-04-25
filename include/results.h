#ifndef RESULTS_H
#define RESULTS_H
#include "types.h"

typedef struct {
  int key;
  int value;
} HASH_TABLE_ENTRY;

typedef struct {
  HASH_TABLE_ENTRY entries[9];
} HASH_TABLE;

int cmpfunc(const void *a, const void *b);
int result_type(TYPE *types);
int result_wing(TYPE *types);

#endif
