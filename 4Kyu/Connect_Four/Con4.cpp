#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
   
    vector <string> pieces_position_list = {
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
   char sel = 'z';
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
   
   
   
 for (size_t i = 0 ; i < pieces_position_list.size(); i++){
       for (size_t j = 0 ; j < pieces_position_list[i].size(); j++){
       
       if (pieces_position_list[i][0] == 'A'){if (pieces_position_list[i][2] == 'R'){board[Alv][0] = 'X'; Alv--;
       if (board[Alv+2][0] == 'X'){if (board[Alv+3][0] == 'X'){if (board[Alv+4][0] == 'X'){sel = p1; ext=1;break;}}}
       if (board[Alv+2][0+2] == 'X'){if (board[Alv+3][0+3] == 'X'){if (board[Alv+4][0+4] == 'X'){sel = p1; ext=1;break;}}}
       if (board[Alv+2][0-2] == 'X'){if (board[Alv+3][0-3] == 'X'){if (board[Alv+4][0-4] == 'X'){sel = p1; ext=1;break;}}}
       
       }
       if (pieces_position_list[i][2] == 'Y'){board[Alv][0] = 'Y'; Alv--;
       if (board[Alv+2][0] == 'Y'){if (board[Alv+3][0] == 'Y'){if (board[Alv+4][0] == 'Y'){sel = p2; ext=1;break;}}}
       if (board[Alv+2][0+2] == 'Y'){if (board[Alv+3][0+3] == 'Y'){if (board[Alv+4][0+4] == 'Y'){sel = p2; ext=1;break;}}}
       if (board[Alv+2][0-2] == 'Y'){if (board[Alv+3][0-3] == 'Y'){if (board[Alv+4][0-4] == 'Y'){sel = p2; ext=1;break;}}}
       }
        break;}
       
       
       
       
       
       
       
       if (pieces_position_list[i][0] == 'B'){if (pieces_position_list[i][2] == 'R'){board[Blv][1] = 'X'; Blv--;
       if (board[Blv+2][1] == 'X'){if (board[Blv+3][1] == 'X'){if (board[Blv+4][1] == 'X'){sel = p1; ext=1;break;}}}
           
       }
       if (pieces_position_list[i][2] == 'Y'){board[Blv][1] = 'Y'; Blv--;
       if (board[Blv+2][1] == 'Y'){if (board[Blv+3][1] == 'Y'){if (board[Blv+4][1] == 'Y'){sel = p2; ext=1;break;}}}
           
       }
        break;}
       
       if (pieces_position_list[i][0] == 'C'){if (pieces_position_list[i][2] == 'R'){board[Clv][2] = 'X'; Clv--;
       if (board[Clv+2][2] == 'X'){if (board[Clv+3][2] == 'X'){if (board[Clv+4][2] == 'X'){sel = p1; ext=1;break;}}}
           
       }
       if (pieces_position_list[i][2] == 'Y'){board[Clv][2] = 'Y'; Clv--;
       if (board[Clv+2][2] == 'Y'){if (board[Clv+3][2] == 'Y'){if (board[Clv+4][2] == 'Y'){sel = p2; ext=1;break;}}}
           
       }
        break;}
       
       if (pieces_position_list[i][0] == 'D'){if (pieces_position_list[i][2] == 'R'){board[Dlv][3] = 'X'; Dlv--;
       if (board[Dlv+2][3] == 'X'){if (board[Dlv+3][3] == 'X'){if (board[Dlv+4][3] == 'X'){sel = p1; ext=1;break;}}}
           
       }
       if (pieces_position_list[i][2] == 'Y'){board[Dlv][3] = 'Y'; Dlv--;
       if (board[Dlv+2][3] == 'Y'){if (board[Dlv+3][3] == 'Y'){if (board[Dlv+4][3] == 'Y'){sel = p2; ext=1;break;}}}
           
       }
       break;}
       
       if (pieces_position_list[i][0] == 'E'){if (pieces_position_list[i][2] == 'R'){board[Elv][4] = 'X'; Elv--;
       if (board[Elv+2][4] == 'X'){if (board[Elv+3][4] == 'X'){if (board[Elv+4][4] == 'X'){sel = p1; ext=1;break;}}}
           
       }
       if (pieces_position_list[i][2] == 'Y'){board[Elv][4] = 'Y'; Elv--;
       if (board[Elv+2][4] == 'Y'){if (board[Elv+3][4] == 'Y'){if (board[Elv+4][4] == 'Y'){sel = p2; ext=1;break;}}}
           
       }
       break;}
       
       if (pieces_position_list[i][0] == 'F'){if (pieces_position_list[i][2] == 'R'){board[Flv][5] = 'X'; Flv--;
       if (board[Flv+2][5] == 'X'){if (board[Flv+3][5] == 'X'){if (board[Flv+4][5] == 'X'){sel = p1; ext=1;break;}}}
           
       }
       if (pieces_position_list[i][2] == 'Y'){board[Flv][5] = 'Y'; Flv--;
       if (board[Flv+2][5] == 'Y'){if (board[Flv+3][5] == 'Y'){if (board[Flv+4][5] == 'Y'){sel = p2; ext=1;break;}}}
           
       }
       break;}
       
       if (pieces_position_list[i][0] == 'G'){if (pieces_position_list[i][2] == 'R'){board[Glv][6] = 'X'; Glv--;
       if (board[Glv+2][6] == 'X'){if (board[Glv+3][6] == 'X'){if (board[Glv+4][6] == 'X'){sel = p1; ext=1;break;}}}
           
       }
       if (pieces_position_list[i][2] == 'Y'){board[Glv][6] = 'Y'; Glv--;
       if (board[Glv+2][6] == 'Y'){if (board[Glv+3][6] == 'Y'){if (board[Glv+4][6] == 'Y'){sel = p2; ext=1;break;}}}
           
       }
       break;}  
           
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
