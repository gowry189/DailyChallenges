#include<stdio.h>
int main(){
    char s[20];
    scanf("%s",s);
    int n = strlen(s);
    printf("%d",26*(n+1)-n);
}
