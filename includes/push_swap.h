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
void _ftfreewexit_(char **splitted, int size, int doexit);

/* Validate input */
int *convert_int(char **splitted, int len);
int check_input(char **splitted, int *int_arr, int len);
int	check_zero(char *av);
int check_dups(int *int_arr, int len);
int check_sorted(int *int_arr, int len);

/* Other utils */
int vector_len(char **s);


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
  struct int_node *next;
} t_int_lst_node;

typedef struct s_int_lst
{
  int count;
  struct t_lst_node *first;
  struct t_lst_node *last;
} t_int_lst;

  // utils
int_lst	*int_lst_node(int content);
void	int_lst_addfront(int_lst **lst, int_lst *new);
int_lst *a_stack_fill();


// operations
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


#endif
