#include <stdio.h>
#include <assert.h>


int max(int [], int);
{ int arr[i], n:
for(int i=0; i<n;i++) 
{ 
  for(int j=0; j<i;j++)
  {
  if ( arr[j]<arr[j+1])
    return arr[j+1];
    else
      return arr[j];
  } }}
  
int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
