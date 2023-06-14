#include <stdio.h>
#include <stdlib.h>
int main (void) {
    char i_name[3][20];
    int i_qty[3], i_price[3], item_tp[3], i,j, total;
    total = 0;
     
    for (i = 0; i<3; i++){
        printf("Item name\t"); 
        scanf("%s",i_name[i]);
        printf("\nItem price in Naira\tN");
        scanf("%d",&i_price[i]);
        printf("\nQuantity of Item\t");
        scanf("%d",&i_qty[i]);
        item_tp[i] = i_price[i]*i_qty[i];
        total = total + item_tp[i];
    }
    system("cls");
    printf("Item\tPrice(N)  Qty\t Prdt(N)\n");
    for (j = 0; j < 3; ++j){
        printf("%s\t %d\t %d\t %d\t\n",i_name[j],i_price[j],i_qty[j],item_tp[j]);
    }
    printf("The total is\t\tN%d",total);
    return 0;
}