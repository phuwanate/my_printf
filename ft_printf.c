#include "ft_printf.h"

void	ft_checkformat(char c, va_list *ap, int *len_str)
{
	if (c == 'c')
		ft_putchr(va_arg(*ap, int), len_str);
	else if (c == 's')
		ft_putstr(va_arg(*ap, char *), len_str);
	else if (c == 'p')
		ft_putptr(va_arg(*ap, uintptr_t), len_str);
	else if (c == 'x')
		ft_puthex(va_arg(*ap, unsigned int), len_str, 'x');
	else if (c == 'X')
		ft_puthex(va_arg(*ap, unsigned int), len_str, 'X');
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(*ap, int), len_str);
	else if (c == 'u')
		ft_putuns_nbr(va_arg(*ap, unsigned int), len_str);
	else if (c == '%')
		ft_putchr('%', len_str);
}

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	int			len_str;
	int			i;

	va_start(ap, str);
	len_str = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			ft_checkformat(str[++i], &ap, &len_str);
			i++;
		}
		else
			ft_putchr(str[i++], &len_str);
	}
	va_end(ap);
	return (len_str);
}
