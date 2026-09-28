#include <iostream>
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
    //if user doesn't have the actual cube and wants to mix and solve in this itself
    
};
int main(){
    return 0;
}