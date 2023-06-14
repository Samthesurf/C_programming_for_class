# include <stdio.h>

int main (void) {
    int n,i, grade_point,overall_score, total_score = 0, sum_units = 0, sum = 0;
    char course_name[20];
    float cgpa;
    printf("What's the number of courses?\t");
    scanf("%d",&n);

    for(i = 0; i<n; i++){
        int st_score[n], course_unit[n];
        printf("What's the name of the course?\t");
        scanf("%s",course_name);
        printf("What did they score?");
        scanf("%d",&st_score[i]);
        if(st_score[i]>=70 && st_score[i]<=100){
            grade_point = 5;
        }
        else if(st_score[i]>=60 && st_score[i]<=69){
            grade_point = 4;
        }
        else if(st_score[i]>=50 && st_score[i]<=59){
            grade_point = 3;
        }
        else if(st_score[i]>=45 && st_score[i]<=49){
            grade_point = 2;
        }
        else{
            grade_point = 0;
        }
        printf("How many units is the course?\t");
        scanf("%d",&course_unit[i]);
        overall_score = grade_point * course_unit[i];
        total_score = total_score + overall_score;
        sum_units = sum_units + course_unit[i];
        cgpa = (double) total_score/sum_units;
    }
    printf("Your CGPA is %.2f",cgpa);
}