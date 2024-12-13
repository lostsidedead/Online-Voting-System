#ifndef VOTING_SYSTEM_H
#define VOTING_SYSTEM_H

#include <string>

class VotingSystem {
private:
    int votesForOption1;
    int votesForOption2;
    int votesForOption3;
    
public:
    VotingSystem();
    void castVote();
    void viewResults();
};

#endif
