/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeren <beeren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:43:21 by beeren            #+#    #+#             */
/*   Updated: 2023/07/11 21:48:03 by beeren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)str;
	i = 0;
	while (ptr[i] && (ptr[i] != (char)c))
	{
		i++;
	}
	if (ptr[i] == (char)c)
		return (ptr + i);
	return (0);
}
