// Example program
#include <iostream>
#include <string>
#include<vector>
using namespace std;


int main()
{
    unsigned sum = 0;
  vector<string> mountain = {
            "^^^^^^        ",
            " ^^^^^^^^     ",
            "  ^^^^^^^     ",
            "  ^^^^^       ",
            "  ^^^^^^^^^^^ ",
            "  ^^^^^^      ",
            "  ^^^^        "
        };
       
    
    int inc =1;
    string nano = to_string(inc);
    char level = nano[0];
       
        for (size_t i = 0; i < mountain.size(); ++i)
        {
            for (size_t j = 0; j < mountain[i].size(); ++j){
           
        if ( i == 0 && mountain[i][j] == '^'){mountain[i][j] = '1';}
        if ( i == mountain.size()-1 && mountain[i][j] == '^'){mountain[i][j] = level;}
       
        if ( mountain[i][j] == '^' && isspace(mountain[i+1][j])){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i-1][j])){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i][j-1])){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i][j+1])){mountain[i][j] = level;}
            }
        }
           char max = 2;
    int rmdr =2; 
    string mamo = to_string(rmdr);
    char hill = mamo[0];
    
          for (size_t o = 0; o < mountain.size(); ++o ){ hill = '2';
                for (size_t l = 0; l < mountain[o].size(); ++l)
                {if (mountain[o][l] == '^' ){ 
                    mountain [o][l] = hill;
                        for (size_t g = mountain[o].size();g > 0; --g)
                        {if (mountain[o][g] == '^' ){ 
                            mountain [o][g] = hill;break;}} if (hill > max){max = hill;} hill++; }
                }
            }
                                                                                                                
    
    for (size_t v = 0; v < mountain.size(); ++v ){
            for (size_t u = 0; u < mountain[v].size(); ++u){ cout << mountain[v][u];}cout << "\n";}
          

    cout  << "\nHighest peak: " << max;
    
}
/*
EQUAL TO 2
vector<string> mountain = {
"^^   ^^^  ^^",
"^ ^^  ^^^   ",
"  ^^^   ^^  ",
"    ^^ ^^   ",
"   ^  ^     ",
"    ^^      ",
" ^^^^^^^^   ",
"  ^^^^^^^^  ",
" ^^ ^^^   ^^",
"^^^    ^^ ^^",
"     ^^^^^^^",
};
*/


// Example program
#include <iostream>
#include <string>
#include<vector>
using namespace std;


int main()
{
    unsigned sum = 0;
  vector<string> mountain = {
            "^^^^^^        ",
            " ^^^^^^^^     ",
            "  ^^^^^^^     ",
            "  ^^^^^       ",
            "  ^^^^^^^^^^^ ",
            "  ^^^^^^      ",
            "  ^^^^        "
        };
       
    
    int inc =1;
    char level = '1';
       
        for (size_t i = 0; i < mountain.size(); ++i)
        {
            for (size_t j = 0; j < mountain[i].size(); ++j){
           
        if ( i == 0 && mountain[i][j] == '^'){mountain[i][j] = '1';}
        if ( i == mountain.size()-1 && mountain[i][j] == '^'){mountain[i][j] = level;}
       
        if ( mountain[i][j] == '^' && isspace(mountain[i+1][j])){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i-1][j])){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i][j-1])){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i][j+1])){mountain[i][j] = level;}
            }
        }
        
        
           
    
    char hill = 2;
    bool dn0 = 0;
     bool dn1 = 0;
    
    
    int tob = -1;
    int bot = 0;
    
    while(tob != bot){ 
    for (size_t tv =0; tv<mountain.size(); tv++){
        for (size_t bt =0; bt<mountain[tv].size(); bt++){
        if (mountain[tv][bt] == '^' ){tob = tv; 
                                 for (size_t gt = mountain.size()-1;gt>0; gt--){ 
                                     for (size_t lt = mountain[gt].size();lt>0; lt--){ 
                                        if (mountain[gt][lt] == '^' ){dn0 = true; bot = gt;cout << "bottom = " << bot << "\n";break;}
                                                                                        }
            if (dn0  == true){break;}   
            }
        }
        if (tv == mountain.size() && bt == mountain[tv].size()){tob = 0; bot =0;}
        if (dn0  == true){dn1 = true;break;}    
        }
        if (dn1  == true){break;}
    }
    if(tob == bot){break;  }
    if (tob != bot){level++;}
        for(size_t v = 0; v< mountain[tob].size();v++){if (mountain[tob][v] == '^' ){mountain[tob][v] = level;}}
        for(size_t w = 0; w< mountain[bot].size();w++){if (mountain[bot][w] == '^' ){mountain[bot][w] = level;}}
    
    
          for (size_t o = 0; o < mountain.size(); ++o ){
                for (size_t l = 0; l < mountain[o].size(); ++l)
                {if (mountain[o][l] == '^' ){ 
                    mountain [o][l] = level;
                        for (size_t g = mountain[o].size();g > 0; --g)
                        {if (mountain[o][g] == '^' ){ 
                            mountain [o][g] = level;break;}} break;}
                }
            }
    
        //cout << "top= " << tob << " bottom= " << bot <<"\n\n";
    }                                                                                                            
    
    for (size_t v = 0; v < mountain.size(); ++v ){
            for (size_t u = 0; u < mountain[v].size(); ++u){ cout << mountain[v][u];}cout << "\n";}
          

    cout  << "\nHighest peak: ";
    
}


//ALMOS7 D0NE BIII DAF0K!?




// Example program
#include <iostream>
#include <string>
#include<vector>
using namespace std;


int main()
{
    unsigned sum = 0;
  vector<string> mountain = {
            "^^^^^^        ",
            " ^^^^^^^^     ",
            "  ^^^^^^^     ",
            "  ^^^^^       ",
            "  ^^^^^^^^^^^ ",
            "  ^^^^^^      ",
            "  ^^^^        "
        };
       
    
    int inc =1;
    char level = '1';
       
        for (size_t i = 0; i < mountain.size(); ++i)
        {
            for (size_t j = 0; j < mountain[i].size(); ++j){
           
        if ( i == 0 && mountain[i][j] == '^'){mountain[i][j] = '1';}
        if ( i == mountain.size()-1 && mountain[i][j] == '^'){mountain[i][j] = level;}
       
        if ( mountain[i][j] == '^' && isspace(mountain[i+1][j])){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i-1][j])){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i][j-1])){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i][j+1])){mountain[i][j] = level;}
            }
        }
        
        
           
    
    bool dn0 = 0;
    bool dn1 = 0;
    
    bool dd1 = 0;
    bool dd2 = 0;
    
    
    int tob = -1;
    int bot = 0;
    
    //while(tob != bot){ 
   for (size_t g = 0; g < mountain.size(); ++g){ if (dn0 == 1){break;}
                for (size_t q = 0; q < mountain[g].size(); ++q){
                    if (mountain[g][q] == '^' ){tob = g;
                                                dn0=1;
                                                cout << "top = " << tob;
                                                break;}                     }
                    
                
                if (g == mountain.size()-1 && dn0 == 0) {tob =0;break;}
            }
            
            
            
                        for (size_t g = mountain.size()-1;g>0; --g){if (dn1 == 1){break;}
                for (size_t q = mountain[g].size();q>0; --q){
                    if (mountain[g][q] == '^' ){bot = g;
                                                dn1 =1;
                                                cout << "bottom = " << bot<<endl;
                                                break;}                             } 
                    
                if (g == 1 && dn1 == 0) {bot =0;break;}
            }
    
    //if(tob == bot){break; cout << "okay!?"; }
    if (tob != bot){level++;}
        for(size_t v = 0; v< mountain[tob].size();v++){if (mountain[tob][v] == '^' ){mountain[tob][v] = level;}}
        for(size_t w = 0; w< mountain[bot].size();w++){if (mountain[bot][w] == '^' ){mountain[bot][w] = level;}}
        
    
    
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
            

          
            
    //cout << "loop count: ";
        //cout << "top= " << tob << " bottom= " << bot <<"\n\n";
    //if(tob == bot){cout << "WE GOOD \n";break;  }
        
                                                                                                             
    
    for (size_t v = 0; v < mountain.size(); ++v ){
            for (size_t u = 0; u < mountain[v].size(); ++u){ cout << mountain[v][u];}cout << "\n";}
          

    cout  << "\nHighest peak: ";
    
}


////
////
////
Weird


// Example program
#include <iostream>
#include <string>
#include<vector>
using namespace std;


int main()
{
    unsigned sum = 0;
  vector<string> mountain = {
"^^   ^^^  ^^",
"^ ^^  ^^^   ",
"  ^^^   ^^  ",
"    ^^ ^^   ",
"   ^  ^     ",
"    ^^      ",
" ^^^^^^^^   ",
"  ^^^^^^^^  ",
" ^^ ^^^   ^^",
"^^^    ^^ ^^",
"     ^^^^^^^",
};
       
    
    int inc =1;
    char level = '1';
       
        for (size_t i = 0; i < mountain.size(); ++i)
        {
            for (size_t j = 0; j < mountain[i].size(); ++j){
           
        if ( i == 0 && mountain[i][j] == '^'){mountain[i][j] = '1';}
        if ( i == mountain.size()-1 && mountain[i][j] == '^'){mountain[i][j] = level;}
       
        if ( mountain[i][j] == '^' && isspace(mountain[i+1][j])){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i-1][j])){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i][j-1])){mountain[i][j] = level;}
        if ( mountain[i][j] == '^' && isspace(mountain[i][j+1])){mountain[i][j] = level;}
            }
        }
        
        
           
    
    bool dn0 = 0;
    bool dn1 = 0;
    
    bool dd1 = 0;
    bool dd2 = 0;
    
    
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
          
            
    //cout << "loop count: ";
        //cout << "top= " << tob << " bottom= " << bot <<"\n\n";
    //if(tob == bot){cout << "WE GOOD \n";break;  }
        
                                                                                                             
    
    for (size_t v = 0; v < mountain.size(); ++v ){
            for (size_t u = 0; u < mountain[v].size(); ++u){ cout << mountain[v][u];}cout << "\n";}
          

    cout  << "\nHighest peak: " << level;
    
}
