#include<stdio.h>
#include<math.h>

int main(){
    int number=32345,count=0,i,sum=0;
    int rem=0;
    int num=number;
    int digits[10];
    while(num!=0){
        rem=num%10;
        num=num/10;
        count++;
        digits[count]=rem;
      }
      i=count;
     while(i){
        sum += pow(digits[i],count);
        i--;
     }
     if(sum== number)
     printf("number= %d is an amstrong number and sum =%d\n",number,sum);
     else
     printf("number=%d is not an amstrong number and sum =%d\n",number , sum);
}
