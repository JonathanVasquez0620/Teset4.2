//Write a program that creates a list of planets and their distance from the sun

#include <iostream>
#include <iomanip>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
	unordered_map < string,  int> planets;
	
	planets["Mercury"] = 58;
	planets["Venus"] = 108;
	planets["Earth"] = 150;
	planets["Mars"] = 228;
	planets["Jupiter"] = 778;
	planets["Saturn"] = 1427;
	planets["Uranus"] = 2870;
	planets["Neptune"] = 4497;
	planets["Pluto"] = 58870;

	string planet;
	cout << "Enter the name of a plant to find it's distance from the sun: " << endl;
	cin >> planet;
	auto pos = planets.find(planet);
	if (pos == planets.end())
	{
		cout << "No matching planet" << endl;
	}
	else
	{
		cout << pos->first << " is " << pos->second << " million km away from the sun." << endl;
	}
	return 0;
}