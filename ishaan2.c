#include<stdio.h>
/*Name:Ishaan Rajani
  roll no:08
  UIN:241P008
  Exp 1
WAP to get students PCM marks from the user and find the average and eligibility*/
int main()
{

    int phy , chem, math;
    float avg;
    printf("enter physics marks\n");
    scanf("%d" , &phy);
    printf("enter chemistry marks\n");
    scanf("%d" , &chem);
    printf("enter maths marks\n");
    scanf("%d" , &math);
    avg = (phy + chem + math)/3.0;
    printf("your average of pcm is:%f\n  \n", avg);

    (avg>=50)?printf("you are eligible for your further studies"):printf("you failed!! STUDY HARDD");

    return 0;
}

/*output:
        enter physics marks
75
enter chemistry marks
80
enter maths marks
85
your average of pcm is:80.000000
  
you are eligible for your further studies*/
