#include "problem15.h"

long problem15::choose(long n, long k) {
    if (k == 0)
        return 1;
    return (n * choose(n - 1, k - 1)) / k;
}

long problem15::calculateNumRoutes(int gridSize) {
    return choose(gridSize * 2, gridSize);
}

long problem15::getAnswer() {
    //The grid is 20x20
    //This means that there are always going to be 40 "moves" to get to the end (bottom-right corner)
    //The answer to this is out of 40, choose 20 changes in X (and 20 changes in Y)
    //The formula is 40! / (20!)^2
    return calculateNumRoutes(20);
}