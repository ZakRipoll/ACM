#include <iostream>

#define MAX 30

using namespace std;

int M[3] = {1, 4, 9};

int recursivitat( int c )
{

    if( c == 0 )
        return 0;


    /*
    for( unsigned i = 0; i < 3; ++i){

        if(c - M[i] >= 0)
            return 1 + recursivitat( c - M[i] );
    }
    */


}

int main() 
{

    int res[MAX];

    res[0] = 0;

    for( unsigned c = 1; c < MAX; ++c )  
    {
        res[c] = recursivitat( c );
    }

    /*
    cout << res[1] << endl;
    cout << res[12] << endl;
    cout << res[20] << endl;
    cout << res[22] << endl;
    */

    cout << "Les possible monedes són:" << "\n  1" << "\n  4" << "\n  9 \n"; 

    for( unsigned i = 1; i <= MAX; ++i )
        cout << i << " " << res[i] << endl;
}