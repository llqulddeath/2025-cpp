#include<cstdio>

int main(int argc, char** argv)
{
    int harry = 0;
    int larry = 0;
    int total = 0;
    int harry_not = 0;
    int larry_not = 0;
    
    scanf_s("%d %d", &harry, &larry);
    
    total = harry + larry - 1;
    
    harry_not = total - harry;
    larry_not = total - larry;
    
    printf("%d %d", harry_not, larry_not);
    
    return 0;
}