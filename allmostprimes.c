#include <stdio.h>
int main(){
    int num=2,k=0,n=0,r,i=0,p,index=0,flag=0;
    int primes[25];
    int res[8],rem=0;
    r=num;
    while(n<=8){
     // printf("number=%d\n",r);
       i=0;
        while(i<index){
            p=primes[i];
            rem=r%p;
            //printf("k=%d,r=%d,i=%d,rem=%d\n",k,r,i,rem);
            if(rem==0){
                r=r/p;
                i=0;
                k++;
                res[k]=p;
                flag=1;
               
            }else if(k==4 && r==1){
                n++;
              printf("\nFor number=%d prime factores are ",num);
                while(k){
               printf("%d,",res[k]);
                k--;
                }
             
                break;
            } else{
                
                i++;
                continue;
            }
        }
        if(flag==0){
            //printf("prime numbers=%d\n",num);
            primes[index++]=num;
        }
       r=++num;
       flag=0;
       k=0;
   }
    return 0;
}


