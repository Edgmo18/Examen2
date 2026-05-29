#include <iostream>
using namespace std;

int main(){
	
	int m[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
    };
    
    int i;
    int j;
    
    for(i=0; i<2; i++){
    	for(j=0; j<3; j++){
    		cout<<"&m[" << i <<"][" << j <<"] = "<< static_cast<const void *>(&m[i][j])<<endl;
		}
	}
    
    return 0;
}
