/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:25:33 by potero            #+#    #+#             */
/*   Updated: 2021/11/19 11:11:58 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_free(t_column **column)
{
	t_column	*aux;
;
	while (*column)
	{
		aux = (*column)->next;
		free(*column);
		*column = aux;
	}
	*column = NULL;
	//free(*column);
}