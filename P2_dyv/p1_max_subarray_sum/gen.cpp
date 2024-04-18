#include <iostream>
using namespace std;

// Maximum size of the array
const int MAXN = 1e5;

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
    int seed = atoi(argv[1]);
    srand(seed);
    int n = rnd(1,MAXN+1);
    // OUTPUT
    cout << n << endl;
    for(int i=0; i<n; ++i){
        // Generate random positive and negative numbers
        cout << (rand() - RAND_MAX/2) << " ";
    }
    cout << endl;
    return 0;
}