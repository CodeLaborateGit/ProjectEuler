#include<fstream>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>



long long alpha(char a){
	switch(a){
	case 'A': return 1; break;
	case 'B': return 2; break;
	case 'C': return 3; break;
	case 'D': return 4; break;
	case 'E': return 5; break;
	case 'F': return 6; break;
	case 'G': return 7; break;
	case 'H': return 8; break;
	case 'I': return 9; break;
	case 'J': return 10; break;
	case 'K': return 11; break;
	case 'L': return 12; break;
	case 'M': return 13; break;
	case 'N': return 14; break;
	case 'O': return 15; break;
	case 'P': return 16; break;
	case 'Q': return 17; break;
	case 'R': return 18; break;
	case 'S': return 19; break;
	case 'T': return 20; break;
	case 'U': return 21; break;
	case 'V': return 22; break;
	case 'W': return 23; break;
	case 'X': return 24; break;
	case 'Y': return 25; break;
	case 'Z': return 26; break;
	}
}

long long count(std::string str){
	long long ans=0;
	for(int i=0;i<str.size();++i){
		ans += alpha(str[i]);
	}
	return ans;
}


int main(){
	std::vector<std::string> names;
	std::fstream file("names.txt", std::fstream::in);
	std::string str;
	long long ans=0;
	while(getline(file,str,'"')){
		if(str[0]!= ',')
			names.push_back(str);
	}
	std::sort (names.begin(), names.end());
	for(int i = 0; i<names.size();++i)
		ans += i * count(names[i]);
	std::cout<<ans<<std::endl;
	return 0;
}
