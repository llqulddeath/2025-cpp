#include<stdio.h>
#include<string.h>

int main()
{
    char word[101] = {0};
    
    scanf("%s", word);
    
    int length = strlen(word);
    int isPalindrome = 1;
    
    for (int i = 0; i < length / 2; i = i + 1)
    {
        if (word[i] != word[length - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    return 0;
}