#include <stdio.h>
#include <stdlib.h>

void SieveofEratosthenes(int *prime,int n){
    for(int p=2;p*p<=n;p++){
        if(prime[p]==1){
            for(int i=p*2;i<=n;i+=p)
            prime[i]=0;
        }
    }
}

int main(){
    int n=30;
    int *prime=(int *)malloc(sizeof(int)*(n+1));
    prime[0]=prime[1]=0;
    for(int i=2;i<=n;i++)
        prime[i]=1;
        SieveofEratosthenes(prime,n);
        for(int p=2;p<=n;p++){
            if(prime[p]){
                printf("%d",p);
                printf("\n");
            }
        }
        return 0;
    
}