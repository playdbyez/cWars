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
   
   
   
  for (size_t i = 0 ; i < pieces.size(); i++){ if (ext == 1){break;}
       for (size_t j = 0 ; j < pieces[i].size(); j++){
       
       if (pieces[i][0] == 'A'){if (pieces[i][2] == 'R'){board[Alv][0] = 'X'; Alv--;
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0; j < cols; j++){
                if ( board[i][j] == p1 || board[i][j] == p2){ sel = board[i][j];
                    if ( board[i+1][j] == sel){if ( board[i+2][j] == sel){if ( board[i+3][j] == sel){if ( board[i+4][j] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j+1] == sel){if ( board[i+2][j+2] == sel){if ( board[i+3][j+3] == sel){if ( board[i+4][j+4] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j-1] == sel){if ( board[i+2][j-2] == sel){if ( board[i+3][j-3] == sel){if ( board[i+4][j-4] == sel){ ext = 1; break;}}}}    
                    if ( board[i][j+1] == sel){if ( board[i][j+2] == sel){if ( board[i][j+3] == sel){if ( board[i][j+4] == sel){ ext = 1; break;}}}}   
                    }
     }
 }
       break;}
       if (pieces[i][2] == 'Y'){board[Alv][0] = 'Y'; Alv--;
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0; j < cols; j++){
                if ( board[i][j] == p1 || board[i][j] == p2){ sel = board[i][j];
                    if ( board[i+1][j] == sel){if ( board[i+2][j] == sel){if ( board[i+3][j] == sel){if ( board[i+4][j] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j+1] == sel){if ( board[i+2][j+2] == sel){if ( board[i+3][j+3] == sel){if ( board[i+4][j+4] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j-1] == sel){if ( board[i+2][j-2] == sel){if ( board[i+3][j-3] == sel){if ( board[i+4][j-4] == sel){ ext = 1; break;}}}}    
                    if ( board[i][j+1] == sel){if ( board[i][j+2] == sel){if ( board[i][j+3] == sel){if ( board[i][j+4] == sel){ ext = 1; break;}}}}   
                    }
     }
 }
       break;}    }
       
       
       
       if (pieces[i][0] == 'B'){if (pieces[i][2] == 'R'){board[Blv][1] = 'X'; Blv--;
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0; j < cols; j++){
                if ( board[i][j] == p1 || board[i][j] == p2){ sel = board[i][j];
                    if ( board[i+1][j] == sel){if ( board[i+2][j] == sel){if ( board[i+3][j] == sel){if ( board[i+4][j] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j+1] == sel){if ( board[i+2][j+2] == sel){if ( board[i+3][j+3] == sel){if ( board[i+4][j+4] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j-1] == sel){if ( board[i+2][j-2] == sel){if ( board[i+3][j-3] == sel){if ( board[i+4][j-4] == sel){ ext = 1; break;}}}}    
                    if ( board[i][j+1] == sel){if ( board[i][j+2] == sel){if ( board[i][j+3] == sel){if ( board[i][j+4] == sel){ ext = 1; break;}}}}  
                    }
     }
 }
       break;}
       if (pieces[i][2] == 'Y'){board[Blv][1] = 'Y'; Blv--;
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0; j < cols; j++){
                if ( board[i][j] == p1 || board[i][j] == p2){ sel = board[i][j];
                    if ( board[i+1][j] == sel){if ( board[i+2][j] == sel){if ( board[i+3][j] == sel){if ( board[i+4][j] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j+1] == sel){if ( board[i+2][j+2] == sel){if ( board[i+3][j+3] == sel){if ( board[i+4][j+4] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j-1] == sel){if ( board[i+2][j-2] == sel){if ( board[i+3][j-3] == sel){if ( board[i+4][j-4] == sel){ ext = 1; break;}}}}    
                    if ( board[i][j+1] == sel){if ( board[i][j+2] == sel){if ( board[i][j+3] == sel){if ( board[i][j+4] == sel){ ext = 1; break;}}}}   
                    }
     }
 }
       break;}    }
       
       
       
       if (pieces[i][0] == 'C'){if (pieces[i][2] == 'R'){board[Clv][2] = 'X'; Clv--;
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0; j < cols; j++){
                if ( board[i][j] == p1 || board[i][j] == p2){ sel = board[i][j];
                    if ( board[i+1][j] == sel){if ( board[i+2][j] == sel){if ( board[i+3][j] == sel){if ( board[i+4][j] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j+1] == sel){if ( board[i+2][j+2] == sel){if ( board[i+3][j+3] == sel){if ( board[i+4][j+4] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j-1] == sel){if ( board[i+2][j-2] == sel){if ( board[i+3][j-3] == sel){if ( board[i+4][j-4] == sel){ ext = 1; break;}}}}    
                    if ( board[i][j+1] == sel){if ( board[i][j+2] == sel){if ( board[i][j+3] == sel){if ( board[i][j+4] == sel){ ext = 1; break;}}}}   
                    }
     }
 }
       break;}
       if (pieces[i][2] == 'Y'){board[Clv][2] = 'Y'; Clv--;
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0; j < cols; j++){
                if ( board[i][j] == p1 || board[i][j] == p2){ sel = board[i][j];
                    if ( board[i+1][j] == sel){if ( board[i+2][j] == sel){if ( board[i+3][j] == sel){if ( board[i+4][j] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j+1] == sel){if ( board[i+2][j+2] == sel){if ( board[i+3][j+3] == sel){if ( board[i+4][j+4] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j-1] == sel){if ( board[i+2][j-2] == sel){if ( board[i+3][j-3] == sel){if ( board[i+4][j-4] == sel){ ext = 1; break;}}}}    
                    if ( board[i][j+1] == sel){if ( board[i][j+2] == sel){if ( board[i][j+3] == sel){if ( board[i][j+4] == sel){ ext = 1; break;}}}}   
                    }
     }
 }
       break;}    }
       
       
       
       if (pieces[i][0] == 'D'){if (pieces[i][2] == 'R'){board[Dlv][3] = 'X'; Dlv--;
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0; j < cols; j++){
                if ( board[i][j] == p1 || board[i][j] == p2){ sel = board[i][j];
                    if ( board[i+1][j] == sel){if ( board[i+2][j] == sel){if ( board[i+3][j] == sel){if ( board[i+4][j] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j+1] == sel){if ( board[i+2][j+2] == sel){if ( board[i+3][j+3] == sel){if ( board[i+4][j+4] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j-1] == sel){if ( board[i+2][j-2] == sel){if ( board[i+3][j-3] == sel){if ( board[i+4][j-4] == sel){ ext = 1; break;}}}}    
                    if ( board[i][j+1] == sel){if ( board[i][j+2] == sel){if ( board[i][j+3] == sel){if ( board[i][j+4] == sel){ ext = 1; break;}}}}  
                    }
     }
 }
       break;}
       if (pieces[i][2] == 'Y'){board[Dlv][3] = 'Y'; Dlv--;
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0; j < cols; j++){
                if ( board[i][j] == p1 || board[i][j] == p2){ sel = board[i][j];
                    if ( board[i+1][j] == sel){if ( board[i+2][j] == sel){if ( board[i+3][j] == sel){if ( board[i+4][j] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j+1] == sel){if ( board[i+2][j+2] == sel){if ( board[i+3][j+3] == sel){if ( board[i+4][j+4] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j-1] == sel){if ( board[i+2][j-2] == sel){if ( board[i+3][j-3] == sel){if ( board[i+4][j-4] == sel){ ext = 1; break;}}}}    
                    if ( board[i][j+1] == sel){if ( board[i][j+2] == sel){if ( board[i][j+3] == sel){if ( board[i][j+4] == sel){ ext = 1; break;}}}}   
                    }
     }
 }
       break;}    }
       
       
       
       if (pieces[i][0] == 'E'){if (pieces[i][2] == 'R'){board[Elv][4] = 'X'; Elv--;
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0; j < cols; j++){
                if ( board[i][j] == p1 || board[i][j] == p2){ sel = board[i][j];
                    if ( board[i+1][j] == sel){if ( board[i+2][j] == sel){if ( board[i+3][j] == sel){if ( board[i+4][j] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j+1] == sel){if ( board[i+2][j+2] == sel){if ( board[i+3][j+3] == sel){if ( board[i+4][j+4] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j-1] == sel){if ( board[i+2][j-2] == sel){if ( board[i+3][j-3] == sel){if ( board[i+4][j-4] == sel){ ext = 1; break;}}}}    
                    if ( board[i][j+1] == sel){if ( board[i][j+2] == sel){if ( board[i][j+3] == sel){if ( board[i][j+4] == sel){ ext = 1; break;}}}}  
                    }
     }
 }
       break;}
       if (pieces[i][2] == 'Y'){board[Elv][4] = 'Y'; Elv--;
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0; j < cols; j++){
                if ( board[i][j] == p1 || board[i][j] == p2){ sel = board[i][j];
                    if ( board[i+1][j] == sel){if ( board[i+2][j] == sel){if ( board[i+3][j] == sel){if ( board[i+4][j] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j+1] == sel){if ( board[i+2][j+2] == sel){if ( board[i+3][j+3] == sel){if ( board[i+4][j+4] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j-1] == sel){if ( board[i+2][j-2] == sel){if ( board[i+3][j-3] == sel){if ( board[i+4][j-4] == sel){ ext = 1; break;}}}}    
                    if ( board[i][j+1] == sel){if ( board[i][j+2] == sel){if ( board[i][j+3] == sel){if ( board[i][j+4] == sel){ ext = 1; break;}}}}   
                    }
     }
 }
       break;}    }  
       
       
       
       if (pieces[i][0] == 'F'){if (pieces[i][2] == 'R'){board[Flv][5] = 'X'; Flv--;
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0; j < cols; j++){
                if ( board[i][j] == p1 || board[i][j] == p2){ sel = board[i][j];
                    if ( board[i+1][j] == sel){if ( board[i+2][j] == sel){if ( board[i+3][j] == sel){if ( board[i+4][j] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j+1] == sel){if ( board[i+2][j+2] == sel){if ( board[i+3][j+3] == sel){if ( board[i+4][j+4] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j-1] == sel){if ( board[i+2][j-2] == sel){if ( board[i+3][j-3] == sel){if ( board[i+4][j-4] == sel){ ext = 1; break;}}}}    
                    if ( board[i][j+1] == sel){if ( board[i][j+2] == sel){if ( board[i][j+3] == sel){if ( board[i][j+4] == sel){ ext = 1; break;}}}}   
                    }
     }
 }
       break;}
       if (pieces[i][2] == 'Y'){board[Flv][5] = 'Y'; Flv--;
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0; j < cols; j++){
                if ( board[i][j] == p1 || board[i][j] == p2){ sel = board[i][j];
                    if ( board[i+1][j] == sel){if ( board[i+2][j] == sel){if ( board[i+3][j] == sel){if ( board[i+4][j] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j+1] == sel){if ( board[i+2][j+2] == sel){if ( board[i+3][j+3] == sel){if ( board[i+4][j+4] == sel){ ext = 1; break;}}}}
                    if (board[i+1][j-1] == sel){if ( board[i+2][j-2] == sel){if ( board[i+3][j-3] == sel){if ( board[i+4][j-4] == sel){ ext = 1; break;}}}}    
                    if ( board[i][j+1] == sel){if ( board[i][j+2] == sel){if ( board[i][j+3] == sel){if ( board[i][j+4] == sel){ ext = 1; break;}}}}  
                    }
     }
 }
       break;}    }
       
       
       
       if (pieces[i][0] == 'G'){if (pieces[i][2] == 'R'){board[Glv][6] = 'X'; Glv--;
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0; j < cols; j++){
                if ( board[i][j] == p1 || board[i][j] == p2){ sel = board[i][j];
                    if ( board[i+1][j] == sel){if ( board[i+2][j] == sel){if ( board[i+3][j] == sel){ ext = 1; break;}}}
                    if (board[i+1][j+1] == sel){if ( board[i+2][j+2] == sel){if ( board[i+3][j+3] == sel){ ext = 1; break;}}}
                    if (board[i+1][j-1] == sel){if ( board[i+2][j-2] == sel){if ( board[i+3][j-3] == sel){ ext = 1; break;}}}    
                    if ( board[i][j+1] == sel){if ( board[i][j+2] == sel){if ( board[i][j+3] == sel){ ext = 1; break;}}}   
                    }
     }
 }
       break;}if (pieces[i][2] == 'Y'){board[Glv][6] = 'Y'; Glv--;
        for (int i = 0; i < tots; i++) {  if (ext == 1){break;}
     for (int j = 0; j < cols; j++){
                if ( board[i][j] == p1 || board[i][j] == p2){ sel = board[i][j];
                    if ( board[i+1][j] == sel){if ( board[i+2][j] == sel){if ( board[i+3][j] == sel){ ext = 1; break;}}}
                    if (board[i+1][j+1] == sel){if ( board[i+2][j+2] == sel){if ( board[i+3][j+3] == sel){ ext = 1; break;}}}
                    if (board[i+1][j-1] == sel){if ( board[i+2][j-2] == sel){if ( board[i+3][j-3] == sel){ ext = 1; break;}}}    
                    if ( board[i][j+1] == sel){if ( board[i][j+2] == sel){if ( board[i][j+3] == sel){ ext = 1; break;}}}   
                    }
     }
 }
       break;}    }  
           
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
