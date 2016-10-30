#include <iostream>
#include <cmath>

bool primality_test(int p) {
    if ( p % 2 == 0 && p > 2 )
        return false;

    for (int i = 3; i <= sqrt(p) + 1; i += 2)
        if ( p % i == 0 )
            return false;

    return true;
}

int main(int argc, char *argv[]) {
    for (int i = 2; i < 25; ++i) {
        std::cout << i << " : " << (primality_test(i) ? "True" : "False") << std::endl;
    }

    return 0;
}
