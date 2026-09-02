/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouserh <mbouserh@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 14:37:30 by mbouserh          #+#    #+#             */
/*   Updated: 2026/09/02 14:37:32 by mbouserh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include "stdlib.h"
# include "strings.h"

size_t	ft_strlen(const char *str);
int	ft_isprint(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);

#endif // !LIBFT_H
