#include <iostream>

#define MAX 30

using namespace std;

int main() 
{

    int M[3] = {1, 4, 9};

    int res[MAX];

    res[0] = 0;

    for( unsigned c = 1; c <= MAX; ++c )  
    {
        res[c] = c;

        for( unsigned i = 0; i < 3; ++i)

            if( M[i] <= c && res[c - M[i]] <= res[c] )
                
                res[c] = 1 + res[c - M[i]];
    }

    cout << "Les possibles monedes són:" << "\n  1" << "\n  4" << "\n  9 \n"; 

    for( unsigned i = 1; i <= MAX; ++i )
        cout << i << " " << res[i] << endl;
}