
#include <iostream>
#include <string>
using namespace std;

string greeting(string name){
    string msg = "Hello " + name;
    return msg;
}
int main() {
    string name = "John";
    cout << greeting(name) << endl;
    return 0;
}