#include <stdio.h>
int main()
{
  int n, i=0,s=0;
  scanf("%d", &n);
  n/=2;
  int arr[n];
  for(i=n; --i>=0;)scanf("%d", &arr[i]);
  for(int j,i=0; i<n;) scanf("%d",&j), s+=arr[i++]!=j;
  printf("%s", s==0?"YES":"NO");                //здесь!
}
