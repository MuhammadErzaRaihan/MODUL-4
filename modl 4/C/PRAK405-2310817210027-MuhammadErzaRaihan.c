#include <stdio.h> 
  
 int main () { 
     int x, n; 
     int total = 0; 
   
     scanf("%d %d", &x, &n); 
  
     for (int i = 1; i <= x; i++) { 
  
         int baris = 0; 
  
         for (int j = i; j > 0; j--) { 
  
             baris += j * n; 
             if (j == i) { 
                 printf("(%d * %d)", j, n); 
             }  
             else { 
                 printf(" + (%d * %d)", j, n); 
             } 
  
         } 
  
         printf(" = %d\n", baris); 
         total += baris; 
     } 
  
     printf("%d\n", total); 
     return 0;
 }