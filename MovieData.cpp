#include <iostream>
#include <string>
using namespace std;
//Structure
struct MovieData
{
	string Title, Director;
	int Year_Released;
	int Running_Time;

}Mov1, Mov2;
void DisplayMovie(const MovieData&);
int main()
{
	//Storing for Movie 1
	Mov1.Title = "Spider-Man";
	Mov1.Director = "Sam Raimi";
	Mov1.Year_Released = 2002;
	Mov1.Running_Time = 126;

	//Storing for Movie 2
	Mov2.Title = "Sonic The Hedgehog 3";
	Mov2.Director = "Jeff Fowler";
	Mov2.Year_Released = 2024;
	Mov2.Running_Time = 109;


	//Call DisplayMovie
	cout << endl << endl;
	DisplayMovie(Mov1);

	cout << endl << endl;
	DisplayMovie(Mov2);



	system("pause");
	return 0;
}
void DisplayMovie(const MovieData& Movie)
{
	cout << "Movie Title : " << Movie.Title << endl;
	cout << "Movie Director : " << Movie.Director << endl;
	cout << "Movie Year : " << Movie.Year_Released << endl;
	cout << "Movie Running Time : " << Movie.Running_Time << " Minutes" << endl;

}