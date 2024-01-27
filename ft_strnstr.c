/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:13:24 by healeksa          #+#    #+#             */
/*   Updated: 2024/01/27 12:26:18 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *needle, const char *haystack, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle && len == 0)
		return (NULL);
	if (haystack[0] == '\0')
		return ((char *)needle);
	while (needle[i] != '\0')
	{
		j = 0;
		while (needle[i + j] == haystack[j] && (i + j) < len)
		{
			if (needle[i + j] == '\0' && haystack[j] == '\0')
				return ((char *)&needle[i]);
			j++;
		}
		if (haystack[j] == '\0')
			return ((char *)needle + i);
		i++;
	}
	return (0);
}
