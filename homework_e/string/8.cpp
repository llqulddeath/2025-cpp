#include<stdio.h>
#include<string.h>

int main()
{
    char line[1001] = {0};
    
    fgets(line, sizeof(line), stdin);
    
    int count = 0;
    char* token = strtok(line, " \n");
    
    while (token != NULL)
    {
        count = count + 1;
        token = strtok(NULL, " \n");
    }
    
    printf("%d", count);
    
    return 0;
}