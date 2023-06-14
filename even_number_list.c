# include <stdio.h>

int main(void) {
    int even_num[51], i,n = 0, m =0;
    for (i = 1;i<=100;++i){
        if (i % 2 == 0){ 
            even_num[n] = i;
            n = n+1;
        }
    }
        printf("(");
    for (i = 0;i<n;++i){
        printf("%d, ",even_num[i]);
    }
        printf(")");
}