#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define n 10000
int notprime[n+1]={1,1,0};
int prime[1+(n>>1)]={0};

void SieveofEratosthenes(){
      int index=0;
      for(int i=2;i<sqrt(n+1)+1;i++){
        if(notprime[i]==1){
        for(int j=i<<1;j<n+1;j=j+i)
        notprime[j]==0;
        }
    }
    for(int i=0;i<n+1;i++){
        if(!notprime[i]){
                prime[index]=i;
                index++;
        }
    }

}
