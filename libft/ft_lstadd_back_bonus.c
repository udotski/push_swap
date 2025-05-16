/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:21:42 by frbarbos          #+#    #+#             */
/*   Updated: 2025/01/10 12:03:16 by frbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*current;

	current = *lst;
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
}
/*int main(void)
{
    t_list *head = NULL;
    t_list *new_node;

    // Criando e adicionando o primeiro nó
    new_node = ft_lstnew("Primeiro nó!");
    ft_lstadd_back(&head, new_node);

    // Criando e adicionando o segundo nó
    new_node = ft_lstnew("Segundo nó!");
    ft_lstadd_back(&head, new_node);

    // Criando e adicionando o terceiro nó
    new_node = ft_lstnew("Terceiro nó!");
    ft_lstadd_back(&head, new_node);

    // Imprimindo a lista
    t_list *current = head;
    while (current)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Liberando a memória
    while (head)
    {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}*/
