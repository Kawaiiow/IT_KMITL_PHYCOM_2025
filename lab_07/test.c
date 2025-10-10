#include <stdio.h>
#include <string.h>
 
void    init_name(char  name[][61], int n);
void    sort(char  name[][61], int n);
void    print_array(char name[][61],int order[], int n);
 
int main(void)
{
    int     n;
    scanf("%d", &n);
    char    name[n][61];
 
    init_name(name, n);
    sort(name, n);
}
 
void    init_name(char  name[][61], int n)
{
    int     i;
    int     j;
 
    i = 0;
    while (i < n)
    {
        scanf("\n%[^\n]", name[i]);
        j = 0;
        while (name[i][j] != '\0')
        {
            if (j == 0 && name[i][j] >= 'a' && name[i][j] <= 'z')
                name[i][j] = name[i][j] - ('a' - 'A');
            else if (j != 0 && name[i][j - 1] == ' ' && name[i][j] >= 'a' && name[i][j] <= 'z')
                name[i][j] = name[i][j] - ('a' - 'A');
            else if (j != 0 && name[i][j - 1] != ' ' && name[i][j] >= 'A' && name[i][j] <= 'Z')
                name[i][j] = name[i][j] + ('a' - 'A');
            j++ ;
        }
        i++ ;
    }
}
 
void    sort(char  name[][61], int n)
{
    int order[n];
    int is_order;
    int tmp;
 
    for (int i = 0; i < n; i++)
    {
        order[i] = i;
    }
    is_order = 0;
    while (is_order == 0)
    {
        is_order = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (strcmp(name[order[i]], name[order[i + 1]]) > 0)
            {
                tmp = order[i];
                order[i] = order[i + 1];
                order[i + 1] = tmp;
                is_order = 0;
            }
        }
    }
    print_array(name, order, n);
}
 
void    print_array(char name[][61],int order[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%s\n", name[order[i]]);
}
