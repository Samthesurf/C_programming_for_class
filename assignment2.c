# include <stdio.h>

 int main (){
    int mult, end, x;
    // the size of each times table
    printf("What's the multiplication ending: ");
    scanf("%d",&mult);
    // how many times table are we doing
    printf("Till when are we multiplying: ");
    scanf("%d",&end);
    for (x = 1; x<=end; x++){
        for (int i = 1; i<= mult; i++){
           printf("%d * %d = %d\n",x,i,x*i); 
        }
        printf("\n");
    }
    return 0;
 }