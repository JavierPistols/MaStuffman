#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

struct Node
{
	char character;
	int frequency;
	Node* left;
	Node* right;
};

vector<Node>v_FreqList;
vector<Node>::iterator i_vFreqList;

void fillList()
{
	Node charac;
	int nword;
	cout << " \ningresa la cantidad de letras a considerar ";
	cin >> nword;

	//getting the (character,frequency) list in a Node
	while (nword--)
	{
		cout << "\nIngresa el caracter y su frecuencia: char freq ";
		cin >> charac.character >> charac.frequency;
		v_FreqList.push_back(charac);
	}

	//printing the list
	i_vFreqList = v_FreqList.begin();
	while (i_vFreqList != v_FreqList.end())
	{
		cout << endl << i_vFreqList->character << "," << i_vFreqList->frequency;
		i_vFreqList++;
	}
}


int main()
{
	fillList();

	return 0;
}