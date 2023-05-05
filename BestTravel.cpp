#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
using namespace std; 
class BestTravel
{
public:
    static int chooseBestSum(int t, int k, std::vector<int>& ls);
};

int BestTravel::chooseBestSum(int t, int k, std::vector<int>& ls)
{
vector<int> to;
vector<int> d;
vector<int>sums;
vector<int>tart;

unsigned long mn = k+1;
int f= 0;
int x = 0;
int anz =-1;
int si = ls.size();


sort( ls.begin(), ls.end());
do{ for(size_t i = 0; i<ls.size(); i++){to.push_back(ls[i]);} 
    to.push_back(99999); } 
        while(next_permutation(ls.begin(),ls.end()));


for(size_t l = 0; l<to.size(); l++)                         
    {if(to[l] == 99999) {f = to[l]; }}

for(size_t j = 0; j<to.size(); j++){
    for(size_t ku = 1; ku < mn; ku++)
        {if (to[j] == f)d.push_back(to[j+ku]);}{d.push_back(99999);}}


for (auto c : d)
{if (c != 99999){x+=c;}
if (c == 99999){sums.push_back(x); x=0;}
}


for(size_t hel = 0; hel<sums.size(); hel++)
{if(sums[hel] <= t){tart.push_back(sums[hel]);}}

  sort(tart.begin(), tart.end(),  greater());
      anz = tart[0];
        if (k > si){anz = -1;}
          if (anz == 0){anz = -1;}

  
return anz;
}
