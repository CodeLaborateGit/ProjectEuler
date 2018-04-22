#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<cmath>

using namespace std;

int main(){
	fstream file("p099_base_exp.txt", fstream::in);
	string temp,str;
	int i=0, j=0;
	int b, e, max = 0, maxl = 1, tmp = 0;
	while(getline(file,temp,'\n')){
	        stringstream line(temp);
		getline(line, str, ',');
		istringstream base(str);
		base>>b;
		getline(line,str);
                istringstream exponent(str);
		exponent>>e;
		tmp = e * log(b);
		if(max < tmp){
			max = tmp;
			maxl = j+1;
		}
                j++;
	}
	printf("Largest index form number is on line: %d\n" , maxl);
	return 0;
}
