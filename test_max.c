#include <stdio.h>
#include <assert.h>


int max(int arr[], int n);
{ 
  int i,t;
 t=x[0];
 for(i=0; i<n;i++) 
{ 
   if (x[i]>t)
      t=x[i];
      return t;
      } }
  
  
int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
