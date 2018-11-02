#include <iostream>

int main(){
   char sex[4];
   for(int i=0;i<4;i++){
       scanf("%c",&sex[i]);
   }
   if(sex[0]=='g'){
       printf("she is a girl");
   }
   else
       printf("he is a boy");
       return 0;
}