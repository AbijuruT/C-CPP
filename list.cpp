#include <iostream>

using namespace std;

int main(){

    int list_of_numbers[10];
    cout<<"Enter list of numbers to sort them"<<endl;
    for(int i = 0; i < 10; i++){
        cout<<"Enter the number "<<i+1<<endl;
        cin>>list_of_numbers[i];
        system("clear");
    }
    

    return 0;

}