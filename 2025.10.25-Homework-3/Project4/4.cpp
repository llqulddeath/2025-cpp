#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int x = 0;
    scanf_s("%d", &n);
    
    int array[1000] = {0};
    
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &array[i]);
    }
    
    scanf_s("%d", &x);
    
    int closest = array[0];
    int minDiff = 0;
    
    if (x > array[0])
    {
        minDiff = x - array[0];
    }
    else
    {
        minDiff = array[0] - x;
    }
    
    for (int i = 1; i < n; i++)
    {
        int diff = 0;
        if (x > array[i])
        {
            diff = x - array[i];
        }
        else
        {
            diff = array[i] - x;
        }
        
        if (diff < minDiff)
        {
            minDiff = diff;
            closest = array[i];
        }
        else if (diff == minDiff)
        {
            if (array[i] < closest)
            {
                closest = array[i];
            }
        }
    }
    
    printf("%d", closest);
    
    return 0;
}