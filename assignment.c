# include <stdio.h>
int main ()
{
    int age;
    char Name[40];
    printf("Name:\t");
    scanf("%s",Name);

    printf("age\t");
    scanf("%d", &age);
    printf("My name is %s and I am %d years old",Name,age);
    return 0;
}