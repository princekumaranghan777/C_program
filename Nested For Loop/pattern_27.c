//  * * * * * * * * * * 
//  * *             * * 
//  *   *         *   * 
//  *     *     *     * 
//  *       * *       * 
//  *       * *       * 
//  *     *     *     * 
//  *   *         *   * 
//  * *             * * 
//  * * * * * * * * * * 

#include <stdio.h>  
int main()  
{  
    for(int i=1;i<=10;i++)  
    {  
        for(int j=1;j<=10;j++)  
        {  
            if(i==1 || i==10 || j==1 || j==10-i+1 ||  i==j || j==10)  
            {  
                printf("* ");  
            }  
            else  
            {  
                printf("  ");  
            }  
        }        
        printf("\n");  
    }  
      
    return 0;  
}