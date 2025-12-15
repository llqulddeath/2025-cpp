#include<stdio.h>
#include<string.h>

int IsDigit(unsigned char c)
{
    const char* digits = "0123456789";
    
    if (strchr(digits, c) != NULL)
    {
        return 1;
    }
    
    return 0;
}

int main()
{
    unsigned char c = 0;
    
    scanf("%c", &c);
    
    if (IsDigit(c))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    return 0;
}