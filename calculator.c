#include<stdio.h>

int main()
{
printf("1. Add\n");
printf("2. Substrates\n");
printf("3. Multiply\n");
printf("4. Division\n");
printf("Choose Option\n");
float a,b,c,d,e,f,g,h,i;
scanf("%f",&a);
if (a==1){
printf("Enter two Numbers\n");
scanf("%f\n%f",&b,&c);
printf("Sum of Given two Numbers is %f",b+c);
}
else if (a==2){
printf("Enter two Numbers\n");
scanf("%f\n%f",&d,&e);
printf("Substraction of the two Numbers is %f",d-e);    
}
else if (a==3){
printf("Enter two Numbers\n");
scanf("%f\n%f",&f,&g);
printf("Multiplication of Given two Numbers is %f",f*g);
}
else if (a==4){
printf("Enter two Numbers\n");
scanf("%f\n%f",&h,&i);
printf("Division of first Number by Second Number is %f",h/i);
    }
    return 0;
}