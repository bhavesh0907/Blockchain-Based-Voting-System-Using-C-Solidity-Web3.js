#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H
#include <vector>
#include <string>

class Blockchain {
public:
    void addCandidate(std::string name);
    void castVote(std::string name);
    void displayResults();
private:
    std::vector<std::pair<std::string, int>> candidates;
};
#endif
