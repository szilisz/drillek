#include "std_lib_facilities.h"

// 1. definialas
struct Point 
{
    int x;
    int y;
};

// 2. beolvasashoz
istream& operator>>(istream& is, Point& p)
{
    char c1;
    if (is >> c1 && c1 != '(') {
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }

    char c2;
    char c3;
    int xx;
    int yy;
    is >> xx >> c2 >> yy >> c3;
    if (!is || c2!=',' || c3 != ')') {
        if (is.eof()) return is;
        error("bad point");
    }
    p.x = xx;
    p.y = yy;
    return is;
}

// 3. kiiratashoz
ostream& operator<<(ostream& os, Point& p)
{
    return os << '(' << p.x << ',' << p.y << ')';
}

// 5. Visszaolvasas file-bol
void fill_from_file(vector<Point>& points, string& name)
{
   ifstream ist {name};

    for (Point p; ist >> p; )
        points.push_back(p);
}

int main()
try {
    cout << "Please enter seven sets of (x,y) points:\n";
    vector<Point> original_points;

    while (original_points.size() < 7) 
    {
        Point p;
        cin >> p;
        original_points.push_back(p);
    } 

    // 3. kiiratas
    cout<<"The entered pairs are: ";
    for (Point p : original_points)
        cout << p;
    cout << '\n';

    // 4. kiiratas file-ba
    string s = "mydata.txt";
    ofstream ost { s };
    if (!ost) error("could not open file ", s);

    for (Point p : original_points)
        ost << p;
    ost.close();

    // 5. visszaolvasas uj vectorba
    vector<Point> processed_points;
    fill_from_file(processed_points, s);

    for (Point p : processed_points)
        cout << p;
    cout << '\n';

    if (original_points.size() != processed_points.size())
        cout << "Something's wrong!\n";
}
catch (exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch (...) {
    cerr << "Something terrible has happened!\n";
    return 2;
}