#include <iostream>
using namespace std;

bool isSkewedBST(int pre[], int n)
{
	if (n <= 2)
		return 1;
	int min_so_far = min(pre[n - 1], pre[n - 2]);
	//write the variable for maximum so far
	int max_so_far = max(pre[n - 1], pre[n - 2]);
	//complete the code from here
	for (int i = n - 3; i >= 0; i--)
	{
		if (pre[i] < min_so_far) {
			min_so_far = pre[i];
		}
		else if (pre[i] > max_so_far) {
			max_so_far = pre[i];
		}
		else return false;
	}
	return true;
}
	
int main()
{
	int pre[] = { 30,90,32,36,40,80 };
	//int pre[]={30,60,50,36,40,80};
	bool isSkewed = isSkewedBST(pre, 6);
	if (isSkewed)
		cout << "BST is skewed";
	else
		cout << "BST is not skewed";
	
	
return 0;
}