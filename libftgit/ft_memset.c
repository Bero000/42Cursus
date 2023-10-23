/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeren <beeren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:39:40 by beeren            #+#    #+#             */
/*   Updated: 2023/07/10 18:15:04 by beeren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)str;
	while (n)
	{
		ptr[i] = (char)c;
		i++;
		n--;
	}
	return ((void *)str);
}
