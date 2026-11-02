#include <iostream>
#include <cstring>
using namespace std;

int countWords(const char str[]) {
    int words = 1;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') words++;
    }
    return words;
}

int main() {
    char text[] = "Functions and OOPs Concepts";
    cout << "Total Words: " << countWords(text) << endl;
    return 0;
}
// Output: Total Words: 4
