#include<stdio.h>
int main(){
   /* local variables declaration */
   int num,reverse_number;

   /*
   * Read the number from user
   */
   printf("\nEnter any number:");
   scanf("%d",&num);

   //Calling user defined function to perform reverse
   reverse_number=reverse_function(num);
   printf("\nThe reverse of the no is :%d",reverse_number);
   return 0;
}
int sum=0,rem;
int reverse_function(int num){
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      reverse_function(num/10);
   }
   else{

      return sum;
   }
   return sum;
}