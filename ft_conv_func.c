/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_func.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 09:48:46 by cvakasir          #+#    #+#             */
/*   Updated: 2022/06/23 09:55:31 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_lower(unsigned long int pointer_value)
{
	int			r;
	static int	count;

	r = 0;
	count = 0;
	if (pointer_value >= 16)
	{
		ft_hexa_lower(pointer_value / 16); 
	}
	count++;
	r = pointer_value % 16;
	ft_putchar("0123456789abcdef"[r]); 
	return (count);
}

int	ft_hexa_upper(unsigned long int pointer_value)
{
	int			r;
	static int	count;

	count = 0;
	r = 0;
	if (pointer_value >= 16)
	{
		ft_hexa_upper(pointer_value / 16);
	}
	count++;
	r = pointer_value % 16;
	ft_putchar("0123456789ABCDEF"[r]);
	return (count);
}

int	ft_write_number(int numb)
{
	char	*str;
	int		len;
	int		count;

	count = 0;
	len = 0;
	str = ft_itoa(numb);
	if (!str)
		return (0);
	len = ft_strlen(str);
	count += write(1, str, len);
	free(str);
	return (count);
}

int	ft_uns_dec(unsigned int numb)
{
	static int	count;

	count = 0;
	if (numb >= 10)
	{
		ft_uns_dec(numb / 10);
		numb %= 10;
	}
	count++;
	ft_putchar(numb + '0');
	return (count);
}
