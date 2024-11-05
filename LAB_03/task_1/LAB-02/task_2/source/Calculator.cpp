#include <iostream>
#include "Calculator.h"

using namespace std;


Calculator :: Calculator(double num_1,double num_2){

    this-> num_1 = num_1;
    this-> num_2 = num_2;

}

void Calculator :: addition(){
    
    double result;
    result  = num_1 + num_2;
    cout << num_1 <<" + "<< num_2 << " : " << result << endl;
    
}
void Calculator :: subtraction(){

    double result;
    result  = num_1 - num_2;
    cout << num_1 <<" - "<< num_2 << " : " << result << endl;
}
void Calculator :: multiplication(){
    
    double result;
    result  = num_1 * num_2;
    cout << num_1 <<" x "<< num_2 << " : " << result << endl;

}
void Calculator :: division(){
    
    double result;
    result  = num_1 / num_2;
    cout << num_1 <<" / "<< num_2 << " : " << result << endl;

}
