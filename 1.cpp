#include<bits/stdc++.h>
#include <windows.h> 
using namespace std;
char maze[20][100]={
	{"|  | +--- |    |    +--+	\\    /\\    / +--+ +--+ |    |---\\ |"},
	{"|__| |--- |    |    |  |	 \\  /  \\  /  |  | |--+ |    |   | |"},
	{"|  | +--- |___ |___ +__+	  \\/    \\/   +__+ |\\__ |___ |___/ ."},
	{""},
	{"-----         |   \\"},
	{" -|-  ------ ===------"},
	{"-----        /|\\/．\\_|"},
	{"/．．/"},
	{"  |--"},
	{"  ．．|"},
	{" ．． |"},
	{"     \\|"}
};
int main(){
	//cout<<maze[0][1]<<endl;
	for(int i=0;i<12;i++){
		for(int j=0;j<strlen(maze[i]);j++) {
			//cout<<1;
			Sleep(i*j/5+j);
			cout<<(char)maze[i][j];
		}
		cout<<endl;
	}
	return 0;
}//world 

