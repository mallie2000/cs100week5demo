#include <iostream>
using namespace std;

string greeting(string name){
    string msg = "Hello " + name;
    return msg;
}
int main() {
    cout << greeting << endl;
    return 0;
}
