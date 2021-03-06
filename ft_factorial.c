/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:03:46 by zmahomed          #+#    #+#             */
/*   Updated: 2019/07/11 09:25:26 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 1)
		return (nb * (ft_factorial(nb - 1)));
	else
		return (nb);
}
