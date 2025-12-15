#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    
    int array[1001];
    
    for (int i = 0; i < n; i = i + 1)
    {
        scanf("%d", &array[i]);
    }
    
    int l = 0;
    int r = 0;
    scanf("%d %d", &l, &r);
    
    int maxIndex = l - 1;
    int maxValue = array[maxIndex];
    
    for (int i = l; i <= r; i = i + 1)
    {
        int currentIndex = i - 1;
        
        if (array[currentIndex] > maxValue)
        {
            maxValue = array[currentIndex];
            maxIndex = currentIndex;
        }
    }
    
    printf("%d %d", maxValue, maxIndex + 1);
    
    return 0;
}