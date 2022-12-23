#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main  () 
{
	int numStudents = 0;
	string student;
	string firstStudent;
	string lastStudent;
	
// Loop check if input is < 1 or > 25 to meet requirements and repeats if not met
	while (numStudents < 1 || numStudents > 25 ) {
		
		cout << "Please enter the number of students between 1 and 25: ";
		cin >> numStudents; 
		cout << "\n";
		
	}
		
// Ask for the names and reiterates by the number of students 
	for (int i = 1; i <= numStudents; i++){
		
		cout << "Enter the name of student #" << i << ": ";
		cin >> student;
		
// Covert input to lower case text , combination between upper and lower case names is possible now
		
		transform(student.begin(), student.end(), student.begin(), ::tolower);
// if it's the frist name then assign it to first student & last
		
		if (i == 1){
			firstStudent = student;
			lastStudent = student;
/* if it's not the first then check if the student is less than the firststudent then make it equal ,
* if bigger then it equals last
*/
		}else {
			if (student < firstStudent){
				firstStudent = student;
			}else if ( student > lastStudent){
				lastStudent = student;
			}
		}
	}
	
	cout << "\nFirst Student: " << firstStudent << endl;
	cout << "Last Student: " << lastStudent << endl;
	
	
	
return 0;

}

