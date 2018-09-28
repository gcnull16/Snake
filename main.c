#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*prompt the user for the length of snake*/
    printf("enter the length of snake: ");
    //get input from user
    int snakelength;

    scanf("%d", &snakelength);

    //start building snake starting with the tail
    printf("***");
    //Build the snake body
    for (int a = 0; a < snakelength; a++)
        {printf("=");
        }
    printf("<:>~");


    //printf("Hello world!\n");
    return 0;
}
