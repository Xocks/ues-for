#include <iostream>
using namespace std;

int main()
{
	//i是总和
	double  i = 0;
	//k是输入的数
	double k = 0;
	cin >> k ;
	for (int n = 1; 1; n++) {
		//n是要找的数
		i += 1.0 / n;//数字之后加.0直接变为整数除法
		
		if (i > k) {
			cout << n << endl;
			break;
				
		}
	    
	}
    system("pause");

    return 0;
    
 
}

