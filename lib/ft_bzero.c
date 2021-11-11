/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:19:22 by potero-d          #+#    #+#             */
/*   Updated: 2021/09/15 11:47:18 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}