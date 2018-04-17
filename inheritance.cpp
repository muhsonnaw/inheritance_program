#include <iostream>
using namespace std;

class PrintData {
	public:
		PrintData() {}
		void printOutput(string data) {
			cout << data << endl;
		}
		void printOutput(float data) {
			cout << data << endl;
		} 
		void printOutput(int data) {
			cout << data << endl;
		} 		
		~PrintData() {}
};

class Student {
	protected:
		string nim;
		string name;
		string gender;
	public : 
		Student() {}
		Student(string cNim, string cName, string cGender): 
			nim{cNim}, 
		  	name{cName},
			gender{cGender} {}
		string getName() {return name;}
		void setName(string cName) {name = cName;}
		~Student() {}
};

class Staff: public PrintData {
	private:
		string name;
	public:
		Staff() {}
		string getName() {return name;}
		void setName(string cName) {name = cName;}
		~Staff() {}
};

class AcadResults: public Student, public PrintData {
	private:
		float ipk;
		int sks;
	public:
		AcadResults() {}
		AcadResults(float cIpk, int cSks):
			ipk{cIpk},
			sks{cSks} {}
AcadResults(string cNim, string cName, 
						string cGender, float cIpk, int cSks):
			Student(cNim, cName, cGender),
			ipk{cIpk},
			sks{cSks} {}
		float getIpk() {return ipk;}
		void setIpk(float cIpk) {ipk = cIpk;}
		~AcadResults() {}
};

int main() {
	AcadResults result("17.11.1102", 
	                   	"Muhson Nawawi",
					   	"M", 3.83, 38);
	result.printOutput(result.getName());
	result.printOutput(result.getIpk());
	
	Staff staff;
	staff.printOutput("Another Name");
	return 0;
}

