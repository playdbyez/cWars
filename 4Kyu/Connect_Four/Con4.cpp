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
   int inc = 0;
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
   
   
   
 for (size_t i = 0 ; i < pieces_position_list.size(); i++){if(ext == 1){break;}
       for (size_t j = 0 ; j < pieces_position_list[i].size(); j++){
       
   if (pieces_position_list[i][0] == 'A'){if (pieces_position_list[i][2] == 'R'){board[Alv][0] = 'X';
 if (board[Alv-1][inc] == p1){if (board[Alv-2][inc] == p1){if (board[Alv-3][inc] == p1){sel = p1; ext=1;break;}}}
 if (board[Alv+1][inc] == p1){if (board[Alv+2][inc] == p1){if (board[Alv+3][inc] == p1){sel = p1; ext=1;break;}}}
 if (board[Alv][inc+1] == p1){if (board[Alv][inc+2] == p1){if (board[Alv][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Alv][inc-1] == p1){if (board[Alv][inc-2] == p1){if (board[Alv][inc-3] == p1){sel = p1; ext=1;break;}}}
 if (board[Alv+1][inc+1] == p1){if (board[Alv+2][inc+2] == p1){if (board[Alv+3][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Alv-1][inc+1] == p1){if (board[Alv-2][inc+2] == p1){if (board[Alv-3][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Alv+1][inc-1]== p1){if (board[Alv+2][inc-2] == p1){if (board[Alv+3][inc-3] == p1){sel = p1; ext=1;break;}}}
 if (board[Alv-1][inc-1]== p1){if (board[Alv-2][inc-2] == p1){if (board[Alv-3][inc-3] == p1){sel = p1; ext=1;break;}}}
 if(ext == 1){break;}                                                                             
 Alv--;}
                                          
 if (pieces_position_list[i][2] == 'Y'){board[Alv][0] = 'Y';
 if (board[Alv-1][inc] == p2){if (board[Alv-2][inc] == p2){if (board[Alv-3][inc] == p2){sel = p2; ext=1;break;}}}
 if (board[Alv+1][inc] == p2){if (board[Alv+2][inc] == p2){if (board[Alv+3][inc] == p2){sel = p2; ext=1;break;}}}
 if (board[Alv][inc+1] == p2){if (board[Alv][inc+2] == p2){if (board[Alv][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Alv][inc-1] == p2){if (board[Alv][inc-2] == p2){if (board[Alv][inc-3] == p2){sel = p2; ext=1;break;}}}
 if (board[Alv+1][inc+1] == p2){if (board[Alv+2][inc+2] == p2){if (board[Alv+3][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Alv-1][inc+1] == p2){if (board[Alv-2][inc+2] == p2){if (board[Alv-3][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Alv+1][inc-1] == p2){if (board[Alv+2][inc-2] == p2){if (board[Alv+3][inc-3] == p2){sel = p2; ext=1;break;}}}
 if (board[Alv-1][inc-1] == p2){if (board[Alv-2][inc-2] == p2){if (board[Alv-3][inc-3] == p2){sel = p2; ext=1;break;}}}
 if(ext == 1){break;}
 Alv--;}
 break;}



if (pieces_position_list[i][0] == 'B'){if (pieces_position_list[i][2] == 'R'){board[Blv][1] = 'X';
 if (board[Blv-1][inc] == p1){if (board[Blv-2][inc] == p1){if (board[Blv-3][inc] == p1){sel = p1; ext=1;break;}}}
 if (board[Blv+1][inc] == p1){if (board[Blv+2][inc] == p1){if (board[Blv+3][inc] == p1){sel = p1; ext=1;break;}}}
 if (board[Blv][inc+1] == p1){if (board[Blv][inc+2] == p1){if (board[Blv][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Blv][inc-1] == p1){if (board[Blv][inc-2] == p1){if (board[Blv][inc-3] == p1){sel = p1; ext=1;break;}}}
 if (board[Blv+1][inc+1] == p1){if (board[Blv+2][inc+2] == p1){if (board[Blv+3][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Blv-1][inc+1] == p1){if (board[Blv-2][inc+2] == p1){if (board[Blv-3][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Blv+1][inc-1]== p1){if (board[Blv+2][inc-2] == p1){if (board[Blv+3][inc-3] == p1){sel = p1; ext=1;break;}}}
 if (board[Blv-1][inc-1]== p1){if (board[Blv-2][inc-2] == p1){if (board[Blv-3][inc-3] == p1){sel = p1; ext=1;break;}}}
 
 if(ext == 1){break;}
 Blv--;}
 if (pieces_position_list[i][2] == 'Y'){board[Blv][1] = 'Y';
 if (board[Blv-1][inc] == p2){if (board[Blv-2][inc] == p2){if (board[Blv-3][inc] == p2){sel = p2; ext=1;break;}}}
 if (board[Blv+1][inc] == p2){if (board[Blv+2][inc] == p2){if (board[Blv+3][inc] == p2){sel = p2; ext=1;break;}}}
 if (board[Blv][inc+1] == p2){if (board[Blv][inc+2] == p2){if (board[Blv][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Blv][inc-1] == p2){if (board[Blv][inc-2] == p2){if (board[Blv][inc-3] == p2){sel = p2; ext=1;break;}}}
 if (board[Blv+1][inc+1] == p2){if (board[Blv+2][inc+2] == p2){if (board[Blv+3][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Blv-1][inc+1] == p2){if (board[Blv-2][inc+2] == p2){if (board[Blv-3][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Blv+1][inc-1] == p2){if (board[Blv+2][inc-2] == p2){if (board[Blv+3][inc-3] == p2){sel = p2; ext=1;break;}}}
 if (board[Blv-1][inc-1] == p2){if (board[Blv-2][inc-2] == p2){if (board[Blv-3][inc-3] == p2){sel = p2; ext=1;break;}}}
 if(ext == 1){break;}
 Blv--;}
 break;}



if (pieces_position_list[i][0] == 'C'){if (pieces_position_list[i][2] == 'R'){board[Clv][2] = 'X';
 if (board[Clv-1][inc] == p1){if (board[Clv-2][inc] == p1){if (board[Clv-3][inc] == p1){sel = p1; ext=1;break;}}}
 if (board[Clv+1][inc] == p1){if (board[Clv+2][inc] == p1){if (board[Clv+3][inc] == p1){sel = p1; ext=1;break;}}}
 if (board[Clv][inc+1] == p1){if (board[Clv][inc+2] == p1){if (board[Clv][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Clv][inc-1] == p1){if (board[Clv][inc-2] == p1){if (board[Clv][inc-3] == p1){sel = p1; ext=1;break;}}}
 if (board[Clv+1][inc+1] == p1){if (board[Clv+2][inc+2] == p1){if (board[Clv+3][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Clv-1][inc+1] == p1){if (board[Clv-2][inc+2] == p1){if (board[Clv-3][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Clv+1][inc-1]== p1){if (board[Clv+2][inc-2] == p1){if (board[Clv+3][inc-3] == p1){sel = p1; ext=1;break;}}}
 if (board[Clv-1][inc-1]== p1){if (board[Clv-2][inc-2] == p1){if (board[Clv-3][inc-3] == p1){sel = p1; ext=1;break;}}}
 
 if(ext == 1){break;}
 Clv--;}
 if (pieces_position_list[i][2] == 'Y'){board[Clv][2] = 'Y';
 if (board[Clv-1][inc] == p2){if (board[Clv-2][inc] == p2){if (board[Clv-3][inc] == p2){sel = p2; ext=1;break;}}}
 if (board[Clv+1][inc] == p2){if (board[Clv+2][inc] == p2){if (board[Clv+3][inc] == p2){sel = p2; ext=1;break;}}}
 if (board[Clv][inc+1] == p2){if (board[Clv][inc+2] == p2){if (board[Clv][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Clv][inc-1] == p2){if (board[Clv][inc-2] == p2){if (board[Clv][inc-3] == p2){sel = p2; ext=1;break;}}}
 if (board[Clv+1][inc+1] == p2){if (board[Clv+2][inc+2] == p2){if (board[Clv+3][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Clv-1][inc+1] == p2){if (board[Clv-2][inc+2] == p2){if (board[Clv-3][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Clv+1][inc-1] == p2){if (board[Clv+2][inc-2] == p2){if (board[Clv+3][inc-3] == p2){sel = p2; ext=1;break;}}}
 if (board[Clv-1][inc-1] == p2){if (board[Clv-2][inc-2] == p2){if (board[Clv-3][inc-3] == p2){sel = p2; ext=1;break;}}}
 if(ext == 1){break;}
 Clv--;}
 break;}



if (pieces_position_list[i][0] == 'D'){if (pieces_position_list[i][2] == 'R'){board[Dlv][3] = 'X';
 if (board[Dlv-1][inc] == p1){if (board[Dlv-2][inc] == p1){if (board[Dlv-3][inc] == p1){sel = p1; ext=1;break;}}}
 if (board[Dlv+1][inc] == p1){if (board[Dlv+2][inc] == p1){if (board[Dlv+3][inc] == p1){sel = p1; ext=1;break;}}}
 if (board[Dlv][inc+1] == p1){if (board[Dlv][inc+2] == p1){if (board[Dlv][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Dlv][inc-1] == p1){if (board[Dlv][inc-2] == p1){if (board[Dlv][inc-3] == p1){sel = p1; ext=1;break;}}}
 if (board[Dlv+1][inc+1] == p1){if (board[Dlv+2][inc+2] == p1){if (board[Dlv+3][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Dlv-1][inc+1] == p1){if (board[Dlv-2][inc+2] == p1){if (board[Dlv-3][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Dlv+1][inc-1]== p1){if (board[Dlv+2][inc-2] == p1){if (board[Dlv+3][inc-3] == p1){sel = p1; ext=1;break;}}}
 if (board[Dlv-1][inc-1]== p1){if (board[Dlv-2][inc-2] == p1){if (board[Dlv-3][inc-3] == p1){sel = p1; ext=1;break;}}}
 
 if(ext == 1){break;}
 Dlv--;}
 if (pieces_position_list[i][2] == 'Y'){board[Dlv][3] = 'Y';
 if (board[Dlv-1][inc] == p2){if (board[Dlv-2][inc] == p2){if (board[Dlv-3][inc] == p2){sel = p2; ext=1;break;}}}
 if (board[Dlv+1][inc] == p2){if (board[Dlv+2][inc] == p2){if (board[Dlv+3][inc] == p2){sel = p2; ext=1;break;}}}
 if (board[Dlv][inc+1] == p2){if (board[Dlv][inc+2] == p2){if (board[Dlv][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Dlv][inc-1] == p2){if (board[Dlv][inc-2] == p2){if (board[Dlv][inc-3] == p2){sel = p2; ext=1;break;}}}
 if (board[Dlv+1][inc+1] == p2){if (board[Dlv+2][inc+2] == p2){if (board[Dlv+3][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Dlv-1][inc+1] == p2){if (board[Dlv-2][inc+2] == p2){if (board[Dlv-3][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Dlv+1][inc-1] == p2){if (board[Dlv+2][inc-2] == p2){if (board[Dlv+3][inc-3] == p2){sel = p2; ext=1;break;}}}
 if (board[Dlv-1][inc-1] == p2){if (board[Dlv-2][inc-2] == p2){if (board[Dlv-3][inc-3] == p2){sel = p2; ext=1;break;}}}
 if(ext == 1){break;}
 Dlv--;}
 break;}



if (pieces_position_list[i][0] == 'E'){if (pieces_position_list[i][2] == 'R'){board[Elv][4] = 'X'; 
 if (board[Elv-1][inc] == p1){if (board[Elv-2][inc] == p1){if (board[Elv-3][inc] == p1){sel = p1; ext=1;break;}}}
 if (board[Elv+1][inc] == p1){if (board[Elv+2][inc] == p1){if (board[Elv+3][inc] == p1){sel = p1; ext=1;break;}}}
 if (board[Elv][inc+1] == p1){if (board[Elv][inc+2] == p1){if (board[Elv][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Elv][inc-1] == p1){if (board[Elv][inc-2] == p1){if (board[Elv][inc-3] == p1){sel = p1; ext=1;break;}}}
 if (board[Elv+1][inc+1] == p1){if (board[Elv+2][inc+2] == p1){if (board[Elv+3][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Elv-1][inc+1] == p1){if (board[Elv-2][inc+2] == p1){if (board[Elv-3][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Elv+1][inc-1]== p1){if (board[Elv+2][inc-2] == p1){if (board[Elv+3][inc-3] == p1){sel = p1; ext=1;break;}}}
 if (board[Elv-1][inc-1]== p1){if (board[Elv-2][inc-2] == p1){if (board[Elv-3][inc-3] == p1){sel = p1; ext=1;break;}}}
 
 if(ext == 1){break;}
 Elv--;}
 if (pieces_position_list[i][2] == 'Y'){board[Elv][4] = 'Y';
 if (board[Elv-1][inc] == p2){if (board[Elv-2][inc] == p2){if (board[Elv-3][inc] == p2){sel = p2; ext=1;break;}}}
 if (board[Elv+1][inc] == p2){if (board[Elv+2][inc] == p2){if (board[Elv+3][inc] == p2){sel = p2; ext=1;break;}}}
 if (board[Elv][inc+1] == p2){if (board[Elv][inc+2] == p2){if (board[Elv][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Elv][inc-1] == p2){if (board[Elv][inc-2] == p2){if (board[Elv][inc-3] == p2){sel = p2; ext=1;break;}}}
 if (board[Elv+1][inc+1] == p2){if (board[Elv+2][inc+2] == p2){if (board[Elv+3][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Elv-1][inc+1] == p2){if (board[Elv-2][inc+2] == p2){if (board[Elv-3][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Elv+1][inc-1] == p2){if (board[Elv+2][inc-2] == p2){if (board[Elv+3][inc-3] == p2){sel = p2; ext=1;break;}}}
 if (board[Elv-1][inc-1] == p2){if (board[Elv-2][inc-2] == p2){if (board[Elv-3][inc-3] == p2){sel = p2; ext=1;break;}}}
 if(ext == 1){break;}
 Elv--;}
 break;}



if (pieces_position_list[i][0] == 'F'){if (pieces_position_list[i][2] == 'R'){board[Flv][5] = 'X';
 if (board[Flv-1][inc] == p1){if (board[Flv-2][inc] == p1){if (board[Flv-3][inc] == p1){sel = p1; ext=1;break;}}}
 if (board[Flv+1][inc] == p1){if (board[Flv+2][inc] == p1){if (board[Flv+3][inc] == p1){sel = p1; ext=1;break;}}}
 if (board[Flv][inc+1] == p1){if (board[Flv][inc+2] == p1){if (board[Flv][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Flv][inc-1] == p1){if (board[Flv][inc-2] == p1){if (board[Flv][inc-3] == p1){sel = p1; ext=1;break;}}}
 if (board[Flv+1][inc+1] == p1){if (board[Flv+2][inc+2] == p1){if (board[Flv+3][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Flv-1][inc+1] == p1){if (board[Flv-2][inc+2] == p1){if (board[Flv-3][inc+3] == p1){sel = p1; ext=1;break;}}}
 if (board[Flv+1][inc-1]== p1){if (board[Flv+2][inc-2] == p1){if (board[Flv+3][inc-3] == p1){sel = p1; ext=1;break;}}}
 if (board[Flv-1][inc-1]== p1){if (board[Flv-2][inc-2] == p1){if (board[Flv-3][inc-3] == p1){sel = p1; ext=1;break;}}}
 
 if(ext == 1){break;}
 Flv--;}
 if (pieces_position_list[i][2] == 'Y'){board[Flv][5] = 'Y';
 if (board[Flv-1][inc] == p2){if (board[Flv-2][inc] == p2){if (board[Flv-3][inc] == p2){sel = p2; ext=1;break;}}}
 if (board[Flv+1][inc] == p2){if (board[Flv+2][inc] == p2){if (board[Flv+3][inc] == p2){sel = p2; ext=1;break;}}}
 if (board[Flv][inc+1] == p2){if (board[Flv][inc+2] == p2){if (board[Flv][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Flv][inc-1] == p2){if (board[Flv][inc-2] == p2){if (board[Flv][inc-3] == p2){sel = p2; ext=1;break;}}}
 if (board[Flv+1][inc+1] == p2){if (board[Flv+2][inc+2] == p2){if (board[Flv+3][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Flv-1][inc+1] == p2){if (board[Flv-2][inc+2] == p2){if (board[Flv-3][inc+3] == p2){sel = p2; ext=1;break;}}}
 if (board[Flv+1][inc-1] == p2){if (board[Flv+2][inc-2] == p2){if (board[Flv+3][inc-3] == p2){sel = p2; ext=1;break;}}}
 if (board[Flv-1][inc-1] == p2){if (board[Flv-2][inc-2] == p2){if (board[Flv-3][inc-3] == p2){sel = p2; ext=1;break;}}}
 if(ext == 1){break;}
 Flv--;}
 break;}
       
       if (pieces_position_list[i][0] == 'G'){if (pieces_position_list[i][2] == 'R'){board[Glv][6] = 'X';
       for(inc = 6; inc < cols; inc++ ){
                if (board[Glv-1][inc] == p1){if (board[Glv-2][inc] == p1){if (board[Glv-3][inc] == p1){sel = p1; ext=1;break;}}}
                if (board[Glv+1][inc] == p1){if (board[Glv+2][inc] == p1){if (board[Glv+3][inc] == p1){sel = p1; ext=1;break;}}}
                if (board[Glv][inc+1] == p1){if (board[Glv][inc+2] == p1){if (board[Glv][inc+3] == p1){sel = p1; ext=1;break;}}}
                if (board[Glv][inc-1] == p1){if (board[Glv][inc-2] == p1){if (board[Glv][inc-3] == p1){sel = p1; ext=1;break;}}}
                if (board[Glv+1][inc+1] == p1){if (board[Glv+2][inc+2] == p1){if (board[Glv+3][inc+3] == p1){sel = p1; ext=1;break;}}}
                if (board[Glv-1][inc+1] == p1){if (board[Glv-2][inc+2] == p1){if (board[Glv-3][inc+3] == p1){sel = p1; ext=1;break;}}}
                if (board[Glv+1][inc-1]== p1){if (board[Glv+2][inc-2] == p1){if (board[Glv+3][inc-3] == p1){sel = p1; ext=1;break;}}}
                if (board[Glv-1][inc-1]== p1){if (board[Glv-2][inc-2] == p1){if (board[Glv-3][inc-3] == p1){sel = p1; ext=1;break;}}}
       }
       
        if(ext == 1){break;}   
       Glv--;}
       if (pieces_position_list[i][2] == 'Y'){board[Glv][6] = 'Y'; 
       for(inc = 6; inc < cols; inc++ ){
                if (board[Glv-1][inc] == p2){if (board[Glv-2][inc] == p2){if (board[Glv-3][inc] == p2){sel = p2; ext=1;break;}}}
                if (board[Glv+1][inc] == p2){if (board[Glv+2][inc] == p2){if (board[Glv+3][inc] == p2){sel = p2; ext=1;break;}}}
                if (board[Glv][inc+1] == p2){if (board[Glv][inc+2] == p2){if (board[Glv][inc+3] == p2){sel = p2; ext=1;break;}}}
                if (board[Glv][inc-1] == p2){if (board[Glv][inc-2] == p2){if (board[Glv][inc-3] == p2){sel = p2; ext=1;break;}}}
                if (board[Glv+1][inc+1] == p2){if (board[Glv+2][inc+2] == p2){if (board[Glv+3][inc+3] == p2){sel = p2; ext=1;break;}}}
                if (board[Glv-1][inc+1] == p2){if (board[Glv-2][inc+2] == p2){if (board[Glv-3][inc+3] == p2){sel = p2; ext=1;break;}}}
                if (board[Glv+1][inc-1] == p2){if (board[Glv+2][inc-2] == p2){if (board[Glv+3][inc-3] == p2){sel = p2; ext=1;break;}}}
                if (board[Glv-1][inc-1] == p2){if (board[Glv-2][inc-2] == p2){if (board[Glv-3][inc-3] == p2){sel = p2; ext=1;break;}}}
       }
       if(ext == 1){break;}
       Glv--;}
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
