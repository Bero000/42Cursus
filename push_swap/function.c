/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeren <beeren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:10:25 by beeren            #+#    #+#             */
/*   Updated: 2023/10/14 18:03:56 by beeren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	ft_error(t_full_stack *fstack, char **av, t_free *fre)
{
	if (fre->i == 1)
		free_data(av);
	free (fstack->a);
	free (fstack->b);
	write (2, "Error\n", 6);
	exit (1);
}

int	ft_ps_strlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_ps_atoi(char *str, t_full_stack *fstack, char **av, t_free *fre)
{
	unsigned int		i;
	int					neg;
	unsigned long int	num;

	i = 0;
	num = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = -1;
	if ((str[i] == '-' || str[i] == '+') && !(str[++i] >= '0' && str[i] <= '9'))
		ft_error(fstack, av, fre);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			ft_error(fstack, av, fre);
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	if ((num > 2147483648 && neg == -1) || (num > 2147483647 && neg == 1))
		ft_error(fstack, av, fre);
	return (num * neg);
}

void	ft_check_repeat(int size, t_full_stack *fstack, char **str, t_free *fre)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (fstack->a[i] == fstack->a[j])
				ft_error(fstack, str, fre);
			j++;
		}
		i++;
		j = i + 1;
	}
}
