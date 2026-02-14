
#include <iostream>
using namespace std;





int main()
{
	char input_text[200];
	char duplicate[200];



	cout << "This program removes repeating characters from any word you enter!\n\n" << "Please enter a word";
	cin.getline(input_text, 200);

	int unique_index = 0;

	for (int input_index = 0; input_text[input_index] != '\0'; input_index++)
	{
		bool is_already_present = false;

		for (int check_index = 0; check_index < unique_index; check_index)
		{
			if (input_text[input_index] == duplicate[check_index])
			{
				is_already_present = true;
				break;
			}
		}
		if (!is_already_present)
		{
			duplicate[unique_index] = input_text[input_index];
			unique_index++;
		}
		duplicate[unique_index] = '\0';

		cout << duplicate << endl;
		return 0;

	}






}

