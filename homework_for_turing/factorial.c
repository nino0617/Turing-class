#include <stdio.h>
#include <stdlib.h>
#include <string.h>

short digit[10000];
int length = 0;

void facotorial10000(int number){
    memset(digit,0,sizeof(short)*10000);
    digit[0]=1;
    int sum=0;
    int carry=0;
    for(int i=2;i<=number;i++){
        ;
        for(int j=0;j<10000;j++){
            sum=i*digit[j]+carry;
            digit[j]=sum%10;
            carry=sum/10;
        }
    }
    length=9999;
    while(digit[length]==0){
        length--;
    }

    
}

int main(){
    int target;
    scanf("%d",&target);
    facotorial10000(target);
    for(int index=length;index>=0;index--){
        printf("%d",digit[index]);
    }
    return 0;
}