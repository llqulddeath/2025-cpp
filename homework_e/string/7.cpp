#include<stdio.h>
#include<string.h>

int main()
{
    char line[1001] = {0};
    
    fgets(line, sizeof(line), stdin);
    
    char* longestWord = NULL;
    int maxLength = 0;
    
    char* token = strtok(line, " \n");
    
    while (token != NULL)
    {
        int currentLength = strlen(token);
        
        if (currentLength > maxLength)
        {
            maxLength = currentLength;
            longestWord = token;
        }
        
        token = strtok(NULL, " \n");
    }
    
    if (longestWord != NULL)
    {
        printf("%s\n", longestWord);
        printf("%d", maxLength);
    }
    
    return 0;
}