#include <iostream>

using namespace std;

int main(){
    float weight, height, bmi;
    cout<<"Enter your Weight(kg) and Height(m)\n";
    cin>>weight>>height;
    // bmi = weight / (height*height)
    bmi = weight / (height * height);

    if(bmi < 18.5)
        cout<<"Underweight\n";
    else if(bmi > 25)
        cout<<"Overweight\n";
    else
        cout<<"Normal weight\n";
    cout<<"Your BMI is-: "<<bmi <<endl;


    return 0;

}