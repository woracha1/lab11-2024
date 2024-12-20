// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <ctime>
using namespace std;

int main(){
    string input ;
    string grade[] = {"A", "B+", "B", "C+", "C","D+","D", "F","W" };
    cout << "Press Enter 3 times to reveal your future." ;
    getline(cin,input);
    getline(cin,input);
    getline(cin,input);
    srand(time(0));
    input = grade[rand()%9];
    cout << "You will get "<<input<<" in this 261102." ;
    
    return 0 ;
}