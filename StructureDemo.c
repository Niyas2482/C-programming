#include <stdio.h>
struct student
{
    int regno;
    char name[10];
    int batch;

};
 int main()
{
    struct student s1;
    printf("Enter the regno");
    scanf("%d",&s1.regno);
    printf("My regno is%d\n",s1.regno);
   
    printf("Enter the name");
    scanf("%d",&s1.name);
    printf("My regno is%d\n",s1.name);

    printf("Enter the batch");
    scanf("%d",&s1.batch);
    printf("My regno is%d\n",s1.batch);

    return 0;
    



}