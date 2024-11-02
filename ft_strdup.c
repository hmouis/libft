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

char  *ft_strdup(const char *s1)
{
    size_t  i;
    char    *arr;
    size_t  s1_len;

    s1_len = ft_strlen(s1);
    i = 0;
    arr = (char *)malloc(sizeof(char) * (s1_len + 1));
    if (arr == NULL)
        return (NULL);
    while (s1[i] != '0')
    {
        arr[i] = s1[i];
        i++;
    }
    arr[i] = '\0';
    return (arr);
}
#include <stdio.h>
int main()
{
    char s[] = "hello world";

    ft_strdup(s);
    printf("%s\n",s);
    return 0;
}
