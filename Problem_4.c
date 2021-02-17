//Your task here is to print half pyramid of stars.

#include<stdio.h>


int main()
{
  	int n;

  	scanf("%d", &n);

  	for (int i=1; i<n;i++){
      for(int j=0; j<i; j++){
        printf("* ");
      }
      printf("\n");

    }//Write your code here
  	

  	return 0;
}
