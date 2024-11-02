#include <stdlib.h>
#include <stddef.h>

size_t  count(int n)
{
    size_t  n_len;

    n_len = 0;
    while (n > 0)
    {
        n_len++;
        n /= 10;
    }
    return (n_len);
}

char  *ft_putnbr(int n)
{
    size_t  i;
    char     *arr;
    size_t len;

    i = 0;
    len = count(n);
    
    arr = malloc(sizeof(char) * (len + 1));
    while (n > 0)
    {
        arr [i] = n % 10 + '0';
        n /= 10;
        i++;
    }
    arr[i] = '\0';
    return (arr);    
}

char  *ft_mlc(int n)
{
    size_t  i;
    char    *arr;
    size_t  n_len;
    
    i = 0;
    if (n < 0)
    {
        n *= -1;
        n_len = count(n);
        arr = malloc(sizeof(char) * (n_len + 2));
        arr[0] = '-';
        return (arr);
    }
    n_len = count(n);
    if (n == 0)
        n_len = 1;
    arr = malloc(sizeof(char) * (n_len + 1));
    return (arr);
}

char *ft_itoa(int n)
{
    char  *arr;
    size_t  i;
    size_t  n_len;
    char  *put_arr;

    arr = ft_mlc(n);
    i = 0;
    if (n < 0)
    {
        n *= -1;
        i = 1;
    }
    n_len = count(n);
    put_arr = ft_putnbr(n);
    while (i < n_len + i)
    {
        arr[i] = put_arr[n_len - 1];
        n_len--;
        i++;
    }
    arr[i] = '\0';
    return (arr);
}

#include <stdio.h>
int main()
{
    char *a = ft_itoa(-2147483648);
    printf("%s\n",a);
    return 0;
}
