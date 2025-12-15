#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    
    int current = 0;
    int count = 0;
    int maxCount = 0;
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &current);
        
        if (current > 0)
        {
            count = count + 1;
            if (count > maxCount)
            {
                maxCount = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    
    printf("%d\n", maxCount);
    
    return 0;
}