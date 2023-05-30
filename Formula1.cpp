#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;



int main ()
{
    string events="2 O 17 I";

int champion =17;
int posit = champion;
 
  vector <char> sig;
   vector <int> sim;
 int f;
 
  for (auto i: events)
  {if (isalpha(i)){ sig.push_back(i);}}
 
 
for (size_t l=0; l< events.size(); l++)
  {
        if (!isdigit(events[l]) && isdigit(events[l-1]) && !isdigit(events[l-2])){sim.push_back(events[l-1]-48);}
        if (!isdigit(events[l]) && isdigit(events[l-1]) && isdigit(events[l-2])){sim.push_back(events[l-1]-48 + (events[l-2]-48)*10);}
       
    }
 
  for (size_t y =0; y<sim.size(); y++){cout << sim[y]<< " ";}

}
