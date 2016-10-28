
/* CIS 22A - Lab 1
 * Author: Ulises Reyes
 * Date: 10/14/16
 * Description: My program converts a given input value for
 * Fahrenheit to units in Celsius.*/

   /*The #include directive below allows me to use cout and
     cin to interact with the console */

#include <iostream>
using namespace std;

   /*The main function in my program starts by declaring the
     Fahrenheit and Celsius variables with the double data type*/

int main() {
	double degreesFahrenheit, degreesCelsius;

	/*I start out by informing the user of a small, general fact
      to get the user interested in my converter*/

	cout << "Hello, did you know that the ";
	cout << "vast majority of the world " << endl;
	cout <<	"measures temperature using the ";
	cout << "Celsius unit of measurement?" << endl;

	/*Now I prompt the user with a call to action using the "endl" operator to
      maintain the text clean and compact*/

	cout << "To find out what a given temperature ";
	cout << "in Fahrenheit converts to in " << endl;
	cout << "Celsius, type in a value in Fahrenheit ";
	cout << "and I'll convert it below!" << endl;

	/*I designated the user's input of a degree in
	  Fahrenheit as the value of the integer stored
	  in the degreesFahrenheit variable.*/

	cin >> degreesFahrenheit;

	/*This value is what will be placed in the formula to
	  come up with the new value stored in the degreesCelsius variable as Celsius.
	  The input value, degreesFahrenheit, will be subtracted by 32,
	  multiplied by 5, then divided by 9 in order to come up with
	  the new Celsius value.*/

	degreesCelsius = (degreesFahrenheit - 32.00)*5.00/9.00;

	/*Now the program outputs the new value for degreesCelsius by
	  printing a combination of the variables and string literals.*/

	cout << degreesFahrenheit << " degrees Fahrenheit is equal " << endl;
	cout << "to " << degreesCelsius << " degrees Celsius!" << endl;

	/*This is the goodbye message to the user once the computation
	 is fully terminated.*/

	cout << "Thanks for using my converter! " << endl;
	cout << "Goodbye!";

	/*The program ends with the return 0 statement, letting the
	  compiler know that the program is done.*/

	return 0;



}
