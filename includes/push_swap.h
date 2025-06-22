#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libftall.h"

/* Parse av */
char **_split_av_(char **av);
char **_dup_av_(int ac, char **av);
char **parse_av(int ac, char **av);

/* Validate input */
int *convert_int(char **splitted, int len);
int check_input(char **splitted, int *int_arr, int len);
int	check_zero(char *av);
int check_dups(int *int_arr, int len);
int check_sorted(int *int_arr, int len);

/* Other utils */
int vector_len(char **s);
void _ftfreewexit_(char **splitted, int size, int doexit);
void _ftintfreewexit_(int *arr, int doexit);


/* Nodes and Lists */

  // ---> Double Linked List
typedef struct s_dlstnode
{
  void *content;
  struct s_d_list_node *next;
  struct s_d_list_node *prev;
} t_dlstnode;

  // Utils

  // ---> Single Linked List
typedef struct s_lst_node
{
  int content;
  struct s_lst_node *next;
} t_int_lst_node;

typedef struct s_int_lst
{
  int counter;
  t_int_lst_node *first;
  t_int_lst_node *last;
} t_int_lst;



// list utils
t_int_lst_node	*t_int_lst_newnode(int content);
void	t_int_lst_addfront(t_int_lst **lst, t_int_lst_node *new);
void	t_int_lst_pushback(t_int_lst *lst, t_int_lst_node *new);
void _ftlstfreewexit_(int *arr, int doexit);

// print  utils
void stack_display(t_int_lst *stack, char *st);
void stack_display_columns(t_int_lst *stack_a, t_int_lst *stack_b);
void print_stacks(t_int_lst *stack_a, t_int_lst *stack_b);

// sort utils
void sort_stack(int *int_arr, int ac);
t_int_lst *stack_a_fill(int *int_arr, int ac);
t_int_lst *stack_b_init(int *int_arr);
void sort_stack(int *int_arr, int ac);



// operations
int push(t_int_lst *dst, t_int_lst *src);
void pa(t_int_lst *stack_b, t_int_lst *stack_a);
void pb(t_int_lst *stack_b, t_int_lst *stack_a);

void sa();
void sb();
void ss();


void ra();
void rb();
void rr();

void rra();
void rrb();
void rrr();


#endif
