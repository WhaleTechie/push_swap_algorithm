#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_dequ t_deq;
typedef struct s_dnode t_dnode;

struct s_dnode
{
	int item;
	t_dnode *prev;
	t_dnode *next;
};

struct s_deq
{
	t_dnode *front;
	t_dnode *last;
}		t_deq;

