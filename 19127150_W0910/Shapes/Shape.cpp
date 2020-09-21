#include "Shape.h"
Random rng;

Circle::Circle()
{
    this->_radius = rng.next(200) + 1;
}

Circle::Circle(int radius)
{
    this->_radius = radius;
}

string Circle::getShapeInfo()
{
    string result = "";

    result = "Circle r=" + to_string(this->_radius);

    return result;
}

float Circle::calcArea()
{
    return PI * pow(this->_radius, 2);
}

Square::Square()
{
    this->_edge = rng.next(200) + 1;
}

Square::Square(int edge)
{
    this->_edge = edge;
}

string Square::getShapeInfo()
{
    string result = "";

    result = "Square a=" + to_string(this->_edge);

    return result;
}

float Square::calcArea()
{
    return pow(this->_edge, 2);
}

Rectangle::Rectangle()
{
    this->_length = rng.next(200) + 1;
    this->_width = rng.next(this->_length) + 1;
}

Rectangle::Rectangle(int length, int width)
{
    this->_length = length;
    this->_width = width;
}

string Rectangle::getShapeInfo()
{
    string result = "";

    result = "Rectangle a=" + to_string(this->_length) + " b=" + to_string(this->_width);

    return result;
}

float Rectangle::calcArea()
{
    return this->_length * this->_width;
}

Triangle::Triangle()
{
    while (true)
    {
        this->_edge1 = rng.next(200) + 1;
        this->_edge2 = rng.next(200) + 1;
        this->_edge3 = rng.next(200) + 1;

        if ((this->_edge1 + this->_edge2 > this->_edge3) && (this->_edge2 + this->_edge3 > this->_edge1) && (this->_edge1 + this->_edge3 > this->_edge2))
            break;
    }
}

Triangle::Triangle(int edge1, int edge2, int edge3)
{
    this->_edge1 = edge1;
    this->_edge2 = edge2;
    this->_edge3 = edge3;
}

string Triangle::getShapeInfo()
{
    string result = "";

    result = "Triangle a=" + to_string(this->_edge1) + " b=" + to_string(this->_edge2) + " c=" + to_string(this->_edge3);

    return result;
}

float Triangle::calcArea()
{
    float temp = (this->_edge1 + this->_edge2 + this->_edge3) / 2.0;
    
    return sqrt(temp * (temp - this->_edge1) * (temp - this->_edge2) * (temp - this->_edge3));
}

void RandomShape::randomNumberOfShapes(vector<Shape*> &s, int numberOfShapes)
{
    int *temp = new int[numberOfShapes];

    for (int i = 0; i < numberOfShapes; i++)
        temp[i] = this->_rng.next(4);

    for (int i = 0; i < numberOfShapes; i++)
    {
        if (temp[i] == 0)
        {
            Circle *temp2 = new Circle;
            s.push_back(temp2);
            continue;
        }

        if (temp[i] == 1)
        {
            Square* temp2 = new Square;
            s.push_back(temp2);
            continue;
        }

        if (temp[i] == 2)
        {
            Rectangle* temp2 = new Rectangle;
            s.push_back(temp2);
            continue;
        }

        if (temp[i] == 3)
        {
            Triangle* temp2 = new Triangle;
            s.push_back(temp2);
            continue;
        }
    }

    delete[] temp;
}

void RandomShape::saveFile(string filename, vector<Shape*>& s)
{
    fstream f;

    f.open(filename, ios::out);

    if (!f.is_open())
    {
        cout << "Error Create File.\n";
        return;
    }

    f << s.size() << endl;
    for (int i = 0; i < s.size(); i++)
        f << s[i]->getShapeInfo() << endl;

    f.close();
    cout << "Save file successfully.\n";
}

void RandomShape::deleteVectorShape(vector<Shape*>& s)
{
    for (int i = 0; i < s.size(); i++)
        delete s[i];

    s.clear();
}

void RandomShape::readFile(string filename, vector<Shape*>& s)
{
    Tokenizer tk;
    fstream f;

    f.open(filename, ios::in);

    if (!f.is_open())
    {
        cout << "Error Read File.\n";
        return;
    }

    string buffer = "";

    getline(f, buffer, '\n');

    int numberOfShapes = stoi(buffer);

    for (int i = 0; i < numberOfShapes; i++)
    {
        getline(f, buffer, '\n');

        tk.tokens.clear();
        tk.split(buffer);

        if (tk.tokens[0] == "Circle")
        {
            tk.split(tk.tokens[1], "=");
            s.push_back(new Circle(stoi(tk.tokens[3])));
            continue;
        }

        if (tk.tokens[0] == "Square")
        {
            tk.split(tk.tokens[1], "=");
            s.push_back(new Square(stoi(tk.tokens[3])));
            continue;
        }

        if (tk.tokens[0] == "Rectangle")
        {
            tk.split(tk.tokens[1], "=");
            tk.split(tk.tokens[2], "=");
            s.push_back(new Rectangle(stoi(tk.tokens[4]), stoi(tk.tokens[6])));
            continue;
        }

        if (tk.tokens[0] == "Triangle")
        {
            tk.split(tk.tokens[1], "=");
            tk.split(tk.tokens[2], "=");
            tk.split(tk.tokens[3], "=");
            s.push_back(new Triangle(stoi(tk.tokens[5]), stoi(tk.tokens[7]), stoi(tk.tokens[9])));
            continue;
        }
    }

    f.close();
    cout << "Read file successfully.\n";
}

void RandomShape::print3Largest(vector<Shape*>& s)
{
    for (int i = 0; i < s.size() - 1; i++)
        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[i]->calcArea() < s[j]->calcArea())
            {
                Shape* temp;
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }

    cout << "Top 3 Shapes That Has The Largest Area:\n";
    for (int i = 0; i < 3; i++)
        cout << s[i]->getShapeInfo() << endl;
}
