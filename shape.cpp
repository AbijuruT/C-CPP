#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int height, width;
    char symbol;
    cout<<"Give height, width amd symbol I'll draw you shapes"<<endl;
    cout<<"Height:";
    cin>>height;
    cout<<"Width:";
    cin>>width;
    cout<<"Now give me any symbol or character you want shape into:";
    cin>>symbol;
    // Rectangle
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            cout<<setw(3)<<symbol;
        }
        cout<<endl;
    }
    cout<<endl;
    // Triangle
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= i; j++){
            cout<<setw(3)<<symbol;
        }
        cout<<endl;
    }
    cout<<endl;
    // Reversed Triangle
    for(int i = 1; i <= height; i++){
        for(int j = height; j >= i; j--){
            cout<<setw(3)<<symbol;
        }
        cout<<endl;
    }
    
}