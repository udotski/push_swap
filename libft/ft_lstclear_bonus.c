/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:29:12 by frbarbos          #+#    #+#             */
/*   Updated: 2025/01/10 15:30:47 by frbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
/* Função de deleção usada no teste
void del_content(void *content)
{
    free(content);
}

int main()
{
    // Criando uma lista com 3 nós para teste
    t_list *node1 = ft_lstnew(malloc(sizeof(int)));
    t_list *node2 = ft_lstnew(malloc(sizeof(int)));
    t_list *node3 = ft_lstnew(malloc(sizeof(int)));

    if (!node1 || !node2 || !node3)
        return (1);

    *(int *)(node1->content) = 1;
    *(int *)(node2->content) = 2;
    *(int *)(node3->content) = 3;

    node1->next = node2;
    node2->next = node3;

    printf("Antes de ft_lstclear:\n");
    t_list *current = node1;
    while (current)
    {
        printf("Nó: %d\n", *(int *)(current->content));
        current = current->next;
    }

    // Chamando ft_lstclear
    ft_lstclear(&node1, del_content);

    // Verificando se a lista foi limpa
    if (!node1)
        printf("Lista limpa com sucesso.\n");
    else
        printf("Erro ao limpar a lista.\n");

    return (0);
}*/
