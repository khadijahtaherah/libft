/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:14:24 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/28 21:14:29 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_element(char const *s, char c);

/* @function	ft_split - split string by delimiter c
 * @params		
 * @brief		Allocates with malloc.
 * @return		\
 */
char	**ft_split(char const *s, char c)
{
	int		element;
	char	**array;
	char	*buffer;

	buffer = malloc((strlen(s) + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	strcpy(buffer, s);

	element = get_element(s, c);
	array = malloc((element + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	set_size(buffer, array, c, element);
	fill_word(buffer, array, c, element);
	free(buffer);
	return (array);
}

int	get_element(char const *s, char c)
{
	int	element;

	element = 0;
	while (*s)
	{
		if (*s == c)
			element++;
		s++;
	}
	element++;
	return (element);
}

void	set_size(char *s, char **array, char c, int element)
{
	int start;
	int end;
	int size;
	int	i;

	start = 0;
	end = 0;
	i = 0;
	while (i < element)
	{
		while (*s != c && *s)
		{
			end++;
			s++;
		}
		size = end - start + 1;
		array[i] = malloc(size * sizeof(char));
		if (!array[i])
			return (NULL);
		i++;
		end++; //skip c
		s++; //skip c
		start = end;
	}
}

void	fill_word(char *s, char **array, char c, int element)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (i < element)
	{
		j = 0;
		while (s[k] != c && s[k])
			array[i][j++] = s[k++];
		array[i][j] = '\0';
		i++;
		k++; //skip c
	}
}

int main()
{
	const char *s = "Hello,World,Split,Example";
    char **result = ft_split(s, ',');

    if (result) {
        // Print each element in the array
        for (int i = 0; result[i] != NULL; i++) {
            printf("%s\n", result[i]);
        }

        // Free allocated memory
        for (int i = 0; result[i] != NULL; i++) {
            free(result[i]);
        }
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;

}