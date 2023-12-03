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





