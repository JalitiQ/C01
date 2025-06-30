/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilian <lilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 08:02:14 by lilian            #+#    #+#             */
/*   Updated: 2025/06/30 08:21:09 by lilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
	int	*tabl[size];
	int	tab2[size];
	int	i;

	*tab = tabl;
	i = 0;
	while (size != 0)
	{
		*tabl[size] = tab2[i];
		i++;
		size--;
	}
}