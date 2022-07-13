/* Creating file and writing text */

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream new_file;
	new_file.open("new_file_write.txt", ios::out);
	if(!new_file){
		cout<<"File creation failed \n";
	}else{
		cout<<"New file created \n";
		new_file<<"learning file handling"; //writing to file
		new_file.close();
	}
	
	return 0;
}
