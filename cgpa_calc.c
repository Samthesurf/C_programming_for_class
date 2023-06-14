# include <stdio.h>

int main () {
    int n, sum = 0, overall_score, course_unit_sum = 0, grade_score, i;
    char course_code[20];
	double cgpa;
    printf("What's the number of courses? ");
    scanf("%d",&n);
    int  score[n], course_unit[n];
    for(i = 1; i<=n; i++){
    printf("what's the course code\t");
    scanf("%s",course_code);
    printf("What is their score? ");
    scanf("%d",&score[i]);
    if (score[i] >=70 && score[i] <=100){
        grade_score = 5;
    } else if (score[i] >=60 && score[i] <=69){
        grade_score = 4;
    } else if (score[i] >=50 && score[i] <=59){
        grade_score = 3;
    } else if (score[i] >= 45 && score[i] <=49){
        grade_score = 2;
    } else {
        grade_score = 0;
    }
    printf("What is the course unit? ");
    scanf("%d",&course_unit[i]);
     overall_score = grade_score * course_unit[i];
        sum +=overall_score;
        course_unit_sum +=course_unit[i];
        cgpa = (double) sum / course_unit_sum; 
    }
    
    printf("Their CGPA is %.2f",cgpa);
    return 0;
}
// The biggest significance of entrepreneurship lies in the fact that it helps in identifying and developing
// A) managerial capabilities B) Management of life C)Management capabilities D) welfare management
