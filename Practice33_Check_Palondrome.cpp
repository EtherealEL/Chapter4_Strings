
#include <iostream>
#include<cstring>
using namespace std;
//Check Palindrome 





int main()
{

	char word[100];

	cout << "This program checks if a word is a palendrome or not\n\n" << "Please enter a word to check if it is a palendrome: ";
	cin >> word; 


	strlen(word);

	//check left letter and right letter

	int left_index = 0;
	int right_index = strlen(word) - 1;

	//using bool, we have it either is or isnt, true or false, bool is the best option

	bool is_palendrome = true;//by default the word is a palendrome

	//need a loop to check the left and right 

	cout << strlen(word) << endl;


	while (left_index < right_index)
	{
		if (word[left_index] != word[right_index])
		{
			is_palendrome = false;
			break;

		}

		left_index++;
		right_index--;
	}
	if (is_palendrome)
	{
		cout << "Your word is a palendrome.";
	}
	else
	{
		cout << "Your word is not a palendrome.";
	}

	return 0;
}

