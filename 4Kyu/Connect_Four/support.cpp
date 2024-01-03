/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //A to G
    char mrk = 'A';
    int nn = 0;
    //0 to 6

    
int i = 0;
    while (i < 6)
    {cout << "if (pieces_position_list[i][0] == \'"<< mrk <<"\'){if (pieces_position_list[i][2] == 'R'){board["<< mrk <<"lv]["<< nn <<"] = 'X';\n for(int inc = 0; inc < cols; inc++ ){\n if (board["<< mrk <<"lv][inc] == p1){if (board["<< mrk <<"lv-1][inc] == p1){if (board["<< mrk <<"lv-2][inc] == p1){if (board["<< mrk <<"lv-3][inc] == p1){sel = p1; ext=1;break;}}}}\n if (board["<< mrk <<"lv][inc] == p1){if (board["<< mrk <<"lv+1][inc] == p1){if (board["<< mrk <<"lv+2][inc] == p1){if (board["<< mrk <<"lv+3][inc] == p1){sel = p1; ext=1;break;}}}}\n if (board["<< mrk <<"lv][inc] == p1){if (board["<< mrk <<"lv][inc+1] == p1){if (board["<< mrk <<"lv][inc+2] == p1){if (board["<< mrk <<"lv][inc+3] == p1){sel = p1; ext=1;break;}}}}\n if (board["<< mrk <<"lv][inc] == p1){if (board["<< mrk <<"lv][inc-1] == p1){if (board["<< mrk <<"lv][inc-2] == p1){if (board["<< mrk <<"lv][inc-3] == p1){sel = p1; ext=1;break;}}}}\n if (board["<< mrk <<"lv][inc] == p1){if (board["<< mrk <<"lv+1][inc+1] == p1){if (board["<< mrk <<"lv+2][inc+2] == p1){if (board["<< mrk <<"lv+3][inc+3] == p1){sel = p1; ext=1;break;}}}}\n if (board["<< mrk <<"lv][inc] == p1){if (board["<< mrk <<"lv-1][inc+1] == p1){if (board["<< mrk <<"lv-2][inc+2] == p1){if (board["<< mrk <<"lv-3][inc+3] == p1){sel = p1; ext=1;break;}}}}\n if (board["<< mrk <<"lv][inc] == p1){if (board["<< mrk <<"lv+1][inc-1]== p1){if (board["<< mrk <<"lv+2][inc-2] == p1){if (board["<< mrk <<"lv+3][inc-3] == p1){sel = p1; ext=1;break;}}}}\n if (board["<< mrk <<"lv][inc] == p1){if (board["<< mrk <<"lv-1][inc-1]== p1){if (board["<< mrk <<"lv-2][inc-2] == p1){if (board["<< mrk <<"lv-3][inc-3] == p1){sel = p1; ext=1;break;}}}}\n }\n \n if(ext == 1){break;}\n "<< mrk << "lv--;}\n if (pieces_position_list[i][2] == 'Y'){board["<< mrk <<"lv]["<< nn <<"] = 'Y';\n for(int inc = 0; inc < cols; inc++ ){\n if (board["<< mrk <<"lv][inc] == p2){if (board[Glv-1][inc] == p2){if (board["<< mrk <<"lv-2][inc] == p2){if (board["<< mrk <<"lv-3][inc] == p2){sel = p2; ext=1;break;}}}}\n if (board["<< mrk <<"lv][inc] == p2){if (board[Glv+1][inc] == p2){if (board["<< mrk <<"lv+2][inc] == p2){if (board["<< mrk <<"lv+3][inc] == p2){sel = p2; ext=1;break;}}}}\n if (board["<< mrk <<"lv][inc] == p2){if (board[Glv][inc+1] == p2){if (board["<< mrk <<"lv][inc+2] == p2){if (board["<< mrk <<"lv][inc+3] == p2){sel = p2; ext=1;break;}}}}\n if (board["<< mrk <<"lv][inc] == p2){if (board[Glv][inc-1] == p2){if (board["<< mrk <<"lv][inc-2] == p2){if (board["<< mrk <<"lv][inc-3] == p2){sel = p2; ext=1;break;}}}}\n if (board["<< mrk <<"lv][inc] == p2){if (board[Glv+1][inc+1] == p2){if (board["<< mrk <<"lv+2][inc+2] == p2){if (board["<< mrk <<"lv+3][inc+3] == p2){sel = p2; ext=1;break;}}}}\n if (board["<< mrk <<"lv][inc] == p2){if (board[Glv-1][inc+1] == p2){if (board["<< mrk <<"lv-2][inc+2] == p2){if (board["<< mrk <<"lv-3][inc+3] == p2){sel = p2; ext=1;break;}}}}\n if (board["<< mrk <<"lv][inc] == p2){if (board[Glv+1][inc-1] == p2){if (board["<< mrk <<"lv+2][inc-2] == p2){if (board["<< mrk <<"lv+3][inc-3] == p2){sel = p2; ext=1;break;}}}}\n if (board["<< mrk <<"lv][inc] == p2){if (board[Glv-1][inc-1] == p2){if (board["<< mrk <<"lv-2][inc-2] == p2){if (board["<< mrk <<"lv-3][inc-3] == p2){sel = p2; ext=1;break;}}}}\n } if(ext == 1){break;}\n "<< mrk <<"lv--;}\n break;}\n";
     cout << "\n\n\n";
        i++;
        mrk++;
    }
    return 0;
}
//https://www.onlinegdb.com/online_c++_compiler#tab-stdin
