#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int l = 0;
    int r = 0;
    int maxValue = 0;
    int maxIndex = 0;
    
    scanf_s("%d", &n);
    
    int array[1000] = {0};
    
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &array[i]);
    }
    
    scanf_s("%d %d", &l, &r);
    
    l = l - 1;
    r = r - 1;
    
    maxValue = array[l];
    maxIndex = l;
    
    for (int i = l + 1; i <= r; i++)
    {
        if (array[i] > maxValue)
        {
            maxValue = array[i];
            maxIndex = i;
        }
    }
    
    printf("%d %d", maxValue, maxIndex + 1);
    
    return 0;
}