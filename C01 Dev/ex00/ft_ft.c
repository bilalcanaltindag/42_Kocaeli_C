/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltinda <baltinda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:30:54 by baltinda          #+#    #+#             */
/*   Updated: 2022/02/17 13:31:27 by baltinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}	

#include <stdio.h>

int    main()
{
    int    *nbr;
    int    number;

    nbr = &number;
    ft_ft(nbr);
    printf("%d", number);
}
