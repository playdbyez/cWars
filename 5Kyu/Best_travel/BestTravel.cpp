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


int anz =-1;
size_t si = ls.size();
 
                                                   if (static_cast<size_t>(k) > si){return -1;}
sort( ls.begin(), ls.end(),greater());

 std::string bitmask(k, 1);
    bitmask.resize(si, 0); 

    do {
        int x = 0;
        for (size_t i = 0 ; i < si ; ++i)
            if (bitmask[i])
                x += ls[i];
        if ((x >= anz) && (x <= t))
            anz = x;
    } while(std::prev_permutation(bitmask.begin(), bitmask.end()));

       
return anz;
}
