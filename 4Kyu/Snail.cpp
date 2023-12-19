//Expected: equal to [ 1, 2, 3, 4, 5, 6, 7, 8, 9 ]
//Actual: [ 1, 2, 3, 4, 5, 6, 7, 6, 5 ]

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    

vector<std::vector<int>> snail_map = {{1,2,3}, {8,9,4}, {7,6,5}};
  vector <int> sero = {} ;
  vector <int> sn = {1} ;
  vector <int> spath = {} ;
  
  //Zero
  //if (snail_map[0].size() == 0){ return sero;}
  //cout << snail_map.size()<<endl;

  //One
  //if (snail_map[0].size() == 1){ return sn;}
   
  int scol = snail_map.size();
  int srow = -1;
   if (scol > 1){srow = snail_map[0].size();}
  
  int vih = -1;
  int viv = 0;
  
  int dr = scol-1;
  int dl = -1;
  int ul =  0;
  int ur = srow -1;
  
  int totalsize = 0;
  
  for (size_t i = 0; i < scol; i++){for (size_t j = 0; j < srow; j++){ totalsize++;}}
 
  
  

  
  if (scol > 1){
    for (size_t i =0; i < scol; i++)
    { 
      for (size_t j =0; j < srow; j++)
      { spath.push_back(snail_map[i][j]);
        if (j == ur && i != dr){
          vih = i; ul = vih;
                                        while (i < dr)
                                        {
                                         i++;
                                         spath.push_back(snail_map[i][j]);
                                         if ( spath.size() == totalsize){/*cout << spath;*/ return 0;}
                                        }
        if (i == dr  && j == ur){ 
          dr--;
                                  while (j > viv)
                                  {
                                   j--; 
                                   spath.push_back(snail_map[i][j]); 
                                   if ( spath.size() == totalsize){/*cout << spath;*/ return 0;}  
                                  }    
                                }
                                
                               
      }
    
    }
  }
}
    for (size_t m =0; m < spath.size(); m++){
            cout << spath[m];
    }
  


}
