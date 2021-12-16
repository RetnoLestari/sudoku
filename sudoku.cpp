#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;
	int a[3][3] = {
			{1,2,3},
			{4,5,6},
			{7,8,9}
			};
void tictactoe(int a[3][3])
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		cout<< a[i][j]<<" | ";
		cout<<endl;
	}
}

int main(){
	tictactoe(a);

            
	return 0;

}
