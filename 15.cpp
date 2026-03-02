// COMSC-210 | Movie Assignment | Seoyeon An
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>

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

int main() {

    vector<Movie> movies;
    ifstream fin("input.txt");

    if (!fin) {
        cout << "Input file not found.\n";
        return 1;
    }

    string t;
    int y;
    string s;

    while (getline(fin, t)) {
        fin >> y;
        fin.ignore();
        getline(fin, s);

        Movie temp;
        temp.setTitle(t);
        temp.setYear(y);
        temp.setScreenWriter(s);

        movies.push_back(temp);
    }

    fin.close();
    for (const auto& m : movies) {
        m.print();
    }
    return 0;
}