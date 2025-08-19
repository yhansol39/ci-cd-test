

#include <stdio.h>
#include <string.h>
#include <assert.h>

int add(int a, int b)
{
    return a+b;
}

int main()
{
    assert(add(2,3) == 5);
    assert(add(-1,1) == 0);
    assert(strcmp("Hello", "Hello") == 0);

    printf("All tests passed!\n");
    return 0;
}