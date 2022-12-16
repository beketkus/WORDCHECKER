#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void WordDivider(const string& str){
	string n,k;
	n = str;
	int i = 0, cnt = 1;
	
	for(int j = 0; j < n.size(); j++) if(n[j] == ' ') cnt++;
	for(int j = 0; j < cnt; j++){
	string k = "";
	while(n[i] != ' ' and i < n.size()){
		k += n[i];
		i++;
		}
	i++;
	}
}
	
