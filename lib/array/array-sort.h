#ifndef ARRAY_SORT_H
#define ARRAY_SORT_H

int sort_array(int *arr, int n);

int sort_array_with_comparator(int *arr, int n, int (*cmp) (int, int));

#endif
