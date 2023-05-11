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

int BestTravel::chooseBestSum(int t, int k, std::vector<int>& ls){

int x = 0;
int anz =-1;
size_t si = ls.size();
 
if (static_cast<size_t>(k) > si){return -1;}
sort( ls.begin(), ls.end());

 

    do {
        
for(size_t i = 0; i< static_cast<size_t>(k); i++)
{x+=ls[i];} 
if(x==t){ return x;}
if ((x >= anz) && (x <= t)){anz = x;}
if(x > t+ls[0]){return anz;} 
x=0;
 
       
    } while(std::next_permutation(ls.begin(), ls.end()));

       return anz;
return anz;
}
//2006ms
//https://imgur.com/a/brmmxYD
