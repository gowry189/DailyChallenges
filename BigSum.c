#include<stdio.h>
int main(){
    long long int n,sum=0;
    scanf("%lld",&n);
    long long a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        sum = sum+a[i];
    }
    printf("%lld",sum);
    return 0;
}
