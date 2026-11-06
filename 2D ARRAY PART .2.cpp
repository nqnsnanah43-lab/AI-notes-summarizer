#include<iostream>
using namespace std;
int main(){
	
int cutie[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// ............SUM OF 2D ............Arrays//
for(int i=0;i<3;i++){
	int rowsum=0;
	for(int j=0;j<3;j++){
		rowsum+=[i][j];
		cout<<"sum is"<< rowsum<<endl;
	}
	cout<<endl;
}

	return 0;
}
