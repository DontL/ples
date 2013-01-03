#include <stdlib.h>
#include <mcheck.h>

int main()
{
    int i;

    mtrace();
    for(i = 0; i< 10; i++)
    {
        malloc(i+1);
    }

return 0;
}
