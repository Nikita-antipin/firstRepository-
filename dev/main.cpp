#include <iostream>
#include "foo.h"
#include <array>
const int N = 10;
int binary_search(int* a, int size) {
    int minimul = a[0];
    for (int i = 0; i < size; i++) {
        if (minimul > a[i]) {
            minimul = a[i];
        }
    }
    return minimul;
}


int main()
{
    
    
    int* a = new int [10];
    int jk = 1;
    for (int i = 0; i < N; i++) {
        a[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl << binary_search(a, 10);
    
    return 0;
    
}