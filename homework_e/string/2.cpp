#include<stdio.h>
#include<string.h>

unsigned char SwapCase(unsigned char c)
{
    const char* lower = "abcdefghijklmnopqrstuvwxyz";
    const char* upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    char* lowerPosition = strchr(lower, c);
    
    if (lowerPosition != NULL)
    {
        int index = lowerPosition - lower;
        return upper[index];
    }
    
    char* upperPosition = strchr(upper, c);
    
    if (upperPosition != NULL)
    {
        int index = upperPosition - upper;
        return lower[index];
    }
    
    return c;
}

int main()
{
    unsigned char c = 0;
    
    scanf("%c", &c);
    
    unsigned char result = SwapCase(c);
    
    printf("%c", result);
    
    return 0;
}