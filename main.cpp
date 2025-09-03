#include <iostream>
using namespace std;

int main() {
 int height_inches;
 int weight_pounds;
 double bmi;
 double meters;
 double kg;

 height_inches = 61;
 weight_pounds = 130;
 meters = height_inches * 0.0254;
 kg = weight_pounds * 0.453592;
 bmi = kg / (meters * meters);

 cout << "The BMI for this person is: "<< bmi << "." << endl;

 return 0;
}
