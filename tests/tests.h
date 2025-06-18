
#ifndef TEST_H
#define TEST_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define MAX 1000
#define MIN -1000
int *random_gen_unsorted(int min, int max);

void bubble_sort(int arr[], int size);
void test_sort_bubble(void);

#endif
