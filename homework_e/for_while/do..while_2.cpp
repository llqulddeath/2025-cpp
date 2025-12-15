#include <cstdio>

int main(int argc, char** argv)
{
    int number = 0;
    int max = 0;
    int secondMax = 0;
    int first = 1;
    
    scanf("%d", &number);
    
    while (number != 0)
    {
        if (first == 1)
        {
            max = number;
            first = 0;
        }
        else
        {
            if (number > max)
            {
                secondMax = max;
                max = number;
            }
            else if (number > secondMax && number != max)
            {
                secondMax = number;
            }
        }
        
        scanf("%d", &number);
    }
    
    printf("%d\n", secondMax);
    
    return 0;
}