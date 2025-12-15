#include <cstdio>

int main(int argc, char** argv)
{
    int current = 0;
    int previous = 0;
    int count = 1;
    int maxCount = 1;
    int first = 1;
    
    scanf("%d", &current);
    
    while (current != 0)
    {
        if (first == 1)
        {
            previous = current;
            first = 0;
        }
        else
        {
            if (current == previous)
            {
                count = count + 1;
                if (count > maxCount)
                {
                    maxCount = count;
                }
            }
            else
            {
                previous = current;
                count = 1;
            }
        }
        
        scanf("%d", &current);
    }
    
    printf("%d\n", maxCount);
    
    return 0;
}