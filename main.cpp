#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>

void startmonitored() {
    system("sudo airmon-ng start wlan0");
    system("clear");
}

void stopmonitored() {
    system("sudo airmon-ng stop wlan0mon");
    system("clear");
}

void scannet() {
    std::cout << std::endl;
    system("sudo arp-scan --localnet");
}

void yes_no() {
    char yesans;
    std::cout << std::endl;
    std::cout << "Press \033[32me\033[0m to exit" << std::endl;
    std::cout << ">\033[32m";
    std::cin >> yesans;
    if (yesans == 'e') {
        std::cout << "\033[0mПонял" << std::endl;
        usleep(500);
        system("clear"); 
        system("./main");
        return;
    }
}

int main() {
    usleep(250000);
    std::cout << "Starting..." << std::endl;
    std::cout << std::endl;
    std::cout << "Requesting Sudo Privileges... ";
    startmonitored();
    std::cout << "[\033[32m+\033[0m]" << std::endl;
    usleep(500000);
    std::cout << "Enabling Monitored Mode on wlan0... ";
    usleep(250000);
    std::cout << "[\033[32m+\033[0m]" << std::endl;
    std::cout << "\033[31mYou wont have access to the Internet unless you use the exit option!\033[0m" << std::endl;
    usleep(750000);
    std::cout << "\033[32mStarted Successfully!\033[0m" << std::endl;
    usleep(500000);
    std::cout << std::endl;
    system("clear");
    std::cout << "Welcome to:" << std::endl;
    std::cout << "\033[32m";
    std::cout << "░▒▓████████▓▒░▒▓███████▓▒░░▒▓██████▓▒░ ░▒▓██████▓▒░░▒▓█▓▒░▒▓████████▓▒░▒▓████████▓▒░▒▓█▓▒░░▒▓█▓▒░\n ░▒▓█▓▒░     ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░         ░▒▓█▓▒░   ░▒▓█▓▒░░▒▓█▓▒░\n ░▒▓█▓▒░     ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░▒▓█▓▒░         ░▒▓█▓▒░   ░▒▓█▓▒░░▒▓█▓▒░\n ░▒▓██████▓▒░ ░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░▒▓██████▓▒░    ░▒▓█▓▒░    ░▒▓██████▓▒░ \n ░▒▓█▓▒░            ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░▒▓█▓▒░         ░▒▓█▓▒░      ░▒▓█▓▒░    \n ░▒▓█▓▒░            ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░         ░▒▓█▓▒░      ░▒▓█▓▒░    \n ░▒▓█▓▒░     ░▒▓███████▓▒░ ░▒▓██████▓▒░ ░▒▓██████▓▒░░▒▓█▓▒░▒▓████████▓▒░  ░▒▓█▓▒░      ░▒▓█▓▒░     " << std::endl;
    std::cout << "\033[0m";
    std::cout << "\033[32m▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\033[0m" << std::endl;
    std::cout << "\033[32m█\033[0m (Network Mapping Tool in c++) \033[32m█\033[0m (c)yawnetx \033[32m█\033[0m www.github.com/thePortal362/fsociety \033[32m█\033[0m" << std::endl;
    std::cout << "̅\033[32m▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\033[0m" << std::endl;
    std::cout << "\033[32mWhat should I do?\033[0m" << std::endl;
    std::cout << "\033[32m1.\033[0m Scan for Networks" << std::endl;
    std::cout << "\033[32m2.\033[0m Scan for Devices on Local Net" << std::endl;
    std::cout << "\033[32m3.\033[0m Exit" << std::endl;
    int choice;
    std::cout << ">";
    std::cin >> choice;
    if (choice == 1) {
        std::cout << "Starting Network scan...\n" << std::endl;
        system("clear");
        std::cout << "Press CTRL + C to stop scan" << std::endl;
        std::cout << std::endl;
        system("sudo wash -i wlan0mon");
        yes_no();
        stopmonitored();
    } else if (choice == 2) {
        system("clear");
        stopmonitored();
        std::cout << "Starting Scan..." << std::endl;
        scannet();
        yes_no();
    } else if (choice == 3) {
        std::cout << "\033[33mDisabling Monitored Mode on wlan0\033[0m";
        std::cout << " [\033[32m+\033[0m]" << std::endl;
        std::cout << "This might need sudo authentication!" << std::endl;
        stopmonitored();
        system("clear");
        return 0;
    }
}
