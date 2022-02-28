/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltinda <baltinda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:05:48 by baltinda          #+#    #+#             */
/*   Updated: 2022/02/21 15:32:34 by baltinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	tut;

	i = 0;
	while (i < size - 1)
	{
		k = 0;
		while (k < size - 1)
		{
			if (tab[k] > tab[k + 1])
			{
				tut = tab[k];
				tab[k] = tab[k + 1];
				tab[k + 1] = tut;
			}
			k++;
		}
		i++;
	}
}

#include <stdio.h>

int    main()
{
    int tab[6] = {7, 6, 3, 4, 2, 5};
    int size = 6;

    ft_sort_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
    return (0);
}
