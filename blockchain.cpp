#include "blockchain.h"
#include <iostream>

void Blockchain::addCandidate(std::string name) {
    candidates.push_back({name, 0});
}

void Blockchain::castVote(std::string name) {
    for (auto &candidate : candidates) {
        if (candidate.first == name) {
            candidate.second++;
            return;
        }
    }
    std::cout << "Candidate not found!" << std::endl;
}

void Blockchain::displayResults() {
    std::cout << "Election Results:" << std::endl;
    for (const auto &candidate : candidates) {
        std::cout << candidate.first << ": " << candidate.second << " votes" << std::endl;
    }
}
