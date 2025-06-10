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

typedef struct int_node
{
  int content;
  struct int_node *next;
} int_lst;

int_lst	*int_lst_node(int content);
void	int_lst_addfront(int_lst **lst, int_lst *new);

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


int lorem();
int_lst *a_stack_fill();
#endif
