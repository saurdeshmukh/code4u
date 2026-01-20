#include<iostream>

namespace Space1 {
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
}

namespace Space2 {
    void swap(int * a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int x = 10, y = 20;
    std::cout << "Before swapping in Space1: x = " << x << ", y = " << y << std::endl;
    Space1::swap(x, y);
    std::cout << "After swapping in Space1: x = " << x << ", y = " << y << std::endl;

    using namespace Space2;
    std::cout << "Before swapping in Space2: x = " << x << ", y = " << y << std::endl;
    swap(&x, &y);
    std::cout << "After swapping in Space2: x = " << x << ", y = " << y << std::endl;

    int m = 30, n = 40;
    std::cout << "Before swapping in Space2: m = " << m << ", n = " << n << std::endl;
    Space2::swap(&m, &n);
    std::cout << "After swapping in Space2: m = " << m << ", n = " << n << std::endl;

    using namespace Space1;
    std::cout << "Before swapping in Space1: m = " << m << ", n = " << n << std::endl;
    swap(m, n);
    std::cout << "After swapping in Space1: m = " << m << ", n = " << n << std::endl;

    return 0;
}