#include<stdio.h>
#include<string.h>

unsigned char ToUpper(unsigned char c)
{
    const char* lower = "abcdefghijklmnopqrstuvwxyz";
    const char* upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    char* position = strchr(lower, c);
    
    if (position != NULL)
    {
        int index = position - lower;
        return upper[index];
    }
    
    return c;
}

int main()
{
    unsigned char c = 0;
    
    scanf("%c", &c);
    
    unsigned char result = ToUpper(c);
    
    printf("%c", result);
    
    return 0;
}