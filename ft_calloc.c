/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:38:37 by healeksa          #+#    #+#             */
/*   Updated: 2024/01/28 20:31:07 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*dest;

	dest = malloc(num * size);
	if (!dest)
		return (NULL);
	ft_memset(dest, 0, num * size);
	return (dest);
}
