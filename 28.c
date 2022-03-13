// 1.1^2+2.3^2+3.5^2+.............upto n’th term

#include<stdio.h>
int main(){
    int n;
    float i,j,sum=1;
    printf("Enter the N: ");
    scanf("%d",&n);
    printf("1 + ");
    for(i=1,j=1;i<=n,j<=n;i++,j+=2){
        sum+=i*pow(j,2);
        printf("%d.%d^2 + ",(int)i,(int)j);
    }
    printf("\b\b\b = %lf",sum);
    return 0;
}