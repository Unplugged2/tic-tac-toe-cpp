#include<iostream>
using namespace std;

int bot_AI(){
	int a;
	bool chose = false;
	if(board[1] == 'X' && board[2] == 'X' && board[3] != 'X' && board[3] != 'O'){		//1st row
        a = 3;
        chose = true;
    }
    else if(board[1] == 'O' && board[3] == 'O' && board[2] != 'X' && board[2] != 'O'){
        a = 2;
        chose = true;
    }
    else if(board[2] == 'O' && board[3] == 'O' && board[1] != 'X' && board[1] != 'O'){
        a = 1;
        chose = true;
    }
    else if(board[4] == 'O' && board[5] == 'O' && board[6] != 'X' && board[6] != 'O'){		//2nd row
        a = 6;
        chose = true;
    }
    else if(board[4] == 'O' && board[6] == 'O' && board[5] != 'X' && board[5] != 'O'){
        a = 5;
        chose = true;
    }
    else if(board[6] == 'O' && board[5] == 'O' && board[4] != 'X' && board[4] != 'O'){
        a = 4;
        chose = true;
    }
    else if(board[7] == 'O' && board[8] == 'O' && board[9] != 'X' && board[9] != 'O'){		//3rd row
        a = 9;
        chose = true;
    }
    else if(board[7] == 'O' && board[9] == 'O' && board[8] != 'X' && board[8] != 'O'){
        a = 8;
        chose = true;
    }
    else if(board[8] == 'O' && board[9] == 'O' && board[7] != 'X' && board[7] != 'O'){
        a = 7;
        chose = true;
    }
    else if(board[1] == 'O' && board[4] == 'O' && board[7] != 'X' && board[7] != 'O'){		//1st col
        a = 7;
        chose = true;
    }
    else if(board[1] == 'O' && board[7] == 'O' && board[4] != 'X' && board[4] != 'O'){
        a = 4;
        chose = true;
    }
    else if(board[7] == 'O' && board[4] == 'O' && board[1] != 'X' && board[1] != 'O'){
        a = 1;
        chose = true;
    }
    else if(board[2] == 'O' && board[5] == 'O' && board[8] != 'X' && board[8] != 'O'){		//2nd col
        a = 8;
        chose = true;
    }
    else if(board[2] == 'O' && board[8] == 'O' && board[5] != 'X' && board[5] != 'O'){
        a = 5;
        chose = true;
    }
    else if(board[8] == 'O' && board[5] == 'O' && board[2] != 'X' && board[2] != 'O'){
        a = 2;
        chose = true;
    }
    else if(board[3] == 'O' && board[6] == 'O' && board[9] != 'X' && board[9] != 'O'){		//3rd col
        a = 9;
        chose = true;
    }
	else if(board[3] == 'O' && board[9] == 'O' && board[6] != 'X' && board[6] != 'O'){
        a = 6;
        chose = true;
    }
    else if(board[9] == 'O' && board[6] == 'O' && board[3] != 'X' && board[3] != 'O'){
        a = 3;
        chose = true;
    }
    else if(board[1] == 'O' && board[5] == 'O' && board[9] != 'X' && board[9] != 'O'){		//1st diagonal
        a = 9;
        chose = true;
    }
	else if(board[1] == 'O' && board[9] == 'O' && board[5] != 'X' && board[5] != 'O'){
        a = 5;
        chose = true;
    }
    else if(board[9] == 'O' && board[5] == 'O' && board[1] != 'X' && board[1] != 'O'){
        a = 1;
        chose = true;
    }
    else if(board[3] == 'O' && board[5] == 'O' && board[7] != 'X' && board[7] != 'O'){		//2nd diagonal
        a = 7;
        chose = true;

    }
	else if(board[3] == 'O' && board[7] == 'O' && board[5] != 'X' && board[5] != 'O'){
        a = 5;
        chose = true;
    }
    else if(board[7] == 'O' && board[5] == 'O' && board[3] != 'X' && board[3] != 'O'){
        a = 3;
        chose = true;
    }

	else if(board[1] == 'X' && board[2] == 'X' && board[3] != 'X' && board[3] != 'O'){		//1st row
        a = 3;
        chose = true;
    }
    else if(board[1] == 'X' && board[3] == 'X' && board[2] != 'X' && board[2] != 'O'){
        a = 2;
        chose = true;
    }
    else if(board[2] == 'X' && board[3] == 'X' && board[1] != 'X' && board[1] != 'O'){
        a = 1;
        chose = true;
    }
    else if(board[4] == 'X' && board[5] == 'X' && board[6] != 'X' && board[6] != 'O'){		//2nd row
        a = 6;
        chose = true;
    }
    else if(board[4] == 'X' && board[6] == 'X' && board[5] != 'X' && board[5] != 'O'){
        a = 5;
        chose = true;
    }
    else if(board[6] == 'X' && board[5] == 'X' && board[4] != 'X' && board[4] != 'O'){
        a = 4;
        chose = true;
    }
    else if(board[7] == 'X' && board[8] == 'X' && board[9] != 'X' && board[9] != 'O'){		//3rd row
        a = 9;
        chose = true;
    }
    else if(board[7] == 'X' && board[9] == 'X' && board[8] != 'X' && board[8] != 'O'){
        a = 8;
        chose = true;
    }
    else if(board[8] == 'X' && board[9] == 'X' && board[7] != 'X' && board[7] != 'O'){
        a = 7;
        chose = true;
    }
    else if(board[1] == 'X' && board[4] == 'X' && board[7] != 'X' && board[7] != 'O'){		//1st col
        a = 7;
        chose = true;
    }
    else if(board[1] == 'X' && board[7] == 'X' && board[4] != 'X' && board[4] != 'O'){
        a = 4;
        chose = true;
    }
    else if(board[7] == 'X' && board[4] == 'X' && board[1] != 'X' && board[1] != 'O'){
        a = 1;
        chose = true;
    }
    else if(board[2] == 'X' && board[5] == 'X' && board[8] != 'X' && board[8] != 'O'){		//2nd col
        a = 8;
        chose = true;
    }
    else if(board[2] == 'X' && board[8] == 'X' && board[5] != 'X' && board[5] != 'O'){
        a = 5;
        chose = true;
    }
    else if(board[8] == 'X' && board[5] == 'X' && board[2] != 'X' && board[2] != 'O'){
        a = 2;
        chose = true;
    }
    else if(board[3] == 'X' && board[6] == 'X' && board[9] != 'X' && board[9] != 'O'){		//3rd col
        a = 9;
        chose = true;
    }
	else if(board[3] == 'X' && board[9] == 'X' && board[6] != 'X' && board[6] != 'O'){
        a = 6;
        chose = true;
    }
    else if(board[9] == 'X' && board[6] == 'X' && board[3] != 'X' && board[3] != 'O'){
        a = 3;
        chose = true;
    }
    else if(board[1] == 'X' && board[5] == 'X' && board[9] != 'X' && board[9] != 'O'){		//1st diagonal
        a = 9;
        chose = true;
    }
	else if(board[1] == 'X' && board[9] == 'X' && board[5] != 'X' && board[5] != 'O'){
        a = 5;
        chose = true;
    }
    else if(board[9] == 'X' && board[5] == 'X' && board[1] != 'X' && board[1] != 'O'){
        a = 1;
        chose = true;
    }
    else if(board[3] == 'X' && board[5] == 'X' && board[7] != 'X' && board[7] != 'O'){		//2nd diagonal
        a = 7;
        chose = true;

    }
	else if(board[3] == 'X' && board[7] == 'X' && board[5] != 'X' && board[5] != 'O'){
        a = 5;
        chose = true;
    }
    else if(board[7] == 'X' && board[5] == 'X' && board[3] != 'X' && board[3] != 'O'){
        a = 3;
        chose = true;
    }
    if (chose == true){
    	return a;
	}
	else if (chose == false){
		return rand() % 9 + 1;
	}
}
