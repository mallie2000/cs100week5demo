#include <iostream>
#include <string>
using namespace std;

void greeting(string name){
    string msg = "Hello, " + name;
    return msg;
}

int main() {
    cout <<  greeting()<< endl;
    return 0;
}
