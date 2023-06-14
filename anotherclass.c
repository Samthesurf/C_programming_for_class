#include <stdio.h>

int main () {
    int age;
    char name[16]; 
    char* age_group;

    printf("Type your name and age: ");
    scanf("%s",name);
    scanf("%d",&age);
    if (age >= 13 && age <=19){
     age_group = "teenager";
    }
    else
    if (age > 19){
        age_group = "adult";
    }
    else {
        age_group = "infant";
    }
printf("%s is an %s",name,age_group);
    return 0;
}
