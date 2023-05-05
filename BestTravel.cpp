#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
using namespace std; 
int main() 
{ 
vector<int> v {50, 55, 56, 57, 58}; 
vector<int> t;
vector<int> d;
vector<int>sums;

vector<int>tart;
vector<int>tarq;

string resort;


string spli = " ", spk = ",";
const char *hit = ",", *combo = ":", *finish = ".";

int n = 3;
int mn = n+1;
int f= 0;
int x = 0;
int ko = 163;
int anz =-1;


//t > ALL permutations
do{ for(int i = 0; i<v.size(); i++){t.push_back(v[i]);} 
    t.push_back(99999); } 
        while(next_permutation(v.begin(),v.end()));




//d > TRIPS permutations + a bunch of 999
for(int l = 0; l<t.size(); l++)                         
    {if(t[l] == 99999) {f = t[l]; }}

for(int j = 0; j<t.size(); j++){
    for(int k = 1; k < mn; k++)
        {if (t[j] == f)d.push_back(t[j+k]);}{d.push_back(99999);}}





//resort > Better-looking TRIPS permutations
for(int jj = 0; jj<d.size(); jj++){ 
        if (d[jj] != 99999)resort+=to_string(d[jj]) + spk; 
            if (d[jj] == 99999) resort+=spli;}


for(int ls = 0; ls<resort.size(); ls++){ 
    if (isspace(resort[ls]))
        {resort[ls]=*combo;}
            if (resort[ls] == *combo && resort[ls-1] == *hit)
                    {resort[ls-1] = *combo;}}


for(int c = 0; c< resort.size(); c++)
{if (resort[c] == *combo && isdigit(resort[c+1])){ resort[c] = *finish;}}
erase(resort, *combo);
resort.push_back(*finish);


//Sum of selected ammount
for (auto c : d)
{if (c != 99999){x+=c;}
if (c == 99999){sums.push_back(x); x=0;}
}
erase(sums, 0);


//Target sums
for(size_t hel = 0; hel<sums.size(); hel++)
{
if(sums[hel] == ko){anz = sums[hel]; tarq.push_back(hel);}
}






for(int h = 0; h<resort.size(); h++){ cout << resort[h];}
cout << "\n";

for(int heh = 0; heh<sums.size(); heh++){ cout << sums[heh] << " ";}
cout << "\n";

for(int h = 0; h<tart.size(); h++){ cout << tart[h] << " ";}
cout << "\n";

for(int h = 0; h<tarq.size(); h++){ cout << tarq[h] << " ";}
cout << "\n";
}
