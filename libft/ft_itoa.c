/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:32:32 by utersian          #+#    #+#             */
/*   Updated: 2025/01/25 13:09:51 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*reverse(char *str, int length)
{
	int		start;
	int		end;
	char	temp;

	end = length - 1;
	start = 0;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return (str);
}

char	*alloc_str(int num, int is_negative)
{
	int	i;
	int	rem;

	rem = num;
	i = 0;
	while (rem != 0)
	{
		rem /= 10;
		i++;
	}
	if (is_negative == 1 || num == 0)
		i++;
	return ((char *) malloc (sizeof(char) * (i + 1)));
}

char	*special_cases(int num)
{
	int		i;
	char	*str;

	i = 0;
	if (num == 0)
	{
		str = alloc_str(num, 0);
		if (!str)
			return (0);
		str[i] = '0';
		str[++i] = '\0';
	}
	if (num == -2147483648)
		str = ft_strdup("-2147483648");
	return (str);
}

char	*convert(char *str, int num, int is_negative)
{
	int	i;
	int	rem;

	rem = 0;
	i = 0;
	while (num != 0)
	{
		rem = num % 10;
		if (rem > 9)
			str[i++] = (rem - 10) + 'a';
		else
			str[i++] = rem + '0';
		num = num / 10;
	}
	if (is_negative)
		str[i++] = '-';
	str[i] = '\0';
	return (reverse(str, i));
}

char	*ft_itoa(int num)
{
	int		is_negative;
	char	*str;

	if (num == 0 || num == -2147483648)
		return (str = special_cases(num));
	is_negative = 0;
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	str = alloc_str(num, is_negative);
	if (!str)
		return (0);
	return (convert(str, num, is_negative));
}
/*
int main() {
    int num = -1234;
    printf("Integer: %d, String: %s\n", num, ft_itoa(num));
    return 0;
}
*/
