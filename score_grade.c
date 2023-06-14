#include "stdio.h"

int main(){
    int score;
    char name[20];
    char* grade_score;
        printf("What's the Course Code? ");
        scanf("%s",name);
    score_section:
        printf("What's their score? ");
        scanf("%d",&score);
    if (score < 0 || score >100) {
        printf("That's an invalid score, type a new score");
        goto score_section;
    } if (score >=70 && score <=100){
        grade_score = "A";
    } else if (score >=60 && score <=69){
        grade_score = "B";
    } else if (score >=50 && score <=59){
        grade_score = "C";
    } else if (score >= 45 && score <=49){
        grade_score = "D";
    } else {
        grade_score = "F";
    } printf("They scored %d in %s, so their grade is %s",score,name,grade_score);
    return 0;
}
// git clone https://github.com/microsoft/vcpkg.git
// cd vcpkg
// bootstrap-vcpkg.bat
// vcpkg install libxlsxwriter