#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,ans,a[5][5],p,q;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==1){
            p = i;
            q = j;
            }
        }
    }
    ans = abs(p-3)+abs(q-3);
    printf("%d",ans);
    return 0;
}
