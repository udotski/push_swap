/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:30:56 by frbarbos          #+#    #+#             */
/*   Updated: 2025/01/09 14:16:32 by frbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*int main(void)
{
	// Cria um novo nó com o conteúdo "Hello, world!"
	t_list *node = ft_lstnew("Hello, world!");

	if (node)
	{
		// Imprime o conteúdo do nó
		printf("Content: %s\n", (char *)node->content);

		// Libera a memória alocada
		free(node);
	}
	else
	{
		printf("Erro ao criar o nó!\n");
	}

	return (0);
}*/
