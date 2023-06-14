# include <stdio.h>
int main (void) {
    int age = 15;
    printf("I am %d years old\n",age);
    int num = 100;
    printf("Decimal:%d, Octal:%o, Hexadecimal:%x\n",num,num,num);
    long x = 123456789l;
    printf("%ld",x);
    return 0;
}