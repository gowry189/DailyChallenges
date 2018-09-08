#include<stdio.h>
int main(){
    int n;
    double cnt1=0,cnt2=0,cnt3=0;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<0){
            cnt1++;
        }
        else if(a[i]>0){
            cnt2++;
        }
        else
            cnt3++;
    }
    printf("%lf\n",cnt2/n);
    printf("%lf\n",cnt1/n);
    printf("%lf\n",cnt3/n);
    return 0;
}
