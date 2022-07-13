/* File handing c++ */
#include <fstream> //allows reading input from files
//#include <ofstream> //allows outputing to files

using namespace std;
int main (){
	
	ifstream source("source-file.txt");//fstream
	ofstream destination("destination-file.txt");//ofstream
	
	int x;
	
	source >> x; //reads one int form source-file.txt
	source.close();//close file as soon as we're done using it
	destination << x;//writes x to destination-file.txt
	
	return 0;
}
