#include<stdio.h>
int table(int n)
{  int i;
  for(i=1;i<=10;i++)
  {
    printf("%d X %d = %d\n",n,i,n*i);

  }
  printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
    return 0;
}
int main()
{  int n;
   printf("Enter n= ");
   scanf("%d",&n);
   table(n);
    return 0;
}
