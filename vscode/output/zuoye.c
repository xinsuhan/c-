#include<stdio.h>
int main(void){
   int a;
   int i,j,k;
   int cnt=0;
   printf("请输入一个小于6的正整数:");
    scanf("%d",&a);
    for(i=a;i<=a+3;i++){
        for(j=a;j<=a+3;j++){
            for(k=a;k<=a+3;k++){
        if(i!=j&&j!=k&&k!=i){
        printf("%d%d%d",i,j,k);
        cnt++;
         if(cnt==6){
        printf("\n");
        cnt=0;
        }
        else{
        printf(" ");
    } 
            }
        }
     }
    }
    return 0;
}


