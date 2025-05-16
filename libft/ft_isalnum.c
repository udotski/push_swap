/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:13:31 by utersian          #+#    #+#             */
/*   Updated: 2024/10/31 12:13:38 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	int	i;
	int	idx;

	i = 0;
	idx = 1;
	if (c >= 'A' && c <= 'Z')
		idx = 1;
	else if (c >= 'a' && c <= 'z')
		idx = 1;
	else if (c >= '0' && c <= '9')
		idx = 1;
	else
		idx = 0;
	i++;
	return (idx);
}
/*
int	main()
{
	char*	str = "";
	int	idx;

	idx = ft_str_is_alpha(str);
        printf("Resultado: %d\n",idx);

}
*/
