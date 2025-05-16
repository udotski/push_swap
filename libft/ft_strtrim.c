/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 12:33:49 by utersian          #+#    #+#             */
/*   Updated: 2025/01/25 12:47:57 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	check_malloc(char *s)
{
	if (!s)
		return ;
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		i;
	int		e;
	int		s_len;
	char	*sout;

	if (!s || !set)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	while (s[i] && ft_strchr((char *)set, (unsigned int) s[i]))
		i++;
	e = 0;
	while ((s_len > i) && ft_strrchr(set, (unsigned int) s[s_len - e - 1]))
		e++;
	s_len = s_len - (i + e);
	sout = (char *)malloc(sizeof(char) * (s_len + 1));
	check_malloc(sout);
	sout = ft_memcpy(sout, &s[i], s_len);
	sout[s_len] = '\0';
	return (sout);
}
/*
int	main(int argc, char *argv[]){
	if (argc < 3){
		printf("Entre com duas strings.\n");
		return (0);}
	printf("Arg1: %s\n",argv[1]);
        printf("Arg2: %s\n",argv[2]);
	printf("Resultado:%s\n",ft_strtrim(argv[1], argv[2]));
	return (0);
}
*/
