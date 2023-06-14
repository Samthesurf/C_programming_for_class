# include <stdio.h>

int main(void) {
    float conv, tempC, tempF;
    conv = (double) 5/9;
    printf("What's the temperature in F?\t");
    scanf("%f",&tempF);
    tempC = conv*(tempF - 32.0);
    printf("%f",tempC);
    
}