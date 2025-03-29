#include "manager.h"
#include "../timeline_static_library/namespace_utility.h"
#include <iostream>
#include <fstream>
#include <string>

void mainMenu() {
    std::ifstream file("./assets/main_menu.txt");
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    }
    else {
        std::cerr << "Unable to open file" << std::endl;
    }

    handleMenuSelection();
}

void handleMenuSelection() {
    int choice;
    std::cout << "\nSelect an option: \n";
    std::cout << "1. Continue\n";
    std::cout << "2. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
    case 1:
        std::cout << "Continuing...\n";
        break;
    case 2:
        std::cout << "Exiting program...\n";
        utility::exit = true;
        break;
    default:
        std::cout << "Invalid choice, please try again.\n";
        handleMenuSelection();
        break;
    }
}