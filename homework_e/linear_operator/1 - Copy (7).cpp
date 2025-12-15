#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int k = 0;
    int first_way = 0;
    int basket = 0;
    int offended = 0;
    int average = 0;
    int remainder = 0;
    
    scanf_s("%d %d", &n, &k);
    
    first_way = k / n;
    basket = k % n;
    
    average = k / n;
    remainder = k % n;
    
    if (remainder == 0)
    {
        offended = 0;
    }
    else
    {
        offended = n - remainder;
    }
    
    printf("%d %d %d", first_way, basket, offended);
    
    return 0;
}