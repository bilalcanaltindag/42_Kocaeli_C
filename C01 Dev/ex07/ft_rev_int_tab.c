/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltinda <baltinda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:58:39 by baltinda          #+#    #+#             */
/*   Updated: 2022/02/21 16:07:27 by baltinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	tut;

	index = 0;
	while (index < (size / 2))
	{
		tut = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = tut;
		index++;
	}
}

#include <stdio.h>

int    main()
{
    int tab[6] = {0, 1, 2, 3, 4, 5};
    int size = 6;

    ft_rev_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
    return (0);
}
