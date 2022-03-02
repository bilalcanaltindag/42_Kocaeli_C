/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltinda <baltinda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:35:37 by baltinda          #+#    #+#             */
/*   Updated: 2022/03/01 18:39:28 by baltinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	b;

	i = argc - 1;
	while (i > 0)
	{
		b = 0;
		while (argv[i][b] != '\0' && argc)
		{
			write(1, &argv[i][b], 1);
			b++;
		}
		write(1, "\n", 1);
		i--;
	}	
}
