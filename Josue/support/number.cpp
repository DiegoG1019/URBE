#include<string>
#include<iostream>
#include<sstream>
using namespace std;

int getDigit(int N,int n){
	string out;
	stringstream sa,sb;
	sa << N; out = sa.str();
	sb << out.at(n);
	return stoi(sb.str()); 
};

int getDigitLen(int n){
	string out;
	stringstream sa,sb;
	ss << n; out = ss.str();
	sb << out.size()
	return stoi(sb.str());
}

int* sortInt(int arr&,bool sort&){ //I give up. I'll research how to implement radix sorting later...
	int a,b;
	b=0;
	int ord = 0;
	for(a=arr.begin();a<arr.end();a++){
		if(ord<getDigitLen(arr[a])){ord=getDigitLen(arr[a])};
		
		b++;
	}
	int narr[b];
	while(ord>=0){
		for(a=arr.begin();a<arr.end();a++){
			
		}
	}
}
