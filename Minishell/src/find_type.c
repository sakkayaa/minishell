/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:41:16 by sakkaya            #+#    #+#             */
/*   Updated: 2022/07/31 15:41:16 by sakkaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

bool	is_builtin(char *str)
{
	if (!ft_strncmp("echo", str, 5)
		|| !ft_strncmp("exit", str, 5)
		|| !ft_strncmp("cd", str, 3)
		|| !ft_strncmp("unset", str, 6)
		|| !ft_strncmp("export", str, 7))
		return (true);
	if (!ft_strncmp("pwd", str, 4))
		return (true);
	if (!ft_strncmp("env", str, 4))
		return (true);
	return (false);
}

bool	is_operator(char *str)
{
	if (!ft_strncmp("|", str, 2)
		|| !ft_strncmp("<", str, 2)
		|| !ft_strncmp(">", str, 2)
		|| !ft_strncmp(">>", str, 3)
		|| !ft_strncmp("<<", str, 3))
		return (true);
	return (false);
}

bool	is_redirect(char *str)
{
	if (!ft_strncmp("<", str, 2)
		|| !ft_strncmp(">", str, 2)
		|| !ft_strncmp(">>", str, 3)
		|| !ft_strncmp("<<", str, 3))
		return (true);
	return (false);
}
