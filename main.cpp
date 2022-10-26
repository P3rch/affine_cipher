#include <iostream>
#include <fstream> 
#include "cipher.h"
#include "decipher.h"

using namespace std;

int a, b;

bool file_exists(const char *fileName) {
    ifstream File(fileName);
    return File.good();
}

int main(){
    
    string text = "", ciphered = "ciphered.txt", deciphered = "deciphered.txt";    
    if (file_exists("keys.txt") != 0) {
    	ifstream key("keys.txt");
    	while (key >> a >> b);
    }
    else {
        cout << "File \"keys.txt\" not found ";
        cout << "- no keys provided." << endl;
	return 1;
    }

    if (file_exists("to_cipher.txt") != 0) {
        ifstream TextIn("to_cipher.txt");
        ofstream CipherOut(ciphered,ofstream::app);
        cout << "Ciphering in progress..." << endl;
        while (getline (TextIn, text)) {
            CipherOut << cipher(text) << endl;
        }
        cout << "\tSaved to \"ciphered.txt\"." << endl;

        TextIn.close();
        CipherOut.close();
    }
    else {
        cout << "File \"to_cipher.txt\" not found ";
        cout << "- nothing to cipher." << endl;
    }

    if (file_exists("to_decipher.txt")) {
        ifstream CipherIn("to_decipher.txt");
        ofstream TextOut(deciphered,ofstream::app);
        cout << "Deciphering in progress..." << endl;
        while (getline (CipherIn, text)) {
            TextOut << decipher(text) << endl;
        }

        cout << "\tSaved to \"deciphered.txt\"." << endl;

        CipherIn.close();
        TextOut.close();
    }
    else {
        cout << "File \"to_decipher.txt\" not found ";
        cout << "- nothing to decipher." << endl;
    }

    return 0;
}
