/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_operator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramat <mt15hydrangea@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:56:23 by tmuramat          #+#    #+#             */
/*   Updated: 2022/06/12 15:56:23 by tmuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

void	*ft_vector_operator(t_vector *vector, size_t n)
{
	void	*itr;

	itr = (char *)vector->data + (vector->len * n);
	return (itr);
}

void	*ft_vector_front(t_vector *vector)
{
	if (!vector->data)
		return (NULL);
	return (vector->data);
}

void	*ft_vector_back(t_vector *vector)
{
	void	*itr;

	if (!vector->data)
		return (NULL);
	itr = (char *)vector->end - vector->data_size;
	return (itr);
}

void	ft_vector_foreach(t_vector *vector, void (*func)(void *))
{
	void	*i;
	size_t	len;

	i = vector->data;
	len = vector->len;
	while (0 < len--)
	{
		func(i);
		i = (char *)i + vector->data_size;
	}
}
