#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include<chrono>

using namespace std; 
int main(){
auto start = std::chrono::high_resolution_clock::now();
    vector <int> ls {91, 74, 73, 85, 73, 81, 87};
vector<int> to;
vector<int>sums;

int k = 4;
int t = 331;
unsigned long mn = k;
int x = 0;
int anz =-1;
int si = ls.size();
  
if (mn > si){return -1;}
    if (mn<si && si != 0){
          sort( ls.begin(), ls.end());
                do{ for(size_t i = 0; i<mn; i++){x+=ls[i];} 
                   if(x<=t){
                     if(std::find(to.begin(), to.end(), x) == to.end()){
                        to.push_back(x);
                        } } x=0;}
                                            while(next_permutation(ls.begin(),ls.end()));

              sort(to.begin(), to.end(), greater());
                      if (!to.empty()){anz = to[0];}    } 
 for(int g =0; g<to.size(); g++){
  cout << to[g] << " ";}


auto stop = std::chrono::high_resolution_clock::now();
auto duration = duration_cast<std::chrono::microseconds>(stop - start);

cout << "\n" << duration.count() << " microseconds" ;
}
//Some Time






///////////////////
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
vector<int> to;
vector<int>sums;


unsigned long mn = k;
int x = 0;
  int y = 0;
int anz =-1;
unsigned long si = ls.size();
 
 if (mn >= si){return -1;}
sort( ls.begin(), ls.end());
  for (size_t l =0; l<mn;l++){y+=ls[l];} if(y>t){ return -1;}
  
    if (y<=t){
          
                do{ for(size_t i = 0; i<mn; i++){x+=ls[i];} if(x<=t){to.push_back(x);} x=0;}
                                            while(next_permutation(ls.begin(),ls.end()));

              sort(to.begin(), to.end(), greater());
                      if (!to.empty()){anz = to[0];}    }        
return anz;
}
          

//ALL TRIALS PASSED AT:2362ms

////////
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
vector<int> to;
vector<int>sums;


unsigned long mn = k;
int x = 0;
int anz =-1;
unsigned long si = ls.size();
 
 if (mn > si){return -1;}
    if (mn<si && si != 0){
          sort( ls.begin(), ls.end());
                do{ for(size_t i = 0; i<mn; i++){x+=ls[i];} if(x<=t){to.push_back(x);} x=0;}
                                            while(next_permutation(ls.begin(),ls.end()));

              sort(to.begin(), to.end(), greater());
                      if (!to.empty()){anz = to[0];}    }        
return anz;
}

// ALL TESTS PASSED AT: 2202ms

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
//20045




///OR



#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include<chrono>

using namespace std; 
int main(){
auto start = std::chrono::high_resolution_clock::now();
    vector <int> ls {91, 74, 73, 85, 73, 81, 87};
vector<int> to;
vector<int>sums;

int k = 5;
int t = 331;
unsigned long mn = k;
int x = 0;
int anz =-1;
int si = ls.size();
  
if (mn > si){anz = -1;}
    else{
sort( ls.begin(), ls.end());
do{ for(size_t i = 0; i<mn; i++){x+=ls[i];} 
  if (x<=t)to.push_back(x); x=0;} 
        while(next_permutation(ls.begin(),ls.end()));

  
  for (int l : to){if (l <= t){sums.push_back(l);}}
  sort(sums.begin(), sums.end(), greater());

   
       if (!to.empty()){anz = sums[0];}
    }      
  cout << anz;


auto stop = std::chrono::high_resolution_clock::now();
auto duration = duration_cast<std::chrono::microseconds>(stop - start);

cout << "\n" << duration.count() << " microseconds" ;
}




//ORR


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
vector<int> to;
vector<int>sums;


unsigned long mn = k;
int x = 0;
int anz =-1;
unsigned long si = ls.size();
  
 if (mn > si){anz = -1;}
    if (mn<si){
          sort( ls.begin(), ls.end());
                do{ for(size_t i = 0; i<mn; i++){x+=ls[i];} if(x<=t){to.push_back(x);} x=0;} 
                                            while(next_permutation(ls.begin(),ls.end()));

    
              sort(to.begin(), to.end(), greater());
                      if (!to.empty()){anz = to[0];}        }        
return anz;
}
// ALL TESTS PASSED AT: 2575ms


