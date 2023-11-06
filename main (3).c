#include <stdio.h>
#include <stdlib.h>

int main()
{ int count=0;
   int myarray[1000];

    for(int i=0; i<1000;i++)
    {count++;
        scanf("%d",&myarray[i]);

        if (myarray[i]==0)
       {


        int j=0;

    for(int j=count-=2;j>=0;j--) {


        printf("%d\n",myarray[j]);


    }break;}}
    return 0;
}
