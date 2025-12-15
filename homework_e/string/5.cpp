#include<stdio.h>
#include<string.h>

int main()
{
    char str[101] = {0};
    
    scanf("%s", str);
    
    int length = strlen(str);
    char duplicateChar = 0;
    
    for (int i = 0; i < length; i = i + 1)
    {
        for (int j = i + 1; j < length; j = j + 1)
        {
            if (str[i] == str[j])
            {
                duplicateChar = str[i];
                break;
            }
        }
        
        if (duplicateChar != 0)
        {
            break;
        }
    }
    
    printf("%c", duplicateChar);
    
    return 0;
}