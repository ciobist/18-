#include <iostream>
#include <string>
using namespace std;

class PlayersData
{
 public:

  string Name;    
  int Points;

  PlayersData(string s, int i)
  {
      Name = s;
      Points = i;
  }

  PlayersData()
  {
      
  }

};

void ArraySorting(PlayersData* Array, int NumberOfPlayers)
{
    int i, j = 0;
    PlayersData ForSwap;

    for (i = 0; i < NumberOfPlayers - 1; i++)
    {
        for (j = 0; j < NumberOfPlayers - 1 - i; j++)
        {
            if (Array[j].Points < Array[j + 1].Points)
            {
                ForSwap = Array[j];
                Array[j] = Array[j + 1];
                Array[j + 1] = ForSwap;

            }
        }

    }
}

int main()
{
    using namespace std;

    PlayersData playersData;
    int NumberOfPlayers;
    int i, j = 0;


    std::cout << "Enter number of players you want to add: ";
    cin >> NumberOfPlayers;




    PlayersData* Array = new PlayersData[NumberOfPlayers];



    for (i = 0; i < NumberOfPlayers; i++)
    {
        string Name;
        int Points = 0;


        std::cout << "Enter player " << i + 1 << " name:  ";
        cin >> Name;

        std::cout << "Enter player " << i + 1 << " score:  ";
        cin >> Points;

        Array[i] = PlayersData(Name, Points);
    }

    std::cout << "\n==========================================\n" << endl;

    ArraySorting(Array, NumberOfPlayers);

    for (i = 0; i < NumberOfPlayers; i++)
    {
        std::cout << Array[i].Name << " " << Array[i].Points << " " << endl;
    }

}