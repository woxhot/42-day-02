/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 04:34:44 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/05 16:25:02 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int		curs;

	curs = 'a';
	while (curs <= 'z')

	{
		ft_putchar(curs)	;
		curs++	;			
	}	
}	
int 	main(void)
{
	ft_print_alphabet()	;
	return(0)	;
}
