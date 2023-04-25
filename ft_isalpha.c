/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:19:15 by alakshmi          #+#    #+#             */
/*   Updated: 2022/11/28 11:50:27 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int asc)
{
	if ((asc >= 'A' && asc <= 'Z') || (asc >= 'a' && asc <= 'z'))
		return (1);
	return (0);
}
