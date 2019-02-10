#include<bits/stdc++.h>
using namespace std;
class mystr{
int len;
char *str;
public:
    mystr();
    mystr(int n);
    bool setter(char *p);
    void print();
};
mystr::mystr(){
len =100;
str = (char*)malloc(sizeof(char)*100);
}
mystr::mystr(int n){
len=n;
str= (char*)malloc(sizeof(char)*len);
}
bool mystr::setter(char *p){
int s=0;
for(int i=0;p[i]!=NULL;i++) s++;
if(s<=len) {str=p; return true;}
else return false;
}
void mystr::print(){
char *s=str;
cout<<str;
//int main(){
//mystr str(50);
//if(str.setter("i love myself")) str.print();
//else cout<<"invalid";
//}

}
