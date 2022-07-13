/* Reading from file */

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream new_file;
	new_file.open("new_file_write.txt", ios::in);//reading the file
	if(!new_file){
		cout<<"No such file \n"; //there's not a file with this name
	}else{
		char ch;
		while(!new_file.eof()){
			new_file >> ch;
			cout << ch;
		} 
	}
}
