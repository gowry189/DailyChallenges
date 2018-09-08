#include<stdio.h>

int main(){
    int n;
    scanf("%d\n",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }

    int abs(int a){
    if(a<0){
        return -a;
    }
    else
        return a;
    }

    int sum1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){
            sum1= sum1+a[i][j];
            }
        }
    }
    int sum2 =0;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=0; j--){
            if((i+j) == (n-1)){
                sum2 = sum2+a[i][j];
            }
        }
    }
    int t = sum1-sum2;
    int diff = abs(t);
    printf("%d",diff);
    return 0;
}
