#include<stdio.h>
int main(){
    int num, sum=0;
    scanf("%d", &num);
    for(int i=1; i<=29; i=i+2){
        sum = sum+i;
    }
    printf("%d",sum);
    return 0;
}
