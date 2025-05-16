/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:25:05 by frbarbos          #+#    #+#             */
/*   Updated: 2025/01/10 13:26:29 by frbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*void del(void *content)
{
    free(content);  
// Libera a memória da string ou outro tipo de conteúdo alocado
}

int main(void)
{
// Criando um nó com conteúdo alocado dinamicamente (exemplo de string)
    t_list *node = ft_lstnew(malloc(sizeof(char) * 20));
    if (!node)
        return 1;

    // Preenchendo o conteúdo do nó com uma string
    sprintf((char *)node->content, "Conteúdo do nó");

    // Chamando ft_lstdelone para liberar o nó
    ft_lstdelone(node, del);
    
    // Se a função funcionou corretamente, 
a memória foi liberada e o programa termina sem vazamentos.
    
    return 0;
}*/
