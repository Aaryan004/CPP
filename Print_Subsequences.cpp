#include <iostream>
#include <string>
using namespace std;
void printSubsequences(string input, string output){
    if(input.length()==0){
        cout<<output<<endl;
        return;
    }
    printSubsequences(input.substr(1),output);
    printSubsequences(input.substr(1),output+input[0]);
}
int main(){
string input;
cin>>input;
string output="";
printSubsequences(input,output);
}
