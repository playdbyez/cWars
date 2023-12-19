#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  string events = "9 O 17 O 9 O 12 O 2 O 12 O 9 O 1 O 5 O 12 O 17 O 20 O 16 O 7 O 2 O 8 O 16 O 14 O 3 O 14 O 3 I 11 O 16 O 1 O 13 O 8 O 14 O 5 O 12 O 4 O";

  vector <int> race = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
int hold =0;
    int champ = 9;
        vector <int> sim;
 
 
 
for (size_t l=0; l< events.size(); l++)
  {
        if (!isdigit(events[l]) && isdigit(events[l-1]) && !isdigit(events[l-2])){sim.push_back(events[l-1]-48);}
        if (!isdigit(events[l]) && isdigit(events[l-1]) && isdigit(events[l-2])){sim.push_back(events[l-1]-48 + (events[l-2]-48)*10);}
       if (events[l] == 'O'){ sim.push_back(0);}
       if (events[l] == 'I'){ sim.push_back(99);}
    }


for (size_t g =0; g<sim.size(); g++)
{
if (sim[g] == 99 && sim[g-1] == champ){cout << "Champion CRASHED!";return -1;}									

if (sim[g] == 0)
		{for (size_t l =0; l<race.size(); l++)
				{if (race[l] == sim[g-1]){hold = race[l]; race[l] = race[l-1]; race[l-1] = hold;
				}
			}
		}
									

if (sim[g] == 99 && sim[g-1] !=champ)
		{for (int l =0; l<race.size(); l++){ if (race[l] == sim[g-1]){race[l] = 0;}
    }
}

race.erase(remove(race.begin(), race.end(), 0), race.end());
}



cout << "Race Results:";
for (size_t i =0; i<race.size(); i++)
{cout <<race[i] << " ";}


cout << "\n";
for (size_t i =0; i<race.size(); i++)
{
if (race[i] == champ){ cout << i+1;}
}


}
