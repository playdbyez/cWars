#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
   
    vector <string> pieces = {
                                "C_Yellow",
                "E_Red",
                "G_Yellow",
                "B_Red",
                "D_Yellow",
                "B_Red",
                "B_Yellow",
                "G_Red",
                "C_Yellow",
                "C_Red",
                "D_Yellow",
                "F_Red",
                "E_Yellow",
                "A_Red",
                "A_Yellow",
                "G_Red",
                "A_Yellow",
                "F_Red",
                "F_Yellow",
                "D_Red",
                "B_Yellow",
                "E_Red",
                "D_Yellow",
                "A_Red",
                "G_Yellow",
                "D_Red",
                "D_Yellow",
                "C_Red"
                                                     };
   
   
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
   
   
   
   for (size_t i = 0 ; i < pieces.size(); i++){
       for (size_t j = 0 ; j < pieces[i].size(); j++){
       
       if (pieces[i][0] == 'A'){
           if (pieces[i][2] == 'R'){board[Alv][0] = 'X'; Alv--; break;}
           if (pieces[i][2] == 'Y'){board[Alv][0] = 'Y'; Alv--;break;}    }
       if (pieces[i][0] == 'B'){
           if (pieces[i][2] == 'R'){board[Blv][1] = 'X'; Blv--;break;}
           if (pieces[i][2] == 'Y'){board[Blv][1] = 'Y'; Blv--;break;}    }
       if (pieces[i][0] == 'C'){
           if (pieces[i][2] == 'R'){board[Clv][2] = 'X'; Clv--;break;}
           if (pieces[i][2] == 'Y'){board[Clv][2] = 'Y'; Clv--;break;}    }
       if (pieces[i][0] == 'D'){
           if (pieces[i][2] == 'R'){board[Dlv][3] = 'X'; Dlv--;break;}
           if (pieces[i][2] == 'Y'){board[Dlv][3] = 'Y'; Dlv--;break;}    }
       if (pieces[i][0] == 'E'){
           if (pieces[i][2] == 'R'){board[Elv][4] = 'X'; Elv--;break;}
           if (pieces[i][2] == 'Y'){board[Elv][4] = 'Y'; Elv--;break;}    }  
       if (pieces[i][0] == 'F'){
           if (pieces[i][2] == 'R'){board[Flv][5] = 'X'; Flv--;break;}
           if (pieces[i][2] == 'Y'){board[Flv][5] = 'Y'; Flv--;break;}    }
       if (pieces[i][0] == 'G'){
           if (pieces[i][2] == 'R'){board[Glv][6] = 'X'; Glv--;break;}
           if (pieces[i][2] == 'Y'){board[Glv][6] = 'Y'; Glv--;break;}    }  
           
       }
   }
   
 for (int i = 0; i < tots; i++)
 {  cout << "\n";
    for (int j = 0; j < cols; j++)
    { 
        cout << board[i][j] << " ";
    } 
 }
    return 0;
}
