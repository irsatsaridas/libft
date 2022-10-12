/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:23:40 by isaridas          #+#    #+#             */
/*   Updated: 2022/10/06 19:29:13 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
	{
		ptr[i++] = s1[j];
		j++;
	}
	j = 0;
	while (s2[j])
	{
		ptr[i++] = s2[j];
		j++;
	}
	ptr[i] = 0;
	return (ptr);
}
