/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltinda <baltinda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:31:56 by baltinda          #+#    #+#             */
/*   Updated: 2022/03/01 18:34:39 by baltinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	b;

	i = 1;
	while (i < argc)
	{
		b = 0;
		while (argv[i][b] != '\0')
		{
			write(1, &argv[i][b], 1);
			b++;
		}
		write(1, "\n", 1);
		i++;
	}
}
