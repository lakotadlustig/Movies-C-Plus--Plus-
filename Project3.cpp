//Project Statement:
//Create a program that displays the average scores
//from metacritic's Metascore and Rotten Tomatoes' Tomatometer
//for a particular movie. The average score must be displayed
//on a 10 point scale. The movie title and scores will be
//inputted by the user.

#include <iostream>
#include <string>

using namespace std;

int main()
{

    //Get the name of the movie

    string movie = "";

    cout << "What is the name of the movie: \n";
    getline(cin, movie);

    //Get the Metascore

    int metascore = 0;

    cout << "What is the Metascore rating for " << movie << "?\n";
    cin >> metascore;

    //Get the Tomatometer score

    int tomatometer = 0;

    cout << "What is the Tomatometer rating for " << movie << "?\n";
    cin >> tomatometer;

    //Calculate the average

    double avg = (metascore + tomatometer) / 2.0;

    //Rescale average

    double rescaledScore = avg / 10;

    //Display the result of our calculations

    cout << "Our calculated average on a 10 point scale for "
         <<movie << " is "
         << rescaledScore << ".";

}
