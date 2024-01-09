#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    float principle,rate,time;
   printf("principle: ,rate: ,time: ");
   scanf("%f %f %f",&principle,&rate,&time);
    float power = pow((1+rate/100),time);
    float ci = principle*power-principle;
    printf("%f",ci);
    return 0;
}