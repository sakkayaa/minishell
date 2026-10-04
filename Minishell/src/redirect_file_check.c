/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirect_file_check.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:32:53 by sakkaya            #+#    #+#             */
/*   Updated: 2022/07/31 15:32:53 by sakkaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

bool	redirect_file_check(t_token *token_list)
{
	t_token	*temp;

	temp = token_list;
	while (temp && temp->next)
	{
		if (temp->type == REDIRECT && temp->next->type != T_FILE)
			return (false);
		temp = temp->next;
	}
	return (true);
}
