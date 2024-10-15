#include<stdio.h>

/*int main(){

int a , b;
float ans ;
printf("enter two numbers");
scanf("%d %d" , &a , &b);
 ans = a/(float)b;
printf("addition of %d and %d is %f" , a,b,ans);

return 0;
}
*/

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
