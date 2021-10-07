/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_cara_trie.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:06:53 by mbonnet           #+#    #+#             */
/*   Updated: 2021/10/07 17:28:07 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_init_cara_trie(void)
{
	char	**res;

	res = malloc(sizeof(char *) * 12);
	if (res == NULL)
		return (NULL);
	res[0] = "pa";
	res[1] = "pb";
	res[2] = "ra";
	res[3] = "rb";
	res[4] = "rr";
	res[5] = "rra";
	res[6] = "rrb";
	res[7] = "rrr";
	res[8] = "sa";
	res[9] = "sb";
	res[10] = "ss";
	res[11] = NULL;
	return (res);
}
