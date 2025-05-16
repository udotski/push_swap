#include <stdio.h>

int	ft_sq(int  pot)
{
	int	i;
	int	num;

	num = 2;
	if (pot == 0)
		return (1);
	i = 1;
	while (i++ < pot)
		num *= 2;
	return (num);
}
/*
int	main()
{
	int 	i;

	i = 0;
	while (i <= 5)
		printf("i = %d | Result: %d \n", i++, ft_sq(i));
	return 0;
}
*/
