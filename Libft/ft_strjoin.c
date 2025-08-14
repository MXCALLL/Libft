/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:40:27 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/19 15:04:38 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*total_alloc;
	size_t		s1_len;
	size_t		s2_len;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_alloc = malloc(s1_len + s2_len + 1);
	if (total_alloc == NULL)
		return (NULL);
	ft_memcpy(total_alloc, s1, s1_len);
	ft_memcpy(total_alloc + s1_len, s2, s2_len);
	total_alloc[s1_len + s2_len] = '\0';
	return (total_alloc);
}
