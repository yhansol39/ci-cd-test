

#include <stdio.h>
#include <assert.h>

//테스트 할 함수
int add(int a, int b)
{
    return a+b;
}

int main() {
    printf("=== Program Started ===\n");

    //단위 테스트
    assert(add(2,3) == 5);
    assert(add(-1, 1) == 0);
    assert(add(10, 5) == 15);
    assert(add(1,-10) == -9);

    printf("All tests passed!\n");

    return 0;
}