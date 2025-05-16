/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:14:21 by frbarbos          #+#    #+#             */
/*   Updated: 2025/01/11 17:13:00 by frbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void	print_content(void *content)
{
printf("Conteúdo: %s\n", (char *)content);
}

// Função para liberar o conteúdo de cada nó
void free_content(void *content)
{
    free(content);
}

int main()
{
    // Criando nós para a lista com conteúdos alocados dinamicamente
    t_list *node1 = ft_lstnew(strdup("Node 1"));
    t_list *node2 = ft_lstnew(strdup("Node 2"));
    t_list *node3 = ft_lstnew(strdup("Node 3"));

    if (!node1 || !node2 || !node3)
        return (1);

    // Conectando os nós
    node1->next = node2;
    node2->next = node3;

    // Testando ft_lstiter
    printf("Iterando sobre a lista:\n");
    ft_lstiter(node1, print_content);

    // Liberando a memória com ft_lstclear
    ft_lstclear(&node1, free_content);

    // Verificando se a lista foi limpa
    if (!node1)
        printf("Lista limpa com sucesso.\n");

    return (0);
}*/
