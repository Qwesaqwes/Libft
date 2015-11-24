/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:54:18 by jichen-m          #+#    #+#             */
/*   Updated: 2014/11/16 14:02:37 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *)s2;
	while (s1[i] != '\0')
		i++;
	while (str[j] != '\0')
	{
		s1[i] = str[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}