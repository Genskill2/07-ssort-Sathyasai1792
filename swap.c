#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void swap_max(int [], int, int );
void ssort(int [], int);


  
  
  void swap_max(int a[], int n, int k)
  {
    
    int i=0;
    int z=a[k], c=0;
    for(i=k;i<=n-1;i++)
    {
        if(a[i]>z)
         {
       
           c=i;
           z=a[i];
         }
      
    }
    
    
 if(z!=a[k])
 {
  a[c] = a[k];
  
  a[k]=z;
  }
  
  
  
  }
  
  
  void ssort(int a[], int n){
    
    int i;
    
    for(i=0;i<n;i++)
    {
      swap_max(a,n,i);
      
    }
    
    
  }
