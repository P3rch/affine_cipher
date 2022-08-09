#include <iostream>
#include <fstream>

using namespace std;

int main(){
    cout << "Hello" << endl;

    string text;
    ifstream Input("text.txt");
    while (getline (Input, text)) {
        cout << text;
    }

    ofstream Output("cipher.txt");
    Output << "Wrote to a file";
    Output.close();

}