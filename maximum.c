 #include<stdio.h>
void main()
{
  int n,nu,i;
  int big;
  
  printf("Enter the values of n: ");
  scanf("%d",&n);
 
  printf("Number %d",1);
  scanf("%d",&big);

  for(i=2;i<=n;i++)
  {
    printf("Number %d: ",i);
    scanf("%d",&n);
  }
  
  printf("Largest number is: %d",big);
}
