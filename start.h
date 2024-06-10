#pragma once
#include <string>
#include <iostream>

using namespace std;

class Player {
public:
    int military;
    int economy;
    int diplomacy;
    int public_opinion;
    int year = 0;
    void end();;
    Player();
    void showStatus();
    string createGauge(int value, int max_length = 20);
};
