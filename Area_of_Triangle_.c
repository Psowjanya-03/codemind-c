#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float s,tri;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    tri=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",tri);
}