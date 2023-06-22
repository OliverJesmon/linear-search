

#include <stdio.h>

int main() {

    // Write C code here

    int n=6;

    int arr[]={10,20,30,40,50,60};

     int key=100,position,i=0,flag=0;

     /*key is searching element*/

    while(i <= n-1) {

        if(key==arr[i])/*compare src element to array elements each*/

        {

            //if found It gives the position value

            position=i;

            flag=1;

        }

        i++;//orelse continue iteration 

    }

    if(flag!=0)

    {

        printf("The %d is found at %d",key,position+1);

    }

else

  printf("Element %d is not found ",key);

    return 0;

}
