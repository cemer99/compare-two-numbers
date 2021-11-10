#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1;
  int num2;

    printf(" Enter a two numbers for compare: ");
    scanf("%d%d",&num1,&num2);

  if (num1 == num2){

    printf("%d equal %d\n",num1,num2);
  }

  if (num1 != num2){
    printf("%d not equal %d\n",num1,num2);
  }


  if (num1 > num2){
    printf("%d bigger than %d\n",num1,num2);

  }

  if (num1 < num2){
    printf("%d smaller than %d\n",num1,num2);
  }

  if (num1 <= num2){
    printf("%d small or equal %d\n",num1,num2);
  }


   if (num1 >= num2){
    printf("%d bigger or equal %d",num1,num2);
   }



    return 0;
}
