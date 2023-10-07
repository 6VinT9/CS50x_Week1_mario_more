#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int n;
    do
    {
        n = get_int("What is the Size?: ");
      //  printf("The size should be > 0 than and < than 8\n");
    }

    while (n < 1 || n > 8);

    // Print grid of bricks
    for(int i = 0; i < n; i++) // loop for height (i)
    {
        for(int sl = 0; sl < n-1-i; sl++) // loop for spaces (sl) on left pyramid
        {
            printf(" ");
        }

        for(int hl = 0; hl < i+1; hl++) // loop for hashes (hl) on left piramid
        {
            printf("#");
        }
        for(int gb = 0; gb < 2; gb++) // loop for the gap (gb) beetwin the tryangles
        {
            printf(" ");
        }
        for(int hr = 0; hr < i+1; hr ++) // loop for hashes (hr) on right pyramid
        {
            printf("#");
        }
        printf("\n");
    }
}

