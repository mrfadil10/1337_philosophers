/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadil <mfadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:13:01 by mfadil            #+#    #+#             */
/*   Updated: 2022/10/21 19:14:19 by mfadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((unsigned char) c >= 'A' && (unsigned char)c <= 'Z')
	{
		c += 32;
	}
	return (c);
}
// int	main()
// {
// 	printf("%c\n", ft_tolower('H'));
// }