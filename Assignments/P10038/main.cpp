/**
* Name: Sarah Turner
* Course : 4883-Programming Techniques
* Date : 9/15/2021
* It's late because I couldn't read the problem correctly
* for way to long.
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <sstream>  
#include <algorithm>    



using namespace std;

// Reads it line by line and not all at once.

void Readline ( vector<int>&vec1, int inp, string line)
{
    while(getline(cin, line))
    {

        istringstream iss (line);
  
 
        while( iss >> inp )
        {
            vec1.push_back(inp);

        }

        // Print vec 1
        // for (int i =0; i < vec1.size(); i++)
        //  {
        //     cout << vec1[i] << " ";
        // }

        // cout << " vector 1 \n";

        break;
    }
}
// takes Abs of Vector 1 and put it in 2
void AbsVec (const vector<int>vec1,vector<int>&vec2)
{   int absResult;

    // loop though the 1st vector while getting differeces and them in vector 2.

    for (int i =0; i < vec1.size()-1; i++) // so it doesn't go out of bounds.
    {
        absResult = abs(vec1[i] - vec1[i+1]);
        vec2.push_back(absResult);
    }

    sort(vec2.begin(),vec2.end()); // sort vector 2


    //print vec2.

    // for (int i =0; i < vec2.size(); i++)
    // {
    //     cout << vec2[i] << " ";
    // }
    // cout << " vector 2 \n";
}



void Jolly(const vector<int>vec1,const vector<int>vec2)
{
    vector<int>dummy;
    dummy.resize(vec2.size());
    

    // temp vector that goes to 1 to n-1

    for (int i = 0; i < vec2.size(); i++ )
    {
        dummy[i] = i+1;
       // cout << dummy[i] << " ";
    }
    //cout << " dum vector\n\n";



    // if temp and vector2 they match

    for (int i = 0; i < vec2.size(); i++)
    {
        if (vec2[i]!= dummy[i])
        {
            cout << "Not jolly\n";
            return;
        }
    }
    
    cout << "Jolly\n";

}

int main(){

vector<int>Base;
vector<int>AbsNum;
int input,w; // w takes away the 1st input of each line.
string line;

for (int i=0; i < 7; i++)
while(scanf("%d", &w) == 1)
{
    Readline(Base, input, line);
    AbsVec(Base, AbsNum);
    Jolly(Base,AbsNum);
    Base.clear();
    AbsNum.clear();
}




}

