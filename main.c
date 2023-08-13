#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{ float a,b,c;
float x,x1,x2,delta;
    printf("Enter a?:");
    scanf("%f",&a);
    printf("Enter b?:");
    scanf("%f",&b);
    printf("Enter c?:");
    scanf("%f",&c);
    delta= pow(b,2)-(4*a*c);
    printf("delta value is:%.2f\n",delta);
    if(delta<0) printf("error");

    else if(delta>0){
    x=sqrt(delta);
    x1=(-b-x)/(2*a);
    x2=(-b+x)/(2*a);
              printf("x1=%f",x1);
               printf("x2=%f",x2);
    }
    else{
        x1=(-b-x)/(2*a);
        printf("x1=x2=%f\n",x1);
}
    return 0;
}
