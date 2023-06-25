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





//Second Attempt
/*
#include <vector> 
#include <algorithm> 

#include<chrono>
using namespace std;
  
  
auto start = std::chrono::high_resolution_clock::now();



class BestTravel
{
public:
    static int chooseBestSum(int t, int k, std::vector<int>& ls);
};

int BestTravel::chooseBestSum(int t, int k, std::vector<int>& ls){
vector<int> to;


int x = 0;
int anz =-1;
size_t si = ls.size();
 
 if (static_cast<size_t>(k) > si){return -1;}
          sort( ls.begin(), ls.end(), greater());
                
do{ for(size_t i = 0; i< static_cast<size_t>(k); i++)
{
x+=ls[i];} 
if(x==t){ return x;}
if(x<=t){ if(std::find(to.begin(), to.end(), x) == to.end()){to.push_back(x);} } 
x=0;
}
while(prev_permutation(ls.begin(),ls.end()));

 anz = *max_element(to.begin(), to.end());
if (to.empty()){return -1;}        
cout << anz;
}


auto stop = std::chrono::high_resolution_clock::now();
auto duration = duration_cast<std::chrono::microseconds>(stop - start);

cout << "\n" << duration.count() << " microseconds" ;
*/
