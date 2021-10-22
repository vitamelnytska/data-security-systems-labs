#include <iostream>
#include <string>
#include "Filesystem.h"
#include "Shell.h"

using namespace std;

int main() {
    Filesystem fs;
    string whoIam = "user";
    while (true) {
        cout << prompt(fs.getWorkingDir(), whoIam);
        string input;
        getline(cin, input);
        if (input == "su admin") { whoIam = "admin"; };
        if (input == "su user") { whoIam = "user"; };
        if (input.empty()) continue;
        if (!execute(fs, input, whoIam)) break;
    }
    return 0;
}
