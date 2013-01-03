#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ELEMENTS 25000

void swap(int *first, int *second)
{
    int t;

    t = *first;
    *first = *second;
   *second = t; 
}

int main()
{
    int i, j, vector[ELEMENTS];

    srand((unsigned int)time(NULL));

    for(i = 0; i < ELEMENTS; vector[i++] = (int)rand()%100)
        for(i = 0; i < ELEMENTS; i++)
            for(j = 0; j < ELEMENTS-1; j++)
                if(vector[j] > vector [j+1]){
                    swap(vector+j+1,vector+j);
                }
    printf("Done sorting %d elements \n", ELEMENTS);

}

