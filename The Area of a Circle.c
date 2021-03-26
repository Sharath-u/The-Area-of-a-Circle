//To find the area of a circle
#include<stdio.h>
int main(){
    int radius; 
    float pi = 3.14; //Making the value of pi as 3.14
    

    printf("Enter th Value of the Radius of the circle: ",radius);
    scanf("%d",&radius);
    float area = radius*radius*pi;

    printf("The area of the circle = %f",area);

    return 0;


}
