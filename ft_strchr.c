/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:49:11 by eakman            #+#    #+#             */
/*   Updated: 2023/07/05 20:00:23 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	s_len;

	s_len = ft_strlen(str);
	while(s_len >= 0)
	{
		if(*str == (char)c)
			return((char *)str);
		str++;
		s_len--;
	}
	return(NULL);
}

int main()
{
	const char a[] = "Denizde";

	printf("%s", ft_strchr(a, 'n'));
} 