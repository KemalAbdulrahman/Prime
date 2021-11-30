//
//  main.cpp
//  Prime
//
//  Created by Kemal Abdulrahman on 7/17/18.
//  Copyright © 2018 Kemal Abdulrahman. All rights reserved.
//

#include <iostream>
#include <stdio.h>

#include<math.h>


int main(void)

{
   //inital x
   int x;
   // print out x
   printf("enter x ");
   //read the number
   scanf("%d",&x);
   //inital list of the  array
   int list[(x+1)];
   //inital first array
   list[0]=0;

   for(int i=1; i<=x;i++){
      ///calculate the reminder when dividing the number by a number i that is greater than 0 and than x
      list[i]=x%i;

   }
   //print out the array
   for(int i=0; i<=x;i++){
      printf("list[%d] = %d\n",i,list[i]);

   }

   puts("------------------------------------");
   //check if the number is dividiable to another number that is not 1 and the number itself
   for(int i=2; i<=(x-1);i++){
      //print out array
      printf("list[%d]= %d\n",i,list[i]);
      //check if the reminder =0
      if(list[i]==0){
         //print out prime number
         puts("x is not a prime number");
         break;
      }else{
         // check if the reminder is the last element of the array
         if(i==(x-1))
            puts("x is a prime number");
      }
   }

   return 0;
}


