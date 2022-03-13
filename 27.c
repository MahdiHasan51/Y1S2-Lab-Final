// 1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3 + ... till N terms (use pow() function)

#include<stdio.h>
int main(){
    int n;
    float i,sum=0;
    printf("Enter the N: ");
    scanf("%d",&n);
    printf("1 + ");
    for(i=3;i<=n;i+=2){
        sum=sum+(pow(i,2)/pow(i,3));
        printf("%d^2/%d^3 + ",(int)i,(int)i);
    }
    printf("\b\b\b = %lf",sum);
    return 0;
}