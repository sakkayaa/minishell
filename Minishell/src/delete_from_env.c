/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_from_env.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:16:35 by sakkaya            #+#    #+#             */
/*   Updated: 2022/07/31 16:16:36 by sakkaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	free_env(t_env *temp)
{
	free(temp->key);
	free(temp->value);
	free(temp);
}

static void	more_del(char *del, t_env **env)
{
	t_env	*temp;
	t_env	*temp2;

	temp = *env;
	while (temp)
	{
		if (!ft_strncmp(temp->next->key, del, ft_strlen(del)))
		{
			temp2 = temp->next;
			temp->next = temp->next->next;
			free_env(temp2);
			return ;
		}
		temp = temp->next;
	}
}

void	delete_from_env(char *del, t_env **env)
{
	t_env	*temp;
	t_env	*temp2;

	temp = *env;
	if (!temp)
		return ;
	else if (!temp->next && !ft_strncmp(temp->key, del, ft_strlen(del) + 1))
	{
		free_env(temp);
		temp = NULL;
		return ;
	}
	else if (temp->next && !ft_strncmp(temp->key, del, ft_strlen(del) + 1))
	{
		temp2 = temp;
		*env = temp->next;
		free_env(temp2);
		return ;
	}
	else
		more_del(del, env);
	return ;
}
