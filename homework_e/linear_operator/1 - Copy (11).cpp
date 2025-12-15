#include<cstdio>

int main(int argc, char** argv)
{
    int number = 0;
    int tens = 0;
    
    scanf_s("%d", &number);
    
    tens = (number / 10) % 10;
    
    printf("%d", tens);
    
    return 0;
}