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
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (ptr2 < ptr)
	{
		while (++i <= n)
			ptr[n - i] = ptr2[n - i];
	}
	else
	{
		while (n-- > 0)
			*(ptr++) = *(ptr2++);
	}
	return (dest);
}
