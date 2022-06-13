/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramat <mt15hydrangea@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:53:17 by tmuramat          #+#    #+#             */
/*   Updated: 2022/06/12 15:53:17 by tmuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

# define VECTOR_SUCCESS 1
# define VECTOR_FAILURE 0

# include <stdbool.h>
# include <stdlib.h>
# include <stdio.h>

// ********** Data structure ********** //
typedef struct s_vector{
	void		*data;
	void		*end;
	size_t		len;
	size_t		cap;
	size_t		data_size;
}	t_vector;

// ********** Constructor ********** //
t_vector	*ft_vector_init(size_t data_size, size_t cap);

// ********** Deconstructor ********** //
void		ft_vector_delete(t_vector **vector);

// ********** Modifier ********** //
int			ft_vector_push_back(t_vector *vector, const void *data);
int			ft_vector_pop_back(t_vector *vector, void *data);
void		ft_vector_clear(t_vector *vector);

// ********** Operator ********** //
void		*ft_vector_operator(t_vector *vector, size_t n);
void		*ft_vector_begin(t_vector *vector);
void		*ft_vector_back(t_vector *vector);

// ********** Capacity ********** //
bool		ft_vector_is_full(t_vector *vector);
bool		ft_vector_is_empty(t_vector *vector);
int			ft_vector_realloc(t_vector *deuqe);

// ********** Other utils ********** //
t_vector	*ft_vector_copy(t_vector *dst, t_vector *src);
void		ft_vector_foreach(t_vector *vector, void (*func)(void *));
void		ft_vector_status(t_vector *vector);

#endif