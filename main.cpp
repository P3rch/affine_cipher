#include <iostream>
#include <fstream>
#include "cipher.h"

using namespace std;

int main(){
    string text;
    ifstream Input("to_cipher.txt");
    ofstream Output("ciphered.txt");

    while (getline (Input, text)) {
        Output << cipher(text);
    }

    Input.close();
    Output.close();

    // TODO: Error handling

    return 0;
}