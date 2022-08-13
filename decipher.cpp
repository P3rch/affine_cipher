#include <iostream>
#include <ctype.h>

using namespace std;

string decipher(string cipher) {
    string text = "";
    int i = 0, a_inverse = 0;
    int len = cipher.length();
    extern int a, b;

    // Firstly we need to find a^(-1)
    while((a*i) % 26 != 1) {
        i++;
        a_inverse = i;
    }

    /* Applying decryption formula (a^(-1)*x-b) mod m,
       analogously to cipher.cpp. */

    for(int i = 0; i < len; i++) {
        char character = cipher[i];

        if(isupper(character))
            text += (char)(((a_inverse * (character - 'A' - b + 26) % 26)) + 'A');
        else if(islower(character))
            text += (char)(((a_inverse * (character - 'a' - b + 26) % 26)) + 'a');
        else
            text += character;
    }

    return text;
}