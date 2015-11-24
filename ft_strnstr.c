/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 15:46:54 by jichen-m          #+#    #+#             */
/*   Updated: 2014/11/22 15:47:07 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	tmp1;
	size_t	tmp2;

	tmp1 = 0;
	tmp2 = 0;
	while (s1[tmp2] && tmp2 < n)
	{
		while (s2[tmp1] == s1[tmp2 + tmp1] && tmp2 + tmp1 < n)
			tmp1++;
		if (s2[tmp1] == '\0')
			return ((char *)s1 + tmp2);
		tmp2++;
	}
	return (0);
}
