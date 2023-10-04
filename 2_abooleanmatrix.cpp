#include<iostream>
using namespace std;
int main () {
	int row,col;
	cin>>row>>col;
	int a[1000][1000];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>a[i][j];
		}
	}


	int rows[row]={0};
	int columns[col]={0};
	int k=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(a[i][j]==1){
				rows[k]=i;
				columns[k]=j;
				k++;
			}
		}
	}

	for(int l=0;l<k;l++){

		int changer=rows[l];
		for(int i=0;i<col;i++){
			a[changer][i]=1;
		}

		int changec=columns[l];
		for(int j=0;j<row;j++){
			a[j][changec]=1;
		}
		
	}


	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}