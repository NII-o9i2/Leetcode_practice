
#include <stdio>

int main(){
    int num;
    char course[10];
    char * course_data[100]; 
    int program[100];
    char * program_s[100];
    int year;
    char id[20];

    program_s[0]= "ENG1001";
    program_s[1]= "ENG1002";
    program_s[2]= "ENG1003";
    program[0]= 1;
    program[1]= 1;
    program[2]= 1;

    int program_sum;

    printf("How many courses do you want to enroll in?");
    scanf("%d",&num);
    bool flag = false;
    for(int i=0;i<num;i++){
        printf("Course %d: ",i);
        gets(course);
        course_data[i] = course[0]; 
        if ((course=="ENG1002") || (course=="ENG1003")){
            flag = true;
        }

    }

    if (flag){
        printf("Awesome! You are enrolled in programming.");
    }else{
        printf("Awwww! no programming for you.");
    }  
    printf("The courses you enrolledin are:");
    bool program_flag;
    for(int i =0;i<num;i++){
        printf("Course %d: ",i);
        program_flag = false;
        for (j=0;j<program_sum;j++){
            if (*course_data[i]==program_s[j]){
                program_flag = true;
            }
        }
        if (program_flag){
            printf("Programming");
        }else printf("Not Programming");

    }
      return 0;
}