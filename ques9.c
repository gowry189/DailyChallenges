#include<stdio.h>
#include<string.h>
int main(){
  char c[10000];
  gets(c);
  int a = 0;
  int n = strlen(c) -1;
  int diff = 0;
  while(a<n){
    if(c[a] != c[n]){
      diff++;
    }
    a++;
    n--;
    }
    if(diff>1){
      printf("NO");
    }
    else {
      if(diff == 0 && strlen(c)%2 == 0){
           printf("NO");
        }
        else{
            printf("YES");
        }
  }
  return 0;
}
