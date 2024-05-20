#include <iostream>
#include <vector>

using namespace std;

//custom DataType
struct Vector2D
{
	int X;
	int Y;
	
};

struct Actor
{
	Vector2D Position;
	char Shape;
	string Name;
};


struct Color
{
	unsigned char R;
	unsigned char G;
	unsigned char B;
};



int main()
{
	Actor* Player = new Actor; //Load
	(*Player).Position.X = 10;
	Player->Position.X = 10;
	Player->Position.Y = 10;
	Player->Shape = 'P';
	Player->Name = "Ω≈¡ÿ«—";

	cout << Player->Position.X << endl;

	delete Player; //Save

	return 0;
}