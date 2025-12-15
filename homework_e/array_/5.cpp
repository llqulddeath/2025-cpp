#include<cstdio>
#include<cstdlib>

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    
    int array[1001];
    
    for (int i = 0; i < n; i = i + 1)
    {
        scanf("%d", &array[i]);
    }
    
    int x = 0;
    scanf("%d", &x);
    
    int closestValue = array[0];
    int minDifference = abs(array[0] - x);
    
    for (int i = 1; i < n; i = i + 1)
    {
        int currentDifference = abs(array[i] - x);
        
        if (currentDifference < minDifference)
        {
            minDifference = currentDifference;
            closestValue = array[i];
        }
        else if (currentDifference == minDifference)
        {
            if (array[i] < closestValue)
            {
                closestValue = array[i];
            }
        }
    }
    
    printf("%d", closestValue);
    
    return 0;
}