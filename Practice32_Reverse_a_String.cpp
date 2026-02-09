#include <iostream>

using namespace std;

//read a line of text (may contain spaces) into a char array and prints the reversed string



int main()
{
	char text[200];

	cout << "Enter text you want to reverse: ";
	cin.getline(text, 200);


	int length = 0;

	strlen(text);


	int left_index = 0;
	int right_index = strlen(text) - 1;

	while (left_index < right_index)
	{
		char temp = text[left_index];
		text[left_index] = text[right_index];
		text[right_index] = temp;

		left_index++;
		right_index--;
	}
	cout << "\nYour reversed word is: " << text << endl;
	return 0;

}
