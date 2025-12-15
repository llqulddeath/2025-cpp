#include<stdio.h>
#include<string.h>

int Compare(char* s1, char* s2)
{
    if (strcmp(s1, s2) == 0)
    {
        return 1;
    }
    
    return 0;
}

int main()
{
    char s1[101] = {0};
    char s2[101] = {0};
    
    scanf("%s", s1);
    scanf("%s", s2);
    
    if (Compare(s1, s2))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    return 0;
}