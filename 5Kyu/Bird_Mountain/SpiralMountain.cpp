#include <iostream>
#include <string>
#include<vector>
using namespace std;


int main()
{
    //Expected 16
    //Issue is there are levels without borders
vector<string> mountain = {
"^^^^^^^^^^^^^^^^^^^^^^^^^^  ^^^^^^                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^^    ^^^^^^^              ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^^     ^^^^                 ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^^    ^^^^^^^                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^^^  ^^^^^^                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^^^  ^^^^^                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^^^  ^^^^^^                 ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^^    ^^^                   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^     ^^^^                  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^       ^^^^^                  ^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^       ^^^^^^                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^     ^^^^^                  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^    ^^^^^^^                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^  ^^^^^^                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^   ^^^^                  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^    ^^^^                   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^     ^^^^                   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^      ^                    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^       ^                  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^^      ^^^                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^^      ^                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^       ^                  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^        ^^                  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^       ^^^                   ^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^                               ^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^                              ^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^                                ^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^                             ^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^                           ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^                         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^                         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^                       ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^                       ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^                         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^                       ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^                      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^^                      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^^                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^^                         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^                          ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^                         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^^                          ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^                          ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^^^                          ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^^^                              ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^^^                               ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^                               ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"^^^^^^^^^^^^^^^^                             ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
};
    
     bool canzero = 0;
  for (size_t i = 0; i < mountain.size(); ++i){ if(canzero == 1){break;} 
    for (size_t j = 0; j < mountain[i].size(); ++j){
                            if (mountain[i][j] == '^'){canzero = 1;break;}
                            if (i == mountain.size()-1 && j == mountain[i].size()-1){return 0;}  
            }}
  
  int inc =1;
    char level = '1';
       
        for (size_t i = 0; i < mountain.size(); ++i)
        {
            for (size_t j = 0; j < mountain[i].size(); ++j){
           
        if ( i == 0 && mountain[i][j] == '^'){mountain[i][j] = '1';}
        if ( i == mountain.size()-1 && mountain[i][j] == '^'){mountain[i][j] = '1';}
        if ( j == mountain[i].size()-1 && mountain[i][j] == '^'){mountain[i][j] = '1';}
        if ( j == 0 && mountain[i][j] == '^'){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i+1][j])){mountain[i][j] = '1';}
        if ( mountain[i][j] == '^' && isspace(mountain[i-1][j])){mountain[i][j] = '1';}
        if ( mountain[i][j] == '^' && isspace(mountain[i][j-1])){mountain[i][j] = '1';}
        if ( mountain[i][j] == '^' && isspace(mountain[i][j+1])){mountain[i][j] = '1';}
            }
        }
        
    for (size_t i = 0; i < mountain.size(); ++i)
        {for (size_t j = 0; j < mountain[i].size(); ++j){
            if ( mountain[i][j] == '^' && mountain[i][j+1] == '1' && mountain[i][j-1] == '1'  ){mountain[i][j] = '1';}
            if ( mountain[i][j] == '^' && mountain[i+1][j] == '1' && mountain[i-1][j] == '1'  ){mountain[i][j] = '1';}
        }}
  
        
                                                                                                             
    
    for (size_t v = 0; v < mountain.size(); ++v ){
            for (size_t u = 0; u < mountain[v].size(); ++u){ cout << mountain[v][u];}cout << "\n";}
          

    //cout  << "\nHighest peak: " << anz;
    

}
