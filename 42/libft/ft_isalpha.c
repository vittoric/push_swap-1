/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 08:51:37 by potero-d          #+#    #+#             */
/*   Updated: 2021/09/14 10:24:07 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	r;

	r = 1;
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		r = 0;
	return (r);
}