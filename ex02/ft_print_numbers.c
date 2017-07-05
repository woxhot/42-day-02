/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 06:00:27 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/05 06:02:00 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
		char	number;

		number = 48; /*ascii*/
		while (number <= 57)
				{
					ft_putchar(number);
					number++;
				}
}




