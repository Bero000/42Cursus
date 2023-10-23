/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeren <beeren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:23:57 by beeren            #+#    #+#             */
/*   Updated: 2023/07/10 20:08:00 by beeren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*pdest;
	char			*psrc;
	unsigned int	i;

	i = 0;
	pdest = (char *)dest;
	psrc = (char *)src;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return ((void *)pdest);
}
