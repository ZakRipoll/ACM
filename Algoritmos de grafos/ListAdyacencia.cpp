#include <iostream>
#include <vector>

#define MAX 6

void imprimer( std::vector< std::vector< int > > adjacent ){

	for( std::vector< std::vector< int > >::iterator i = adjacent.begin(); i != adjacent.end(); ++i )
		for ( std::vector< int >::iterator v = i->begin(); v < i->end(); ++v)
			std::cout << *i->begin() <<  " -> " << *v << std::endl;
}

int main(){

	std::vector< std::vector< int > > adjacent( MAX );

	adjacent[0].push_back(1);
	adjacent[0].push_back(3);
	adjacent[1].push_back(2);
	adjacent[1].push_back(4);
	adjacent[2].push_back(4);
	adjacent[3].push_back(1);
	adjacent[4].push_back(3);
	adjacent[4].push_back(5);
	adjacent[5].push_back(2);

	imprimer( adjacent );
}