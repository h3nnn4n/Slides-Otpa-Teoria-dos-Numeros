#include <iostream>
#include <cmath>
#include <cstring>

bool primality_test(int n) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for ( int p = 2; p*p <= n; p++ ) {
        if ( prime[p] == true ) {
            for ( int i = p*2; i <= n; i += p )
                prime[i] = false;
        }
    }

    return prime[n];
}


int main(int argc, char *argv[]) {
    for (int i = 2; i < 25; ++i) {
        std::cout << i << " : " << (primality_test(i) ? "True" : "False") << std::endl;
    }

    return 0;
}
