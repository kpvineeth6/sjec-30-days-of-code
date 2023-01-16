#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int minimum,maximum;
    int i,j,k,count=0,array[10],array2[10];

    printf("Enter minimum and maximum value/\n");
    scanf("%d%d",&minimum,&maximum);  

    for(i=minimum;i<maximum;i++){
        count=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                 count++;
            }
              
    }
     if(count==2){
        array[k]=i;
        k++;
               
               }
    }

    for(i=0;i<k;i++){
        count=0;
        for(j=array[i];j<array[i+1];j++){
            if((array[i+1]-array[i])!=1){
               count=array[i+1]-array[i]-1;
               break;
            }
           
        }
            array2[i]=count;
    }

    for(i=0;i<k;i++)
    {
        printf("%d-%d:%d",array[i],array[i+1],array2[i]);
    }
   return 0;
    }