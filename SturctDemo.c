#include <stdio.h
typedef struct studentDetailForCollege
{
  int regno;
    char name[10];
    int batch;
}stu;
    int main()
    {
    stu s1;
    printf("Enter the regno");
    scanf("%d",&s1.regno);
    printf("%d\n",s1.regno);
    
    printf("");
    }