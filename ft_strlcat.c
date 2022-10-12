/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:41:13 by isaridas          #+#    #+#             */
/*   Updated: 2022/10/09 12:22:46 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	j = ft_strlen(dst);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size > 0 && j < size - 1)
	{
		while (src[i] && j < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (size < len_dst)
		return (size + len_src);
	else
		return (len_dst + len_src);
}
