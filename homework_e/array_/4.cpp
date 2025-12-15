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
    
    int maxGrade = array[0];
    int minGrade = array[0];
    
    for (int i = 1; i < n; i = i + 1)
    {
        if (array[i] > maxGrade)
        {
            maxGrade = array[i];
        }
        
        if (array[i] < minGrade)
        {
            minGrade = array[i];
        }
    }
    
    for (int i = 0; i < n; i = i + 1)
    {
        if (array[i] == maxGrade)
        {
            array[i] = minGrade;
        }
    }
    
    for (int i = 0; i < n; i = i + 1)
    {
        printf("%d", array[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
    
    return 0;
}