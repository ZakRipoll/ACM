#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

typedef struct 
{
	string name;
	vector<string> topics;
	bool interested, _union, onVector;

} s;

int main()
{
	int nombreAlumnes, nombreTopics, meets;

	string topic, temes;

	s *alumnes;

	//Iterador
	vector<string>::iterator it;

	vector<string> interesats;

	cin >> nombreAlumnes;

	alumnes = new s[ nombreAlumnes ];

	for (int i = 0; i < nombreAlumnes; ++i)
	{
		cin >> alumnes[i].name >> nombreTopics;

		alumnes[i].interested = true;
		alumnes[i]._union = false;
		alumnes[i].onVector = false;

		for (int j = 0; j < nombreTopics; ++j)
		{
			cin >> topic;
			alumnes[i].topics.push_back( topic );
		}
	}

	cin >> meets;

	for (int i = 0; i < meets; ++i)
	{
		cin >> temes >> nombreTopics;

		interesats.clear();

		if( temes == "Intersection" )
		{

			for (int j = 0; j < nombreTopics; ++j){

				cin >> temes;

				for( int k = 0; k < nombreAlumnes; ++k )

					if( alumnes[k].interested ){

						for (it=alumnes[i].topics.begin(); it!=alumnes[i].topics.end(); ++it)

							if( *it != temes )

								alumnes[i].interested = false;

					if ( !alumnes[i].onVector ){

						alumnes[i].onVector = true;

						interesats.push_back( alumnes[i].name );
					}
				}
			}

			cout << interesats.size();

			for(it=interesats.begin(); it!=interesats.end(); ++it)

				cout << " " << *it;

			cout << "\n";
		}

		else
		{

			for (int j = 0; j < nombreTopics; ++j){

			cin >> temes;

			for( int k = 0; k < nombreAlumnes; ++k )

				if( !alumnes[k]._union ){

					for (it=alumnes[i].topics.begin(); it!=alumnes[i].topics.end(); ++it)

						if( *it == temes ){

							interesats.push_back( alumnes[i].name );
							break;
						}
					}
				}
			}

			cout << interesats.size();

			for(it=interesats.begin(); it!=interesats.end(); ++it)

				cout << " " << *it;

			cout << "\n";
		}
	
}

//	s *meetings;

//	meetings = new s[ meets ];

/*	for (int i = 0; i < meets; ++i)
	{
		cout << meets[i].name << ":";

		for (it=meets[i].topics.begin(); it!=meets[i].topics.end(); ++it)

			cout << "\t" << *it << endl;
	}
*/