#include <stdio.h>

int main() {
    char subject[5][10];
    int score[5];
    char grade[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Enter the course code of subject %d: ", i+1);
        scanf("%s", subject[i]);
        printf("Enter the score of subject %s: ", subject[i]);
        scanf("%d", &score[i]);
        
        if (score[i] >= 70 && score[i] <= 100) {
            grade[i] = 'A';
        } else if (score[i] >= 60 && score[i] <= 69) {
            grade[i] = 'B';
        } else if (score[i] >= 50 && score[i] <= 59) {
            grade[i] = 'C'; 
        } else if (score[i] >= 45 && score[i] <= 49) {
            grade[i] = 'D';
        } else {
            grade[i] = 'F';
        }
    }
    
    for (int i = 0; i < 5; i++) {
        printf("They scored %d in %s, so their grade is %c\n",score[i],subject[i], grade[i]);
    }
}