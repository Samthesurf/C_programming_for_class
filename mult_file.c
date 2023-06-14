# include <stdio.h>

int main() {
	int a,b;
    for ( a = 1; a<13; a++){
    for (b = 1; b<13; b++){
     printf("%d * %d = %d\n",a,b,a*b);
    }
    printf("\n");
    }
    return 0;
}
