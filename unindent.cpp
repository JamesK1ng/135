#include <iostream>
#include <cctype>
using namespace std;



string removeLeadingSpaces(string line) 
{
	for (int i = 0; i < line.length();i++) 
	{
		char end = line[line.length() - 1];
		string value = 0;
		int start = line[i];
		if(isspace(line[i])) 
		{
			 value = line.substr((value + 1),end)
		}
		else if(isspace(line[i]) == false)
		{
			return value;
		}

	}
}

int main(){
string line;
char end;
string value = "";
while(getline(cin,line)){
	removeLeadingSpaces(line);	

}


}

