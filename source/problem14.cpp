#include "problem14.h"

long problem14::getNextNumInSequence(long curNum) {
    if ((curNum & 1) == 1)
        return (3*curNum) + 1;  //odd
    else
        return curNum / 2;      //even
}

int problem14::getStartingNumberUnder(int max) {
    long longestChain = 1;
    long longestChainStartingNumber = 2;
    long currentChain;
    for (int i = 2; i < max; i++) {
        currentChain = 1;
        long curNum = i;
        while (curNum > 1) {
            curNum = getNextNumInSequence(curNum);
            currentChain++;
        }
        if (curNum == 1) {
            if (currentChain >= longestChain) {
                longestChain = currentChain;
                longestChainStartingNumber = i;
            }

        }
    }
    return longestChainStartingNumber;
}

long problem14::getAnswer() {
    return getStartingNumberUnder(1000000);
}