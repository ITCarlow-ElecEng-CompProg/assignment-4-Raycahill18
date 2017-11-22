
/** \ Ray Cahill
 *
 * \ Lab 4
 * \ 25/10/1990
 * \ Computer Programming
 *
 */  #include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

// main function
int main ();
//Global declaration
double res(double radius, double length, double resistivity);


int main ()
{
    //local variable declarations
    double radius=0, length=0, resistance=0, resistivity=0;
    //While loop radius criteria
    while (radius<=0)
    {
        cout<< "Enter a value for radius greater than 0: ";
        cin>> radius;
    }
    //While loop lenght criteria
    while (length<=0)
    {
        cout<< "Enter a value for length greater than 0: ";
        cin>>length;
    }
    //While loop resistivity criteria
    while( resistivity<=0)
    {
        cout << "Enter a value for resistivity greater than 0: ";
        cin>>resistivity;
    }
    //function equation
    resistance = res(radius, length, resistivity);

    cout << "Resistance of a wire: ohms" << resistance << endl;

    return 0;

}
//Function variable declaration
double res(double radius, double length, double resistivity)
{

    //
    double area, resistance;
    //Equation to calculate area
    area = M_PI * radius * radius;
    //Eqautaion to calculate the resistance
    resistance =  resistivity * length / area;

    //return the values to the function
    return resistance;
}



