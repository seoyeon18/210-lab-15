// COMSC-210 | Movie Assignment | Seoyeon An
#include <iostream>
#include <iomanip>

using namespace std;

class Movie {
private:
    string title;
    int year;
    string screenWriter;

public:
    // getter
    string getTitle() const { return title;}
    int getYear() const { return year; }
    string getScreenWriter() const { return screenWriter;}

    // setter
    void setTitle(string t) { title = t;}
    void setYear(int y) { year = y;}
    void setScreenWriter(string s) { screenWriter = s;}

    void print() const {
        cout << "Movie: " << title <<endl;
        cout << "Year release: " << year << endl;
        cout << "Screen writer: " << screenWriter <<endl << endl;
    }
};