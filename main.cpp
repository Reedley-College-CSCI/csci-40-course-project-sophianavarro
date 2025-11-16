// CSCI-40 Final Project
// Author: [Sophia Navarro]

/* 
 * Description:
 *
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Task {
    string name;
    int points;
    int priority;
};

struct Reward {
    string name;
    int pointsNeeded;
};

string taskPriority(int priority) {
    if (priority == 1) return "High";           // task priority that displays a string 
    if (priority == 2) return "Medium";
    return "Low";
}

int main() {
    return 0;
}
