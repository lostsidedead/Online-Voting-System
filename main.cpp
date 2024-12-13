#include <iostream>
#include "voting_system.h"

int main() {
    VotingSystem vs;
    int choice;
    do {
        std::cout << "\nOnline Voting System\n";
        std::cout << "1. Cast Vote\n";
        std::cout << "2. View Results\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            vs.castVote();
            break;
        case 2:
            vs.viewResults();
            break;
        case 3:
            std::cout << "Exiting the system...\n";
            break;
        default:
            std::cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
