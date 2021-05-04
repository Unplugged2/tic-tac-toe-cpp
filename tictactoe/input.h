void input_p (int i, void player_turn()){
	if (board[i] != 'X' &&board[i] != 'O'){
    	board[i] = player;
    }
	else{
        cout << "Field is already in use try again!" << endl;
        player_turn();
    }
}

void input_b (int i, void bot_turn()){
	if (board[i] != 'X' && board[i] != 'O'){
    	board[i] = player;
    }
	else{
        bot_turn();
    }
}

void player_turn(){
	int a;
	cout << "Choose a number: ";
	cin >> a;

	input_p (a, player_turn);
}

void bot_turn(){
	int a = bot_AI();
    input_b (a, bot_turn);
}

void toggle(){
	if (player == 'X')
		player = 'O';
	else player = 'X';
}
