#include<SDL.h>
#include<SDL_image.h>
#include<iostream>
#include<cstdlib>
#include<windows.h>
#include<string>
#include"board.h"
#include"botmove.h"
#include"win.h"
#include"input.h"
#undef main
using namespace std;


int main(int argv, char** args){


	int count_draw=0;
	cout << "Tic Tac Toe"<<endl;
	drawBoard();
	while(1){
		player_turn();
		count_draw++;
		drawBoard();
		if (win() == 'X'){
			cout << "X wins" << endl;
			break;
		}
		else if (win() == 'O'){
			cout << "O wins" << endl;
			break;
		}
		else if((win() == '/')&&(count_draw==9)){
			cout << "Draw" << endl;
			return 0;
		}
		toggle();
		bot_turn();
		toggle();
		drawBoard();
		if (win() == 'X'){
			cout << "X wins" << endl;
			break;
		}
		else if (win() == 'O'){
			cout << "O wins" << endl;
			break;
		}
		else if((win() == '/')&&(count_draw==9)){
			cout << "Draw" << endl;
			return 0;
		}
        drawBoard();
	}

	return 0;
}
