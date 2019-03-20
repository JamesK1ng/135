#include <iostream>
#include <cctype>
#include <string>
#include <ctype.h>
#include <stdio.h>

using namespace std;
char shiftChar(char c, int rshift){

		int holder = int(c);
		if(holder >= 65 && holder <= 90) //caps
		{
		
				holder = holder +rshift;
				if (holder > 90) 
				{
					holder = holder - 26;
				}
		}
		else if (holder >= 97 && holder <= 122)//check lowercase
		{
				holder = holder + rshift;
				if (holder > 122)
				{
					holder = holder - 26;
				}
		}
		return (char)holder;
}


string encryptCaesar(string plaintext, int rshift)
{

	string new_char;
	for (int i = 0; i < plaintext.length(); i++)
	{
			new_char = new_char + shiftChar(plaintext[i],rshift);
	}
	return new_char;
	
}
string encryptVigenere(string plaintext, string keyword) {
	string vigen = "";
	int q = 0;
		for (int i = 0; i < plaintext.size(); i++) {
			if(isalpha(plaintext[i] == 0)) {
				 vigen = vigen + plaintext[i];

			}
			else {
				vigen = vigen + shiftChar(plaintext[i], (int)keyword[q] - 97);
				q++;
				if (q >= keyword.size()){
					q = 0;
				}
			}
		
		
		}return vigen;
	


}



int main() {


	string plaintext = "Hello, World!";
	//cout << "Plaintext: ";
	//getline(cin, plaintext);
	string keyword = "cake";
	//cout << "enter shift: ";
	//getline(cin,keyword);
	cout << encryptVigenere(plaintext, keyword) << endl;
}

/*

Author: David Dekle-Hills

Course: CSCI-136

Instructor: Maryash

Assignment: Lab 6B

Annoyance: 2

Prints the ascii code and the character

*/
