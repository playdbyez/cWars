#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
   
    vector <string> pieces = {
                "A_Yellow",
                "B_Red",
                "B_Yellow",
                "C_Red",
                "G_Yellow",
                "C_Red",
                "C_Yellow",
                "D_Red",
                "G_Yellow",
                "D_Red",
                "G_Yellow",
                "D_Red",
                "F_Yellow",
                "E_Red",
                "D_Yellow"
                                                     };
   
   char p1 = 'X';
   char p2 = 'Y';
   char sel;
   bool ext = false;
   char board[6][7];
   
   int Alv = 5;
   int Blv = 5;
   int Clv = 5;
   int Dlv = 5;
   int Elv = 5;
   int Flv = 5;
   int Glv = 5;
   
   
   int cols = sizeof(board[0]);
   int tots = sizeof(board) /  cols;
   
   
   for (int i = 0; i < tots; i++) {  for (int j = 0; j < cols; j++){board [i][j] = 'O';}}
   
   
   
for (size_t i = 0 ; i < pieces.size(); i++){if (ext == 1){break;}
for (size_t j = 0 ; j < pieces[i].size(); j++){if (ext == 1){break;}
       
if (pieces[i][0] == 'A' && pieces[i][2] == 'R'){board[Alv][0] = 'X';
    for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0 ; j < cols; j++){
                    if ( board[i][j] == p1 && board[i+1][j] == p1 ) { if(board[i+2][j] == p1 && board[i+3][j] == p1){ ext = 1;sel = p1; break;}}
                    if ( board[i][j] == p1 && board[i-1][j] == p1 ) { if(board[i-2][j] == p1 && board[i-3][j] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i+1][j+1] == p1){ if(board[i+2][j+2] == p1 &&  board[i+3][j+3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i+1][j-1] == p1){if ( board[i+2][j-2] == p1 && board[i+3][j-3] == p1){ ext = 1;sel = p1; break;}}    
                    if (board[i][j] == p1 && board[i][j+1] == p1){if ( board[i][j+2] == p1 && board[i][j+3] == p1){ ext = 1; sel = p1; break;}}
                    if (board[i][j] == p1 && board[i][j-1] == p1){if ( board[i][j-2] == p1 && board[i][j-3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i-1][j+1] == p1){if ( board[i-2][j+2] == p1 && board[i-3][j+3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i-1][j-1] == p1){if ( board[i-2][j-2] == p1 && board[i-3][j-3] == p1){ ext = 1;sel = p1; break;}}
                    }
     } Alv--;break; }
       
       
if (pieces[i][0] == 'A' && pieces[i][2] == 'Y'){board[Alv][0] = 'Y'; 
    for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0 ; j < cols; j++){
                    if ( board[i][j] == p2 && board[i+1][j] == p2 ) { if(board[i+2][j] == p2 && board[i+3][j] == p2)            { ext = 1;sel = p2; break;}}
                    if ( board[i][j] == p2 && board[i-1][j] == p2 ) { if(board[i-2][j] == p2 && board[i-3][j] == p2)            { ext = 1;sel = p2; break;}}
                    if (board[i][j] == p2 && board[i+1][j+1] == p2) {if(board[i+2][j+2] == p2 && board[i+3][j+3] == p2)     { ext = 1;sel = p2; break;}}
                    if (board[i][j] == p2 && board[i+1][j-1] == p2) {if ( board[i+2][j-2] == p2 && board[i+3][j-3] == p2)   { ext = 1;sel = p2; break;}}    
                    if (board[i][j] == p2 && board[i][j+1] == p2)   {if ( board[i][j+2] == p2 && board[i][j+3] == p2)       { ext = 1; sel = p2; break;}}
                    if (board[i][j] == p2 && board[i][j-1] == p2)   {if ( board[i][j-2] == p2 && board[i][j-3] == p2)       { ext = 1;sel = p2; break;}}
                    if (board[i][j] == p2 && board[i-1][j+1] == p2){if ( board[i-2][j+2] == p2 && board[i-3][j+3] == p2){ ext = 1;sel = p2; break;}}
                    if (board[i][j] == p2 && board[i-1][j-1] == p2){if ( board[i-2][j-2] == p2 && board[i-3][j-3] == p2){ ext = 1;sel = p2; break;}}
                    }
     } Alv--;break; }       
       
       

       if (pieces[i][0] == 'B' && pieces[i][2] == 'R'){board[Blv][1] = 'X'; 
       for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0 ; j < cols; j++){
                    if ( board[i][j] == p1 && board[i+1][j] == p1 ) { if(board[i+2][j] == p1 && board[i+3][j] == p1){ ext = 1;sel = p1; break;}}
                    if ( board[i][j] == p1 && board[i-1][j] == p1 ) { if(board[i-2][j] == p1 && board[i-3][j] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i+1][j+1] == p1){ if(board[i+2][j+2] == p1 &&  board[i+3][j+3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i+1][j-1] == p1){if ( board[i+2][j-2] == p1 && board[i+3][j-3] == p1){ ext = 1;sel = p1; break;}}    
                    if (board[i][j] == p1 && board[i][j+1] == p1){if ( board[i][j+2] == p1 && board[i][j+3] == p1){ ext = 1; sel = p1; break;}}
                    if (board[i][j] == p1 && board[i][j-1] == p1){if ( board[i][j-2] == p1 && board[i][j-3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i-1][j+1] == p1){if ( board[i-2][j+2] == p1 && board[i-3][j+3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i-1][j-1] == p1){if ( board[i-2][j-2] == p1 && board[i-3][j-3] == p1){ ext = 1;sel = p1; break;}}
                    }
       }Blv--;break;}
       
       if (pieces[i][0] == 'B' && pieces[i][2] == 'Y'){board[Blv][1] = 'Y';
       for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0 ; j < cols; j++){
                    if ( board[i][j] == p2 && board[i+1][j] == p2 ) { if(board[i+2][j] == p2 && board[i+3][j] == p2)            { ext = 1;sel = p2; break;}}
                    if ( board[i][j] == p2 && board[i-1][j] == p2 ) { if(board[i-2][j] == p2 && board[i-3][j] == p2)            { ext = 1;sel = p2; break;}}
                    if (board[i][j] == p2 && board[i+1][j+1] == p2) {if(board[i+2][j+2] == p2 && board[i+3][j+3] == p2)     { ext = 1;sel = p2; break;}}
                    if (board[i][j] == p2 && board[i+1][j-1] == p2) {if ( board[i+2][j-2] == p2 && board[i+3][j-3] == p2)   { ext = 1;sel = p2; break;}}    
                    if (board[i][j] == p2 && board[i][j+1] == p2)   {if ( board[i][j+2] == p2 && board[i][j+3] == p2)       { ext = 1; sel = p2; break;}}
                    if (board[i][j] == p2 && board[i][j-1] == p2)   {if ( board[i][j-2] == p2 && board[i][j-3] == p2)       { ext = 1;sel = p2; break;}}
                    if (board[i][j] == p2 && board[i-1][j+1] == p2){if ( board[i-2][j+2] == p2 && board[i-3][j+3] == p2){ ext = 1;sel = p2; break;}}
                    if (board[i][j] == p2 && board[i-1][j-1] == p2){if ( board[i-2][j-2] == p2 && board[i-3][j-3] == p2){ ext = 1;sel = p2; break;}}
                    }
       }Blv--;break;}
       
       
       
       
       
       
       
       if (pieces[i][0] == 'C' && pieces[i][2] == 'R'){board[Clv][2] = 'X';
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0 ; j < cols; j++){
                    if ( board[i][j] == p1 && board[i+1][j] == p1 ) { if(board[i+2][j] == p1 && board[i+3][j] == p1){ ext = 1;sel = p1; break;}}
                    if ( board[i][j] == p1 && board[i-1][j] == p1 ) { if(board[i-2][j] == p1 && board[i-3][j] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i+1][j+1] == p1){ if(board[i+2][j+2] == p1 &&  board[i+3][j+3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i+1][j-1] == p1){if ( board[i+2][j-2] == p1 && board[i+3][j-3] == p1){ ext = 1;sel = p1; break;}}    
                    if (board[i][j] == p1 && board[i][j+1] == p1){if ( board[i][j+2] == p1 && board[i][j+3] == p1){ ext = 1; sel = p1; break;}}
                    if (board[i][j] == p1 && board[i][j-1] == p1){if ( board[i][j-2] == p1 && board[i][j-3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i-1][j+1] == p1){if ( board[i-2][j+2] == p1 && board[i-3][j+3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i-1][j-1] == p1){if ( board[i-2][j-2] == p1 && board[i-3][j-3] == p1){ ext = 1;sel = p1; break;}}
                    }
       }Clv--;break;}
       
       if (pieces[i][0] == 'C' && pieces[i][2] == 'Y'){board[Clv][2] = 'Y';
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0 ; j < cols; j++){
                    if ( board[i][j] == p2 && board[i+1][j] == p2 ) { if(board[i+2][j] == p2 && board[i+3][j] == p2){ ext = 1;sel = p1; break;}}
                    if ( board[i][j] == p2 && board[i-1][j] == p2 ) { if(board[i-2][j] == p2 && board[i-3][j] == p2){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p2 && board[i+1][j+1] == p2){ if(board[i+2][j+2] == p2 &&  board[i+3][j+3] == p2){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p2 && board[i+1][j-1] == p2){if ( board[i+2][j-2] == p2 && board[i+3][j-3] == p2){ ext = 1;sel = p1; break;}}    
                    if (board[i][j] == p2 && board[i][j+1] == p2){if ( board[i][j+2] == p2 && board[i][j+3] == p2){ ext = 1; sel = p1; break;}}
                    if (board[i][j] == p2 && board[i][j-1] == p2){if ( board[i][j-2] == p2 && board[i][j-3] == p2){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p2 && board[i-1][j+1] == p2){if ( board[i-2][j+2] == p2 && board[i-3][j+3] == p2){ ext = 1;sel = p2; break;}}
                    if (board[i][j] == p2 && board[i-1][j-1] == p2){if ( board[i-2][j-2] == p2 && board[i-3][j-3] == p2){ ext = 1;sel = p2; break;}}
                    }
       }Clv--;break;}
       
       
       
       if (pieces[i][0] == 'D' && pieces[i][2] == 'R'){board[Dlv][3] = 'X';
       for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0 ; j < cols; j++){
                    if ( board[i][j] == p1 && board[i+1][j] == p1 ) { if(board[i+2][j] == p1 && board[i+3][j] == p1){ ext = 1;sel = p1; break;}}
                    if ( board[i][j] == p1 && board[i-1][j] == p1 ) { if(board[i-2][j] == p1 && board[i-3][j] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i+1][j+1] == p1){ if(board[i+2][j+2] == p1 &&  board[i+3][j+3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i+1][j-1] == p1){if ( board[i+2][j-2] == p1 && board[i+3][j-3] == p1){ ext = 1;sel = p1; break;}}    
                    if (board[i][j] == p1 && board[i][j+1] == p1){if ( board[i][j+2] == p1 && board[i][j+3] == p1){ ext = 1; sel = p1; break;}}
                    if (board[i][j] == p1 && board[i][j-1] == p1){if ( board[i][j-2] == p1 && board[i][j-3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i-1][j+1] == p1){if ( board[i-2][j+2] == p1 && board[i-3][j+3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i-1][j-1] == p1){if ( board[i-2][j-2] == p1 && board[i-3][j-3] == p1){ ext = 1;sel = p1; break;}}
                    }
       }Dlv--;break;}
       
       if (pieces[i][0] == 'D' && pieces[i][2] == 'Y'){board[Dlv][3] = 'Y'; 
       for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0 ; j < cols; j++){
                    if ( board[i][j] == p2 && board[i+1][j] == p2 ) { if(board[i+2][j] == p2 && board[i+3][j] == p2){ ext = 1;sel = p1; break;}}
                    if ( board[i][j] == p2 && board[i-1][j] == p2 ) { if(board[i-2][j] == p2 && board[i-3][j] == p2){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p2 && board[i+1][j+1] == p2){ if(board[i+2][j+2] == p2 &&  board[i+3][j+3] == p2){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p2 && board[i+1][j-1] == p2){if ( board[i+2][j-2] == p2 && board[i+3][j-3] == p2){ ext = 1;sel = p1; break;}}    
                    if (board[i][j] == p2 && board[i][j+1] == p2){if ( board[i][j+2] == p2 && board[i][j+3] == p2){ ext = 1; sel = p1; break;}}
                    if (board[i][j] == p2 && board[i][j-1] == p2){if ( board[i][j-2] == p2 && board[i][j-3] == p2){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p2 && board[i-1][j+1] == p2){if ( board[i-2][j+2] == p2 && board[i-3][j+3] == p2){ ext = 1;sel = p2; break;}}
                    if (board[i][j] == p2 && board[i-1][j-1] == p2){if ( board[i-2][j-2] == p2 && board[i-3][j-3] == p2){ ext = 1;sel = p2; break;}}
                    }
       }Dlv--;break;}
       
       
       
       if (pieces[i][0] == 'E' && pieces[i][2] == 'R'){board[Elv][4] = 'X'; 
       for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0 ; j < cols; j++){
                    if ( board[i][j] == p1 && board[i+1][j] == p1 ) { if(board[i+2][j] == p1 && board[i+3][j] == p1){ ext = 1;sel = p1; break;}}
                    if ( board[i][j] == p1 && board[i-1][j] == p1 ) { if(board[i-2][j] == p1 && board[i-3][j] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i+1][j+1] == p1){ if(board[i+2][j+2] == p1 &&  board[i+3][j+3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i+1][j-1] == p1){if ( board[i+2][j-2] == p1 && board[i+3][j-3] == p1){ ext = 1;sel = p1; break;}}    
                    if (board[i][j] == p1 && board[i][j+1] == p1){if ( board[i][j+2] == p1 && board[i][j+3] == p1){ ext = 1; sel = p1; break;}}
                    if (board[i][j] == p1 && board[i][j-1] == p1){if ( board[i][j-2] == p1 && board[i][j-3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i-1][j+1] == p1){if ( board[i-2][j+2] == p1 && board[i-3][j+3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i-1][j-1] == p1){if ( board[i-2][j-2] == p1 && board[i-3][j-3] == p1){ ext = 1;sel = p1; break;}}
                    }
       }Elv--;break;}
       if (pieces[i][2] == 'Y'){board[Elv][4] = 'Y'; 
       for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0 ; j < cols; j++){
                    if ( board[i][j] == p2 && board[i+1][j] == p2 ) { if(board[i+2][j] == p2 && board[i+3][j] == p2){ ext = 1;sel = p1; break;}}
                    if ( board[i][j] == p2 && board[i-1][j] == p2 ) { if(board[i-2][j] == p2 && board[i-3][j] == p2){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p2 && board[i+1][j+1] == p2){ if(board[i+2][j+2] == p2 &&  board[i+3][j+3] == p2){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p2 && board[i+1][j-1] == p2){if ( board[i+2][j-2] == p2 && board[i+3][j-3] == p2){ ext = 1;sel = p1; break;}}    
                    if (board[i][j] == p2 && board[i][j+1] == p2){if ( board[i][j+2] == p2 && board[i][j+3] == p2){ ext = 1; sel = p1; break;}}
                    if (board[i][j] == p2 && board[i][j-1] == p2){if ( board[i][j-2] == p2 && board[i][j-3] == p2){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p2 && board[i-1][j+1] == p2){if ( board[i-2][j+2] == p2 && board[i-3][j+3] == p2){ ext = 1;sel = p2; break;}}
                    if (board[i][j] == p2 && board[i-1][j-1] == p2){if ( board[i-2][j-2] == p2 && board[i-3][j-3] == p2){ ext = 1;sel = p2; break;}}
                    }
       }Elv--;break;}
       
       if (pieces[i][0] == 'F' && pieces[i][2] == 'R'){board[Flv][5] = 'X';
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0 ; j < cols; j++){
                    if ( board[i][j] == p1 && board[i+1][j] == p1 ) { if(board[i+2][j] == p1 && board[i+3][j] == p1){ ext = 1;sel = p1; break;}}
                    if ( board[i][j] == p1 && board[i-1][j] == p1 ) { if(board[i-2][j] == p1 && board[i-3][j] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i+1][j+1] == p1){ if(board[i+2][j+2] == p1 &&  board[i+3][j+3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i+1][j-1] == p1){if ( board[i+2][j-2] == p1 && board[i+3][j-3] == p1){ ext = 1;sel = p1; break;}}    
                    if (board[i][j] == p1 && board[i][j+1] == p1){if ( board[i][j+2] == p1 && board[i][j+3] == p1){ ext = 1; sel = p1; break;}}
                    if (board[i][j] == p1 && board[i][j-1] == p1){if ( board[i][j-2] == p1 && board[i][j-3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i-1][j+1] == p1){if ( board[i-2][j+2] == p1 && board[i-3][j+3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i-1][j-1] == p1){if ( board[i-2][j-2] == p1 && board[i-3][j-3] == p1){ ext = 1;sel = p1; break;}}
                    }
       }Flv--;break;}
       if (pieces[i][0] == 'F' && pieces[i][2] == 'Y'){board[Flv][5] = 'Y'; 
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0 ; j < cols; j++){
                    if ( board[i][j] == p2 && board[i+1][j] == p2 ) { if(board[i+2][j] == p2 && board[i+3][j] == p2){ ext = 1;sel = p1; break;}}
                    if ( board[i][j] == p2 && board[i-1][j] == p2 ) { if(board[i-2][j] == p2 && board[i-3][j] == p2){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p2 && board[i+1][j+1] == p2){ if(board[i+2][j+2] == p2 &&  board[i+3][j+3] == p2){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p2 && board[i+1][j-1] == p2){if ( board[i+2][j-2] == p2 && board[i+3][j-3] == p2){ ext = 1;sel = p1; break;}}    
                    if (board[i][j] == p2 && board[i][j+1] == p2){if ( board[i][j+2] == p2 && board[i][j+3] == p2){ ext = 1; sel = p1; break;}}
                    if (board[i][j] == p2 && board[i][j-1] == p2){if ( board[i][j-2] == p2 && board[i][j-3] == p2){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p2 && board[i-1][j+1] == p2){if ( board[i-2][j+2] == p2 && board[i-3][j+3] == p2){ ext = 1;sel = p2; break;}}
                    if (board[i][j] == p2 && board[i-1][j-1] == p2){if ( board[i-2][j-2] == p2 && board[i-3][j-3] == p2){ ext = 1;sel = p2; break;}}
                    }
       }Flv--;break;}
       
       if (pieces[i][0] == 'G' && pieces[i][2] == 'R'){board[Glv][6] = 'X';
       for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0 ; j < cols; j++){
                    if ( board[i][j] == p1 && board[i+1][j] == p1 ) { if(board[i+2][j] == p1 && board[i+3][j] == p1){ ext = 1;sel = p1; break;}}
                    if ( board[i][j] == p1 && board[i-1][j] == p1 ) { if(board[i-2][j] == p1 && board[i-3][j] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i+1][j+1] == p1){ if(board[i+2][j+2] == p1 &&  board[i+3][j+3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i+1][j-1] == p1){if ( board[i+2][j-2] == p1 && board[i+3][j-3] == p1){ ext = 1;sel = p1; break;}}    
                    if (board[i][j] == p1 && board[i][j+1] == p1){if ( board[i][j+2] == p1 && board[i][j+3] == p1){ ext = 1; sel = p1; break;}}
                    if (board[i][j] == p1 && board[i][j-1] == p1){if ( board[i][j-2] == p1 && board[i][j-3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i-1][j+1] == p1){if ( board[i-2][j+2] == p1 && board[i-3][j+3] == p1){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p1 && board[i-1][j-1] == p1){if ( board[i-2][j-2] == p1 && board[i-3][j-3] == p1){ ext = 1;sel = p1; break;}}
                    }
       }Glv--;break;}
       if (pieces[i][2] == 'Y'){board[Glv][6] = 'Y'; 
       for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0 ; j < cols; j++){
                    if ( board[i][j] == p2 && board[i+1][j] == p2 ) { if(board[i+2][j] == p2 && board[i+3][j] == p2){ ext = 1;sel = p1; break;}}
                    if ( board[i][j] == p2 && board[i-1][j] == p2 ) { if(board[i-2][j] == p2 && board[i-3][j] == p2){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p2 && board[i+1][j+1] == p2){ if(board[i+2][j+2] == p2 &&  board[i+3][j+3] == p2){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p2 && board[i+1][j-1] == p2){if ( board[i+2][j-2] == p2 && board[i+3][j-3] == p2){ ext = 1;sel = p1; break;}}    
                    if (board[i][j] == p2 && board[i][j+1] == p2){if ( board[i][j+2] == p2 && board[i][j+3] == p2){ ext = 1; sel = p1; break;}}
                    if (board[i][j] == p2 && board[i][j-1] == p2){if ( board[i][j-2] == p2 && board[i][j-3] == p2){ ext = 1;sel = p1; break;}}
                    if (board[i][j] == p2 && board[i-1][j+1] == p2){if ( board[i-2][j+2] == p2 && board[i-3][j+3] == p2){ ext = 1;sel = p2; break;}}
                    if (board[i][j] == p2 && board[i-1][j-1] == p2){if ( board[i-2][j-2] == p2 && board[i-3][j-3] == p2){ ext = 1;sel = p2; break;}}
                    }
       }Glv--;break;}  
           
       }
   }

 //Print GameBoard
 for (int i = 0; i < tots; i++)
 {  cout << "\n";
    for (int j = 0; j < cols; j++)
    { 
        cout << board[i][j] << " ";
    } 
 }
 cout <<endl << endl;
 
     if (sel == p2){cout << "Yellow wins!"<<endl;}
     if (sel == p1){cout << "Red wins!"<<endl;}
     if (sel != p1 && sel != p2) {cout << "Tie-Game!" <<endl;}
 
   
}
