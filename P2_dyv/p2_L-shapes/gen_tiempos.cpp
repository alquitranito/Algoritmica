#include <iostream>
using namespace std;

// Max k of n = 2^k
const int MAXK = 15;

/**
 * @brief Returns a random int x € [a,b)
*/
int rnd(int a, int b){
    return a + rand() % (b - a + 1);
}

/**
 * @brief Generator for problem L-shape
 * @param argv[0] -> the seed for the random numbers
*/
int main(int argc, char * argv[]){

    int k = (atoi(argv[1]) % MAXK);
    // n must be a power of 2 (size of the square)
    int n = 1 << k;
    // (r,c) -> position of the square tile (NOT zero base)
    int r = rnd(1,n);
    int c = rnd(1,n);
    // OUTPUT
    cout << n << endl;
    cout << r << " " << c << endl;
    return 0;
}