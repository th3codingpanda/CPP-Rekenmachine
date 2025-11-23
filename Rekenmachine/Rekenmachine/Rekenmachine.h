#pragma once
class Rekenmachine
{
public:
	Rekenmachine();
	~Rekenmachine();
private:
	void AskNumberInt();
	void AskNumberFloat();
	void Add(float a, float b);
	void Minus(float a, float b);
	void Times(float a, float b);
	void Devided(float a, float b);
	void Modulo(int a, int b);

};

