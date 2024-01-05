//Expected: equal to [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 ]

//Actual: [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 13, 14 ]

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    

vector<std::vector<int>> snail_map = {{1,2,3,4}, {12,13,14,5}, {11,16,15,6}, {10,9,8,7}};
  vector <int> sero = {} ;
  vector <int> sn = {} ;
  vector <int> spath = {} ;
  
   //Zero
  //if (snail_map[0].size() == 0){ return sero;}

  //One
  //if (snail_map[0].size() == 1){ sn.push_back(snail_map[0][0]);return sn;}
   
    size_t scol = snail_map.size();
    size_t srow = -1;
   if (scol > 1){srow = snail_map[0].size();}

  size_t dr = scol-1;
  size_t ul = 0;
  size_t ur = srow -1;
  size_t dl = ul;
  
 
  int cari = 0;
  int carj= 0;
  unsigned totalsize = 0;
  
  for (size_t i = 0; i < scol; i++){
    for (size_t j = 0; j < srow; j++){ totalsize++;}}

if (scol > 1){
    for (size_t i =0; i < scol; i++)
    {  if (out == 1) {break;}
         i = ul; 
      for (size_t j =0; j < srow; j++)
      { 
          
          
           if ( spath.size() == totalsize){  cout << "Size match!" <<endl;out =1;break;}
          if (spath.size() == 0) {spath.push_back(snail_map[i][j]);}
 
             if (i == ul ){j = carj; 
            while(j < ur ){j++;spath.push_back(snail_map[i][j]); 
                           if ( spath.size() == totalsize){ cout << "Size match!!" <<endl;out =1;break;}} ul++;}
        
            if (j == ur){ carj = j;   
            while(i < dr ){ i++; spath.push_back(snail_map[i][j]);   
                           if ( spath.size() == totalsize){cout << "Size match!!!" <<endl;out =1;break;}}ur--;}
            
            if (i == dr) {cari = i; j = carj; 
            while(j > dl ){ j--;spath.push_back(snail_map[i][j]);    
                           if ( spath.size() == totalsize){ cout << "Size match!!!!" <<endl;out =1;break;}} dr--;}
            
            if (j == dl){ carj = j; i = cari;
            while(i > ul ){ i--;spath.push_back(snail_map[i][j]);    
                           if ( spath.size() == totalsize){ cout << "Size match!!!!!" <<endl;out =1;break;} } dl = ul; }                          
      }
    }
  }

  for (size_t m =0; m < spath.size(); m++){
            cout << spath[m] << " ";
    }
  
}
