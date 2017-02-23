#include <iostream>

using namespace std;

void moveDisc(int, int, int, int);

int main() {
    const int NUM_OF_DISC = 3;
    const int FROM_PEG = 1;
    const int TO_PEG = 3;
    const int TEMP_PEG = 2;

    moveDisc(NUM_OF_DISC, FROM_PEG, TO_PEG, TEMP_PEG);

    cout << "All the pegs are moved." << endl;

    return 0;
}

void moveDisc(int e, int fromPeg, int toPeg, int tempPeg) {
    if (e > 0) {
        moveDisc(e - 1, fromPeg, tempPeg, toPeg); // move the 2 discs to Peg2
        cout << "Move a disc from peg" << fromPeg << " to peg" << toPeg << endl;
        moveDisc(e - 1, tempPeg, toPeg, fromPeg); // move the 2 discs to Peg3
    }
}
