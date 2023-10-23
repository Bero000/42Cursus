/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeren <beeren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:48:45 by beeren            #+#    #+#             */
/*   Updated: 2023/07/06 19:13:46 by beeren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*pdest;
	char			*psrc;

	pdest = (char *)dest;
	psrc = (char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (pdest > psrc)
	{
		while (n-- > 0)
		{
			pdest[n] = psrc[n];
		}
	}
	else
	{
		while (n--)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	return ((void *)pdest);
}
