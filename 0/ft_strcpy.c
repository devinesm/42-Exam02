/*
• File: ft_strcpy.c | Allowed: none

Subject

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:
char *ft_strcpy(char *s1, char *s2);

*/

char *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';

    return (s1);
}