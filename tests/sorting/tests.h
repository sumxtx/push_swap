
#ifndef TEST_H
#define TEST_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <malloc.h>

#define MAX 1000
#define MIN -1000

int calculate_len(int min, int max);
int array_size(int arr[]);
int *random_gen_unsorted(int min, int max);

void bubble_sort(int arr[], int size);
void selection_sort(int arr[], int size);
void insertion_sort(int arr[], int size);
void merge_sort(int arr[], int l, int r);

#endif
