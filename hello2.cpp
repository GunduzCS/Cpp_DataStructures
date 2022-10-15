#include <iostream>
using namespace std;
int main() {
    int options,b,d,z=0;
    int x =0;
    int total = 0;
    string text = "structure";
    char l = 'l';
    for(int i =0; i<text.length() ; i++){
        cout << " " << text[i] << endl;


    }
    cout << "Welcome To Machine enter 1 to add student name or 0 to exit "<< endl;
    cin >> options;
    while(options==1){
        if(options==0){
            break;
        }
        cout << "how manyy numbers you will enter:  "<< endl;
        cin >> b;
        for (int i=0; i<b; i++){
            cout << "enter the number: ";
            cin >> x;
            total = total + x ;
            }
            cout << "total is " << total << endl ;
            total =0;
            cout << "Welcome To Addition Machine enter 1 to continue or 0 to exit "<< endl;
            cin >> options;
    }     
    return 0;
}