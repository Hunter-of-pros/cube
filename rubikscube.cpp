    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    #include <string>
    using namespace std;
    class cube{
    public:
    char w = 'W';
    char o = 'O';
    char b = 'B';
    char r = 'R';
    char g = 'G';
    char y ='Y';


    char white [3][3]={
        {w,w,w},
        {w,w,w},
        {w,w,w}
    };
    char orange[3][3]{
        {o,o,o},
        {o,o,o},
        {o,o,o}
    };
    char blue [3][3]={
        {b,b,b},
        {b,b,b},
        {b,b,b}
    };
    char red [3][3]={
        {r,r,r},
        {r,r,r},
        {r,r,r}
    };
    char green[3][3]={
        {g,g,g},
        {g,g,g},
        {g,g,g}
    };
    char yellow [3][3]={
        {y,y,y},
        {y,y,y},
        {y,y,y}
    };


    };
    class userCube: public cube{
        //if user has a cube and wants to see the cube and enter the colors he gets the moves to solve it 
    };
    class computerCube: public cube{
        public:
        //if user doesn't have the actual cube and wants to mix and solve in this itself
        void display(){
            for (int i=0; i<4;i++){

                if(i==0){
                    for(int k=0;k<3;k++){
                        cout<<endl<<"\t";
                        for(int l=0;l<3;l++){
                            cout<<red[k][l]<<" ";
                        }
                    }
                    cout<<"\n\n";
                }

                if(i==1){
                    for(int k=0;k<3;k++){
                        cout<<endl<<"\t";
                        for(int l=0;l<3;l++){
                            cout<<yellow[k][l]<<" ";
                        }
                    }
                    cout<<"\n\n\n";
                }

                if(i==2){
                    for(int k=0;k<3;k++){
                        for(int l=0;l<3;l++){
                            cout<<green[k][l]<<" ";  
                        }
                        cout<<"\t";
                        for(int l1=0;l1<3;l1++){
                            cout<<orange[k][l1]<<" ";  
                        }
                        cout<<"\t";
                        for(int l2=0;l2<3;l2++){
                            cout<<blue[k][l2]<<" ";
                        }
                        cout<<endl;
                    }
                    cout<<"\n";
                }
                
                if(i==3){
                    for(int k=0;k<3;k++){
                        cout<<endl<<"\t";
                        for(int l=0;l<3;l++){
                            cout<<white[k][l]<<" ";
                        }
                    }
                    cout<<endl;
                }
            }
        }

        void makeMove(char move) {
            if (move == 'R') {
                    char temp_blue[3][3];
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            temp_blue[j][2 - i] = blue[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            blue[i][j] = temp_blue[i][j];
                        }
                    }

                    for (int i = 0; i < 3; i++) {
                        char temp = orange[i][2];
                        orange[i][2] = white[i][2];
                        white[i][2] = red[i][2];
                        red[i][2] = yellow[i][2];
                        yellow[i][2] = temp;
                    }
                } else if (move == 'r') {
                    char temp_blue[3][3];
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            temp_blue[2 - j][i] = blue[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            blue[i][j] = temp_blue[i][j];
                        }
                    }

                    for (int i = 0; i < 3; i++) {
                        char temp = orange[i][2];
                        orange[i][2] = yellow[i][2];
                        yellow[i][2] = red[i][2];
                        red[i][2] = white[i][2];
                        white[i][2] = temp;
                    }
                } else if (move == 'L') {
                    char temp_green[3][3];
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            temp_green[j][2 - i] = green[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            green[i][j] = temp_green[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        char temp = orange[i][0];
                        orange[i][0] = yellow[i][0];
                        yellow[i][0] = red[i][0];
                        red[i][0] = white[i][0];
                        white[i][0] = temp;
                    }
                } else if (move == 'l') {
                    char temp_green[3][3];
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            temp_green[2 - j][i] = green[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            green[i][j] = temp_green[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        char temp = orange[i][0];
                        orange[i][0] = white[i][0];
                        white[i][0] = red[i][0];
                        red[i][0] = yellow[i][0];
                        yellow[i][0] = temp;
                    }
                } else if (move == 'U') {
                    char temp_yellow[3][3];
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            temp_yellow[j][2 - i] = yellow[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            yellow[i][j] = temp_yellow[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        char temp = orange[0][i];
                        orange[0][i] = blue[0][i];
                        blue[0][i] = red[2][2 - i];
                        red[2][2 - i] = green[0][i];
                        green[0][i] = temp;
                    }
                } else if (move == 'u') {
                    char temp_yellow[3][3];
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            temp_yellow[2 - j][i] = yellow[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            yellow[i][j] = temp_yellow[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        char temp = orange[0][i];
                        orange[0][i] = green[0][i];
                        green[0][i] = red[2][2 - i];
                        red[2][2 - i] = blue[0][i];
                        blue[0][i] = temp;
                    }
                } else if (move == 'D') {
                    char temp_white[3][3];
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            temp_white[j][2 - i] = white[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            white[i][j] = temp_white[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        char temp = orange[2][i];
                        orange[2][i] = green[2][i];
                        green[2][i] = red[0][2 - i];
                        red[0][2 - i] = blue[2][i];
                        blue[2][i] = temp;
                    }
                } else if (move == 'd') {
                    char temp_white[3][3];
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            temp_white[2 - j][i] = white[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            white[i][j] = temp_white[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        char temp = orange[2][i];
                        orange[2][i] = blue[2][i];
                        blue[2][i] = red[0][2 - i];
                        red[0][2 - i] = green[2][i];
                        green[2][i] = temp;
                    }
                } else if (move == 'F') {
                    char temp_orange[3][3];
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            temp_orange[j][2 - i] = orange[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            orange[i][j] = temp_orange[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        char temp = yellow[2][i];
                        yellow[2][i] = green[2 - i][2];
                        green[2 - i][2] = white[0][2 - i];
                        white[0][2 - i] = blue[i][0];
                        blue[i][0] = temp;
                    }
                } else if (move == 'f') {
                    char temp_orange[3][3];
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            temp_orange[2 - j][i] = orange[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            orange[i][j] = temp_orange[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        char temp = yellow[2][i];
                        yellow[2][i] = blue[i][0];
                        blue[i][0] = white[0][2 - i];
                        white[0][2 - i] = green[2 - i][2];
                        green[2 - i][2] = temp;
                    }
                } else if (move == 'B') {
                    char temp_red[3][3];
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            temp_red[j][2 - i] = red[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            red[i][j] = temp_red[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        char temp = yellow[0][i];
                        yellow[0][i] = blue[i][2];
                        blue[i][2] = white[2][2 - i];
                        white[2][2 - i] = green[2 - i][0];
                        green[2 - i][0] = temp;
                    }
                } else if (move == 'b') {
                    char temp_red[3][3];
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            temp_red[2 - j][i] = red[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            red[i][j] = temp_red[i][j];
                        }
                    }
                    for (int i = 0; i < 3; i++) {
                        char temp = yellow[0][i];
                        yellow[0][i] = green[2 - i][0];
                        green[2 - i][0] = white[2][2 - i];
                        white[2][2 - i] = blue[i][2];
                        blue[i][2] = temp;
                    }
            } else {
                cout << "Invalid move.\n";
            }
        }

        bool isSolved() {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (white[i][j] != w) return false;
                    if (orange[i][j] != o) return false;
                    if (blue[i][j] != b) return false;
                    if (red[i][j] != r) return false;
                    if (green[i][j] != g) return false;
                    if (yellow[i][j] != y) return false;
                }
            }
            return true;
        }

        string scramble() {
            srand(time(0));
            char validMoves[] = {'R', 'r', 'L', 'l', 'U', 'u', 'D', 'd', 'F', 'f', 'B', 'b'};
            string sequence = "";
            for (int i = 0; i < 20; i++) {
                char m = validMoves[rand() % 12];
                sequence += m;
                makeMove(m);
            }
            cout << "Scramble sequence: ";
            for (int i = 0; i < sequence.length(); i++) cout << sequence[i] << " ";
            cout << endl;
            return sequence;
        }

        void reverseSequence(string sequence) {
            cout << "Reversing sequence: ";
            for (int i = sequence.length() - 1; i >= 0; i--) {
                char m = sequence[i];
                char inv = (m >= 'A' && m <= 'Z') ? (m + 32) : (m - 32);
                cout << inv << " ";
                makeMove(inv);
            }
            cout << endl;
        }

        void moves() {
            char move;
            cout << "Enter move (R, r, L, l, U, u, D, d, F, f, B, b) or Q to quit: ";
            while (cin >> move) {
                if (move == 'Q' || move == 'q') break;
                
                makeMove(move);
                display();
                if (isSolved()) {
                    cout << "Cube is solved!\n";
                }
                cout << "Enter move (R, r, L, l, U, u, D, d, F, f, B, b) or Q to quit: ";
            }
        }
    };
    int main(){
        computerCube c;
        c.display();
        if (c.isSolved()) cout << "Cube is initially solved.\n";
        cout << "Shuffling the cube\n";
        string seq = c.scramble();
        c.display();
        if (!c.isSolved()) cout << "Cube is now shuffled.\n";
        
        c.reverseSequence(seq);
        c.display();
        if (c.isSolved()) cout << "Solved cube again from reversing the moves used to shuffle!\n";
        else cout << "Cube failed to return to solved state.\n";
        
        c.moves();
        return 0;
    }