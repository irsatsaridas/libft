/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:47:55 by isaridas          #+#    #+#             */
/*   Updated: 2022/10/06 17:36:06 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		i = n;
		while (--i != 0)
			*(char *)(dest + i) = *(char *)(src + i);
	}
	else
	{
		i = -1;
		while (++i < n)
			*(char *)(dest + i) = *(char *)(src + i);
	}
	return (dest);
}	
