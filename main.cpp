#include "blockchain.h"
#include <iostream>

int main() {
    Blockchain votingSystem;
    votingSystem.addCandidate("Alice");
    votingSystem.addCandidate("Bob");
    
    votingSystem.castVote("Alice");
    votingSystem.castVote("Bob");
    votingSystem.castVote("Alice");
    
    votingSystem.displayResults();
    return 0;
}
