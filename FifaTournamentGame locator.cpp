// FifaTournamentGame locator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    std::string pairs[24][2] = {
       {"liv", "psg"},
       {"fra", "mci"},
       {"rma", "bay"},
       {"rma", "liv"},
       {"bay", "fra"},
       {"mci", "psg"},
       {"liv", "mci"},
       {"psg", "bay"},
       {"fra", "rma"},
       {"fra", "liv"},
       {"rma", "psg"},
       {"bay", "mci"},
       {"liv", "bay"},
       {"mci", "rma"},
       {"psg", "fra"},
       {"liv", "rma"},
       {"fra", "bay"},
       {"psg", "mci"},
       {"psg", "liv"},
       {"mci", "fra"},
       {"bay", "rma"}
    };
    string pairsReal[24][2];
    std::string teams[6] = { "psg","fra", "liv", "bay","rma","mci" };
    string teamsReal[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "Who is " << teams[i] << ": ";
        cin >> teamsReal[i];
        cout << endl;
    }

    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 6; k++)
            {
                if (pairs[i][j] == teams[k])
                {
                    pairsReal[i][j] = teamsReal[k];
                }
            }
        }
    }
    bool exitFlag = true;
    int currentMatch = 0;
    while (exitFlag) {

        for (int j = 0; j < 6; j++)
        {

        
        for (int i = currentMatch; i < 24; i++)
        {

            cout << pairsReal[i][0] << " vs " << pairsReal[i][1] << endl;
        }

    }
}
