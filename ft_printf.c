/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:11:53 by cvakasir          #+#    #+#             */
/*   Updated: 2022/09/08 16:04:17 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer_case(va_list args)
{
	unsigned long int	pointer;
	int					count;

	count = 0;
	pointer = va_arg(args, unsigned long int);
	if (pointer != 0)
	{
		count += ft_putstr("0x");
		count += ft_hexa_lower(pointer);
	}
	else
	{
		count += write(1, "(null)", 6);
		return (count);
	}
	return (count);
}

int	check_for_next(char const *string, va_list args, int i)
{
	int	count;

	count = 0;
	if (string[i] == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (string[i] == '%')
		count += ft_putchar('%');
	else if (string[i] == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (string[i] == 'p')
	{
		count += ft_pointer_case(args);
	}
	else if ((string[i] == 'd') || (string[i] == 'i'))
		count += ft_write_number(va_arg(args, int));
	else if (string[i] == 'x')
		count += ft_hexa_lower(va_arg(args, unsigned long int));
	else if (string[i] == 'X')
		count += ft_hexa_upper(va_arg(args, unsigned long int));
	else if (string[i] == 'u')
		count += ft_uns_dec(va_arg(args, unsigned int));
	else
		return (0);
	return (count);
}

int	ft_printf(const char *string, ...)
{
	int		i;
	va_list	args;
	int		count;

	count = 0;
	va_start(args, string);
	i = 0;
	while (string[i])
	{
		if (string[i] == '%' && string[i + 1])
		{			
			count += check_for_next(string, args, ++i);
		}
		else
		{
			count += write(1, &string[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}
