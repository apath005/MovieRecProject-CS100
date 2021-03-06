#include <iostream>

#include "Movie.hpp"
#include "MovieRecommender.hpp"
#include "MovieGenres.hpp"
#include "setMovie.hpp"
int main() {
    /*
     *Test function requires more testing and needs to be moved to its own class
     */
    Movie* comedy = new MovieGenres("Comedy");
    Movie* romance = new MovieGenres("Romance");

    Movie* rushHour = new setMovie("Rush Hour");
    Movie* rushHour2 = new setMovie("Rush Hour 2");
    Movie* theZoo = new setMovie("The Zoo");


    comedy->addMovie(rushHour);
    comedy->addMovie(rushHour2);
    comedy->addMovie(theZoo);

    romance->addMovie(comedy);

    std::cout << romance->getMovie();

    return 0;
}