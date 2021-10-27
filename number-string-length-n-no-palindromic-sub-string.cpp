/*====================================
Auther:    Shyam Makwana
Problem:   number-string-length-n-no-palindromic-sub-string.cpp
====================================*/
//for checking that given string is palindrome or  not
#include <bits/stdc++.h>
using namespace std;
int main(){
	char ar[40];
	cin.getline(ar,30);
	int l=strlen(ar);
int i;
	int flag=0;
	for(i=0;i<l/2;i++){
		if(str[i]==str[l-i-1])
			flag++;
	}
	if(flag==i)
		cout<<"Palindrome";
	else
		cout<<"Not palindrome";
}
