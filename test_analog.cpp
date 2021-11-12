/* test_analog.cpp
 * program created by Jenna Hebert 
 * Program takes no command line arguments *
 * program created to drive the AnalogIn class. 
 */
#include "AnalogIn.h"
#include <iostream>
using std::string;
using namespace::std;
int main(){
cout <<"Testing program"<<endl;
AnalogIn tempSensor(0);
cout <<"Number is " << tempSensor.getNumber()<<endl;
cout<<"Sensor reading is "<<tempSensor.readADCsample()<<endl;
}
