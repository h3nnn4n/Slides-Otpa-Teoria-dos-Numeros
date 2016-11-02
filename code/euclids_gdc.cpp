#include <iostream>
#include <cstdlib>

int gcd(int a, int b) {
    if ( b == 0 )
        return a;
    else
        return gcd(b, a % b);
}

int main(int argc, char *argv[]) {
    if ( argc != 3 ) {
        std::cerr << "gibe 2 numbers plox" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "gdc(" << atoi(argv[1]) << ", " << atoi(argv[2]) << ") = " << gcd(atoi(argv[1]), atoi(argv[2])) << std::endl;
    return EXIT_SUCCESS;
}
