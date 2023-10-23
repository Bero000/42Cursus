/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeren <beeren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:11:11 by beeren            #+#    #+#             */
/*   Updated: 2023/10/17 19:06:45 by beeren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

typedef struct s_free
{
	int		i;
}	t_free;

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_stack;

typedef struct s_full
{
	int	*a;
	int	*b;
}	t_full_stack;

//functions
void	ft_error(t_full_stack *fstack, char **av, t_free *fre);
int		ft_ps_strlen(char **str);
int		ft_ps_atoi(char *str, t_full_stack *fstack, char **av, t_free *fre);
void	ft_check_repeat(int size, t_full_stack *fstack, char **str,
			t_free *fre);
//functions2
int		ft_checked_sorted(int *stack_a, int size, int flag);
int		ft_sort(t_stack *stack, int size);
void	ft_sort_three(t_stack *s);
void	ft_sort_int_tmp(int *tmp_stack, int size);
//functions3
void	ft_quicksort_3(t_stack *stack, int len);
int		ft_sort_small_b(t_stack *s, int len);
int		ft_push(t_stack *stack, int len, int operation);
int		ft_get_middle(int *pivot, int *stack_a, int size);
int		ft_quicksort_a(t_stack *stack, int len, int count);
int		ft_quicksort_b(t_stack *stack, int len, int count);
//rules a
void	sa(t_stack *stack, int print);
void	rra(t_stack *stack, int print);
void	ra(t_stack *stack, int print);
void	pa(t_stack *stack, int print);
//rules b
void	pb(t_stack *stack, int print);
void	sb(t_stack	*stack, int print);
void	rb(t_stack	*stack, int print);
void	rrb(t_stack *stack, int print);

void	ft_push_swap(char **av, t_free *fre);

void	free_data(char **data);
int		ft_strcmp(char *s1, char *s2);
int		av_control(char **av);
char	**ft_split(char const *s, char c);
char	**ft_no_malloc(char **tab);

#endif