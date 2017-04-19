#include <iostream>
#include <utility>
#include <vector>

void imprimer( std::vector< std::pair< int,int > > A ){

	for( std::vector< std::pair< int,int > >::iterator i = A.begin(); i != A.end(); ++i )

		std::cout << i->first << " -> " << i->second << std::endl;
}

int main(){
	std::vector< std::pair< int, int > > A;

	A.push_back( std::make_pair( 0, 1 ) );
	A.push_back( std::make_pair( 0, 3 ) );
	A.push_back( std::make_pair( 1, 2 ) );
	A.push_back( std::make_pair( 1, 4 ) );
	A.push_back( std::make_pair( 2, 4 ) );
	A.push_back( std::make_pair( 3, 1 ) );
	A.push_back( std::make_pair( 4, 3 ) );
	A.push_back( std::make_pair( 4, 5 ) );
	A.push_back( std::make_pair( 5, 2 ) );

	imprimer( A );
}