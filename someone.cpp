#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;


bool isOpen = true;
int main()
{
		while(isOpen==true)
		{
			int kats;
			srand (time(NULL));
			kats = rand() % 10;
			if(kats <= 3)
			{
				cout<<"In the year twenty one oh one, war was beginning, the trigger of this conflict was when cats set up them (captain an co) the bomb. This subsequently resulted in all of their base belonging to cats. However one Zig can move for great justice to turn the tide of the war. "<<endl;
				cin.get();
			}
			else
			{
				cout<< "Your sadness parallels the homosexuality of your ancestors, whom merely accidentally seeded you and did not intentionally reproduce"<<endl; 
			}
			isOpen = false;
		}
}