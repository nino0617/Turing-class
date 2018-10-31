#include <stdio.h>
#define MAX_LEN 2567
#define G 10000000000
unsigned int arr[MAX_LEN]={1,0};

void printArr(){
    int isZero=1;
    for(int i=MAX_LEN;i>=0;i--){
        if(arr[i]){
            isZero=0;
            printf("%u",arr[i]);
        }
        else if(!arr[i&&!isZero]){
            printf("0000000000");
        }
    }
    if(isZero)printf("0\n");
    else printf("\n");
}

void multarr(int target){
    unsigned long result=0;
    unsigned int remain=0;
    
    for(int i=0;i<MAX_LEN;i++){
        result=(umsigned long)arr[i]*(unsigned long)m;
        if(remain){
            result+=remain;
            remain=result/G;
            result%=G;
            arr[i]=result;
        }
    }

}