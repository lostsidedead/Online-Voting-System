#include <iostream>
#include "voting_system.h"

VotingSystem::VotingSystem() {
    votesForOption1 = 0;
    votesForOption2 = 0;
    votesForOption3 = 0;
}

void VotingSystem::castVote() {
    int vote;
    std::cout << "\nSelect your vote (1-Option1, 2-Option2, 3-Option3): ";
    std::cin >> vote;

    if (vote == 1) {
        votesForOption1++;
        std::cout << "You voted for Option 1.\n";
    } else if (vote == 2) {
        votesForOption2++;
        std::cout << "You voted for Option 2.\n";
    } else if (vote == 3) {
        votesForOption3++;
        std::cout << "You voted for Option 3.\n";
    } else {
        std::cout << "Invalid option. Vote not recorded.\n";
    }
}

void VotingSystem::viewResults() {
    std::cout << "\nVoting Results:\n";
    std::cout << "Option 1: " << votesForOption1 << " votes\n";
    std::cout << "Option 2: " << votesForOption2 << " votes\n";
    std::cout << "Option 3: " << votesForOption3 << " votes\n";
}
