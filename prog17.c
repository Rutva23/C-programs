#include<stdio.h>
   void main()
   {
    float P,R,N,I;
    printf("enter principal=");
    scanf("%f",&P);
    printf("enter rate=");
    scanf("%f",&R);
    printf("enter time=");
    scanf("%f",&N);
    I=(P*R*N)/100;
    printf("%f",I);

   }
