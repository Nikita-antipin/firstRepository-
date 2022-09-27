[1mdiff --git a/dev/main.cpp b/dev/main.cpp[m
[1mindex 3e5412a..4c890fb 100644[m
[1m--- a/dev/main.cpp[m
[1m+++ b/dev/main.cpp[m
[36m@@ -1,12 +1,32 @@[m
 #include <iostream>[m
 #include "foo.h"[m
[31m-[m
[32m+[m[32m#include <array>[m
[32m+[m[32mconst int N = 10;[m
[32m+[m[32mint binary_search(int* a, int size) {[m
[32m+[m[32m    int minimul = a[0];[m
[32m+[m[32m    for (int i = 0; i < size; i++) {[m
[32m+[m[32m        if (minimul > a[i]) {[m
[32m+[m[32m            minimul = a[i];[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m[32m    return minimul;[m
[32m+[m[32m}[m
 [m
 [m
 int main()[m
 {[m
[31m-    system("chcp 1251");[m
[31m-    foo(12,0,202);[m
[32m+[m[41m    [m
[32m+[m[41m    [m
[32m+[m[32m    int* a = new int [10];[m
[32m+[m[32m    int jk = 1;[m
[32m+[m[32m    for (int i = 0; i < N; i++) {[m
[32m+[m[32m        a[i] = i;[m
[32m+[m[32m    }[m
[32m+[m[32m    for (int i = 0; i < 10; i++) {[m
[32m+[m[32m        std::cout << a[i] << " ";[m
[32m+[m[32m    }[m
[32m+[m[32m    std::cout << std::endl << binary_search(a, 10);[m
[32m+[m[41m    [m
     return 0;[m
     [m
 }[m
\ No newline at end of file[m
