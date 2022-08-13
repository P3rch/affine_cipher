#include <iostream>
#include <ctype.h>

using namespace std;

extern int a, b;

string cipher(string text) {
    int len = text.length();
    string cipher = "";
    
    for(int i = 0; i < len; i++) {
        char character = text[i];
        /* Applying encryption formula (a*x+b) mod m:
           - x is a current character
           - m is 26 (number of characters in the latin alphabet).
           Depending on the upper- or lowercase character, we need
           to substract the first letter a/A (97 and 65 in ASCII
           table) in order to get 0 for a/A, 1 for b/B etc...
           To get a correct character, we need to add a/A again at
           the very end of calculations.
        */

        if(isupper(character))
            cipher += (char)((((a * (character - 'A')) + b ) % 26) + 'A');
        else if(islower(character))
            cipher += (char)((((a * (character - 'a')) + b ) % 26) + 'a');
        else
            cipher += character;
    }

    return cipher;
}