#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *new;
    size_t  s1_len;
    size_t  s2_len;
    size_t  i;
    size_t  j;

    s1_len  = ft_strlen(s1);
    s2_len  = ft_strlen(s2);
    new = (char *)malloc(sizeof(char) * (s1_len +  s2_len + 1));
    if (new == NULL)
        return (NULL);
    i = 0;
    while (s1[i] != '\0')
    {
        new[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        new[i + j] = s2[j];
        j++;
    }
    new[i + j] = '\0';
    return (new);
}

#include <stdio.h>

int main()
{
    char s1[] = "hello";
    char s2[] = " world.";
    
    char *s = ft_strjoin(s1,s2);
    printf("%s\n",s);
    return 0;




    
}
