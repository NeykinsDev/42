/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouserh <mbouserh@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 17:27:18 by mbouserh          #+#    #+#             */
/*   Updated: 2026/09/02 17:48:14 by mbouserh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	while (str[i] && str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= 0 && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		if (res < 0 && sign == 1)
			return (-1);
		if (res < 0 && sign == -1)
			return (0);
		i++;
	}
	return (res * sign);
}
