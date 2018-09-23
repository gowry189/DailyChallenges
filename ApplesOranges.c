#include <stdio.h>
int main(){
    int s,t,i;
    scanf("%d %d",&s,&t);
    int a,b;
    scanf("%d %d",&a,&b);
    int m,n,c1=0,c2=0;
    scanf("%d %d",&m,&n);
    int p[m],q[n];
    for(i=0;i<m;i++){
          scanf("%d",&p[i]);
        }
    for(i=0;i<n;i++){
          scanf("%d",&q[i]);
        }
    for(i=0;i<m;i++){
          if((a+p[i]) <= t && (a+p[i]) >= s ){
                c1++;
              }
        }
    for(i=0;i<n;i++){
          if((b+q[i]) <= t && (b+q[i]) >= s ){
                c2++;
              }
        }
    printf("%d\n",c1);
    printf("%d\n",c2);
    return 0;
}
