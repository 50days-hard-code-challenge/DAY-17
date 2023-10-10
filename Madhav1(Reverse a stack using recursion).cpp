
#include <bits/stdc++.h>
using namespace std;


void insert_at_bottom(stack<int>& st, int x)
{

	if (st.size() == 0) {
		st.push(x);
	}
	else {

	

		int a = st.top();
		st.pop();
		insert_at_bottom(st, x);

		// push allthe items held in
		// Function Call Stack
		// once the item is inserted
		// at the bottom
		st.push(a);
	}
}

// Below is the function that
// reverses the given stack using
// insert_at_bottom()
void reverse(stack<int>& st)
{
	if (st.size() > 0) {

	
		int x = st.top();
		st.pop();
		reverse(st);


		insert_at_bottom(st, x);
	}
	return;
}

// Driver Code
int main()
{
	stack<int> st, st2;
	// push elements into
	// the stack
	for (int i = 1; i <= 4; i++) {
		st.push(i);
	}

	st2 = st;

	cout << "Original Stack" << endl;
	// printing the stack after reversal
	while (!st2.empty()) {
		cout << st2.top() << " ";
		st2.pop();
	}
	cout<<endl;


	reverse(st);
	cout << "Reversed Stack" << endl;
	// printing the stack after reversal
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
	return 0;
}
