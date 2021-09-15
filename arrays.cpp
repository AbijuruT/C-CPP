#include <iostream>
using namespace std;
int main(){
    int element;
    cout<<"How many month are you going to Enter?>> ";
    cin>>element;
    float month_array[element]; 
    float total = 0;
    for(int i = 0; i<element; i++){
        cout<<"Enter month "<<i+1<<endl;
        cin>>month_array[i];
        total += month_array[i];
    }

    float average = total/ element;
    float in_2_years = average *24;
    cout<<"Your Total money-: "<<total<<endl;
    cout<<"Your Average-: "<<average<<endl;
    cout<<"Your money in two years-: "<<in_2_years<<endl;
    // system("clear");

    return 0;
}