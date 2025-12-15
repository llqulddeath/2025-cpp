#include<cstdio>

struct Student
{
    char firstName[21];
    char lastName[21];
    int math;
    int physics;
    int informatics;
};

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    
    Student students[100];
    
    int totalMath = 0;
    int totalPhysics = 0;
    int totalInformatics = 0;
    
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %d %d %d", 
              students[i].lastName, 
              students[i].firstName, 
              &students[i].math, 
              &students[i].physics, 
              &students[i].informatics);
        
        totalMath = totalMath + students[i].math;
        totalPhysics = totalPhysics + students[i].physics;
        totalInformatics = totalInformatics + students[i].informatics;
    }
    
    double averageMath = (double)totalMath / n;
    double averagePhysics = (double)totalPhysics / n;
    double averageInformatics = (double)totalInformatics / n;
    
    printf("%g %g %g\n", averageMath, averagePhysics, averageInformatics);
    
    return 0;
}