# include <stdio.h>

int main () {
    float radius, pi, area;
    printf("The radius of the circle is\t");
    scanf("%f",&radius);
    pi = (double) 22 / 7; //casting
    area = pi *(radius * radius);
    printf("The area of the circle is %.2f",area);
    return 0;
}
