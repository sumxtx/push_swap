#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libftall.h"

typedef struct s_dlstnode
{
  void *content;
  struct s_d_list_node *next;
  struct s_d_list_node *prev;
} t_dlstnode;



void sa();
void sb();
void ss();

void pa();
void pb();

void ra();
void rb();
void rr();

void rra();
void rrb();
void rrr();


int lorem(int *parsed_in);
//void a_stack_fill();
#endif
