#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	ascii;

	ascii = 96;
	while (ascii++ != 122)
		write(1, &ascii, 1);
}