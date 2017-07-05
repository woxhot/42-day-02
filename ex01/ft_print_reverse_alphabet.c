/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 05:40:10 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/05 05:46:01 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
		write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
		int	letter;

		letter = 'z';
		while (letter >= 'a')
			{
				ft_putchar(letter);
				letter--;
			}
}

int     main()
{
		ft_print_reverse_alphabet();
			return (0);
}






