# include <stdio.h>

void multiplication (int multiplier,int num) {
    int i;
    for (i = 1; i<=num; i++){
    printf("%d * %d = %d\n",multiplier,i,multiplier*i);
    }
}
 int main (){
    int mult, end, x;
    printf("What's the multiplication ending: ");
    scanf("%d",&mult);
    printf("Till when are we multiplying: ");
    scanf("%d",&end);
    for (x = 1; x<=end; x++){
    multiplication(x,mult);
    printf("\n");
    }
    return 0;
 }