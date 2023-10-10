
#include <bits/stdc++.h>
using namespace std;


void printCombinations(char s[]){
	
	// find length of char array
	int l = strlen(s);


	for(int i = 0; i < pow(2, l - 1); i++){
		int k = i, x = 0;
		
	
		cout << s[x];
		x++;
		for(int j = 0; j < strlen(s) - 1; j++){
			
			
			if(k & 1)
				cout << " ";
			k = k >> 1;
			cout << s[x];
			
		
			x++;
		}
		cout << "\n";
	}
}


int main() {

	char input[] = "1214";
	printCombinations(input);
	
	return 0;
}
