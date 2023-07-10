/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakman <eakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:17:42 by eakman            #+#    #+#             */
/*   Updated: 2023/07/10 10:36:45 by eakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*src;

	src = (char *)s;
	if (!src)
		return(NULL);
	if (start >= ft_strlen(s))
	{
		str = (char *)malloc(sizeof(char));
		if(!str)
			return(NULL);
		*str = '\0';
	}
	else
	{
		if((ft_strlen(s) - start) < len)
			len = ft_strlen(s) - start;
		str = (char *)malloc((sizeof(char)* len) + 1);
		if(!str)
			return(NULL);
		ft_strlcpy(str, (s + start), len + 1);
	}
	return (str);
}

/* int	main()
{
	char	a[] = "Yaralı kalbim";

	printf("%s", ft_substr(a, 3, 6));
} */