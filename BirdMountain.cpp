// Expected = 6
#include <iostream>
#include <string>
#include<vector>
using namespace std;


int main()
{
    unsigned sum = 0;
  vector<string> mountain = {
"^                                                  ^^^^^^^^^^^^^",
"^                                                  ^^^^^^^^^^^^^",
"                                                   ^^^^^^^^^^^^^",
"^^                                                 ^^^^^^^^^^^^^",
"                                                     ^^^^^^^^^^^",
"                                                     ^^^^^^^^^^^",
"                                                   ^^^^^^^^^^^^^",
"^^                                                 ^^^^^^^^^^^^^",
"^^                                                   ^^^^^^^^^^^",
"^^                                                     ^^^^^^^^^",
"^^^                                                   ^^^^^^^^^^",
"^                                                      ^^^^^^^^^",
"^                                                     ^^^^^^^^^^",
"^^^                                                  ^^^^^^^^^^^",
"^^^^                                                ^^^^^^^^^^^^",
"^^^^^                                               ^^^^^^^^^^^^",
"^^^^                                                 ^^^^^^^^^^^",
"^^^^^^                                              ^^^^^^^^^^^^",
"^^^^^^                                               ^^^^^^^^^^^",
"^^^^^                                                  ^^^^^^^^^",
"^^^^^^                                                  ^^^^^^^^",
"^^^^^                                                     ^^^^^^",
"^^^                                                     ^^^^^^^^",
"^^^                                                     ^^^^^^^^",
"^                                                         ^^^^^^",
"                                                            ^^^^",
"^^                                                         ^^^^^",
"^^^                                                        ^^^^^",
"^^^^                                                         ^^^",
"^^                                                           ^^^",
"^^                                                           ^^^",
"^                                                              ^",
"                                                              ^^",
"                                                             ^^^",
"^                                                              ^",
"^^^                                                          ^^^",
"^^                                                             ^",
"^                                                             ^^",
"                                                             ^^^",
"^                                                            ^^^",
"^^                                                         ^^^^^",
"^^                                                           ^^^",
"^^^^                                                        ^^^^",
"^^^^                                                          ^^",
"^^^^^                                                         ^^",
"^^^^^^^                                                       ^^",
"^^^^^^^^                                                    ^^^^",
"^^^^^^^^                                                  ^^^^^^",
"^^^^^^^                                                     ^^^^",
"^^^^^^^^                                                    ^^^^",
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
        if ( i == mountain.size()-1 && mountain[i][j] == '^'){mountain[i][j] = level;}
        if ( j == mountain[i].size()-1 && mountain[i][j] == '^'){mountain[i][j] = level;}
        if ( j == 0 && mountain[i][j] == '^'){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i+1][j])){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i-1][j])){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i][j-1])){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i][j+1])){mountain[i][j] = level;}
            }
        }
    
    bool dn0 = 0;
    bool dn1 = 0;

    int tob = -1;
    int bot = 0;
    
    while(dn0 == 0 && dn1 == 0){ 
   for (size_t g = 0; g < mountain.size(); ++g){ if (dn0 == 1){break;}
                for (size_t q = 0; q < mountain[g].size(); ++q){
                    if (mountain[g][q] == '^' ){tob = g;
                                                dn0=1;
                                                cout << "top = " << tob;
                                                break;}                     }
                    
                
                if (g == mountain.size()-1 && dn0 == 0) {dn0 =0;break;}
            }
            
            
            
                        for (size_t g = mountain.size()-1;g>0; --g){if (dn1 == 1){break;}
                for (size_t q = mountain[g].size();q>0; --q){
                    if (mountain[g][q] == '^' ){bot = g;
                                                dn1 =1;
                                                cout << "bottom = " << bot<<endl;
                                                break;}                             } 
                    
                if (g == 1 && dn1 == 0) {dn1 =0;break;}
            }
    
    if(dn1 == 0 && dn0 == 0){break; cout << "okay!?"; }
    if (dn0 == 0 && dn1 == 1){level++;}
    if (dn0 == 1 && dn1 == 0){level++;}
    if (dn0 == 1 && dn1 == 1){level++;}
    
    if (dn0 == 1){    for(size_t v = 0; v< mountain[tob].size();v++){if (mountain[tob][v] == '^' ){mountain[tob][v] = level;}}}
    if (dn1 == 1){    for(size_t w = 0; w< mountain[bot].size();w++){if (mountain[bot][w] == '^' ){mountain[bot][w] = level;}}}
        
    
    dn0 = 0;
    dn1 = 0;
    
          for (size_t o = 0; o < mountain.size(); ++o ){
                for (size_t l = 0; l < mountain[o].size(); ++l)
                {if (mountain[o][l] == '^' ){ 
                                            mountain [o][l] = level;
                                            break;  }   }
                for (size_t g = mountain[o].size();g > 0; --g)
                        {if (mountain[o][g] == '^' ){ 
                                                    mountain [o][g] = level;
                                                    break;}} 
                                                        
                    
                }
            
}
int anz = (int)level -48;
        
                                                                                                             
    
    for (size_t v = 0; v < mountain.size(); ++v ){
            for (size_t u = 0; u < mountain[v].size(); ++u){ cout << mountain[v][u];}cout << "\n";}
          

    cout  << "\nHighest peak: " << anz;
    
}


//
/*
 vector<string> mountain = {
"      ^^^^^^^^^      ",
"    ^^^^^^^^^^^^^    ",
"  ^^^^^^^^^^^^^^^^^  ",
" ^^^^^^^     ^^^^^^^ ",
"^^^^^^^       ^^^^^^^",
"^^^^^^^       ^^^^^^^",
"^^^^^^^       ^^^^^^^",
" ^^^^^^^     ^^^^^^^ ",
"  ^^^^^^^^^^^^^^^^^  ",
"    ^^^^^^^^^^^^^    ",
"      ^^^^^^^^^      ",
};
*/
// expected 4