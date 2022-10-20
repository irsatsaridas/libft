/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:19:19 by isaridas          #+#    #+#             */
/*   Updated: 2022/10/11 21:05:18 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strsch(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = ft_strlen((char *)s1) - 1;
	k = 0;
	while (ft_strsch(s1[i], set) && s1[i])
		i++;
	while (ft_strsch(s1[j], set) && j > i)
		j--;
	str = (char *)malloc(sizeof(*s1) * (j - i + 2));
	if (str == 0)
		return (NULL);
	while (i <= j)
	{
		str[k] = s1[i++];
		k++;
	}
	str[k] = 0;
	return (str);
}
