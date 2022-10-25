
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int SIZE = 50;
int TotalPoints(int *, int);

struct Player
{
       char name[20];
       int playNum;
       int Points;
};

int main()
{
    const int NUM_PLAYERS = 10;


    Player *players = new Player[NUM_PLAYERS];
    int index;
	int total=0;


	cout << "Please provide the following information.\n\n\n";
    for (index = 0; index < NUM_PLAYERS; index++)
    {
        cout << "Please enter the Player's Name: ";
		cin.getline( players[index].name, 50 );
        cout << "Please enter the Player's Number: ";
        ( cin >> players[index].playNum ).get();


		while (players[index].playNum <=0)
		{
			//cout << "Zero or negative numbers not allowed\n";
			cout << "Please enter the Player's Number: ";
			(cin >> players[index].playNum).get();

		}
        cout << "Please enter the Points Scored by the Player: ";
        ( cin >> players[index].Points ).get();


		while (players[index].Points < 0)
		{
			//cout << "Zero or negative numbers not allowed\n";
			cout << "Please enter the Points Scored by the Player: ";
			(cin >> players[index].Points).get();
		}
		cout << endl << endl;

    }


	cout << "Here is the players data:\n\n";
	cout << "    Name    Number    Score	\n";
	cout << "--------------------------------\n";

	for (index = 0; index < NUM_PLAYERS; index++)
	{
		cout << setw(8) << players[index].name;
		cout << setw(8) << players[index].playNum;
		cout << setw(8) << players[index].Points << endl;
	}


	for (index = 0; index < NUM_PLAYERS; index++)
	{
		total += players[index].Points;

	}


	cout << "\n\nThe total of points scored by the team is: ";
	cout << total << endl;

	int max = players[0].Points;
    int maxIndex = 0;
    for (int index = 0; index < 10; index++)
    {
		if (players[index].Points > max)
      {
		  max = players[index].Points;
          maxIndex = index;
      }
    }

	cout << "highest score by: <"

<< players[maxIndex].name << "> number: " << players[maxIndex].playNum << endl;

    cin.get();


	delete [] players;

    return 0;

}

