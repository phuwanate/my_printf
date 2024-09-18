#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchr(char c, int *len_str);
void	ft_checkformat(char c, va_list *ap, int *len_str);
int		ft_printf(const char *str, ...);
void	ft_putstr(char *s, int *len_str);
void	ft_putnbr(int nb, int *len_str);
void	ft_putptr(uintptr_t nb, int *len_str);
void	ft_puthex(unsigned int nb, int *len_str, char check_x);
void	ft_putuns_nbr(unsigned int nb, int *len_str);

#endif