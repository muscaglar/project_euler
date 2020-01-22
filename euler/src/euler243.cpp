#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int printVector(vector<int> inVec)
{
    for (std::vector<int>::const_iterator i = inVec.begin(); i != inVec.end(); ++i)
    std::cout << *i << ' ';
    cout<<endl;
    return 0;
}

float findR(long long testInt)
{
    std::vector<int> goodOnes;
    goodOnes.push_back(1);
    for(long long i = 2; i<testInt;i++)
    {
        if(__gcd(testInt, i)==1){
            goodOnes.push_back(i);
        }
    }
    long output = goodOnes.size()/long(testInt-1);
    return output;
}

int main() {
    string input, line, item;
    getline(cin, input);
    int iter = stoi(input);
    long long targetR;
    long long currentR;
    int currentInt =1;
    for(int i = 0; i <iter; i++)
    {
        vector<long long> input;
        getline(cin, line);
        std::istringstream iss(line);
        while(getline(iss,item,' '))
        {
            input.push_back(stoi(item));
        }
        targetR = long(input[0])/long(input[1]);
        currentR = 0;
        currentInt =2;
        while(true)
            {
                currentR = long(findR(currentInt));
                //cout<<currentInt<<' '<<currentR<<endl;
                if(currentR<targetR)
                    break;
                currentInt++;
            }
    }
    cout<<currentInt<<endl;
    return 0;
}
