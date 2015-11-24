/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:27:54 by jichen-m          #+#    #+#             */
/*   Updated: 2015/11/24 15:06:30 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (i < n)
	{
		if (s2[j] != s1[i])
			return (s1[i] - s2[j]);
		if (s1[i] == '\0' && s2[j] == '\0')
			return (0);
		i++;
		j++;
	}
	return (0);
}
