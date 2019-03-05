#include <iostream>

using namespace std;

int n,q,z;
int s[2000],h[2000],l[2000];

int main(){
	
	cin>>n;
		
	for(int i=0;i<n;i++){
		cin>>s[i];
		if(i==0){
			h[i]=s[i];
			l[i]=s[i];
		}
		else{
			h[i]=h[i-1];
			l[i]=l[i-1];
			if(s[i]>h[i-1]){			
				h[i]=s[i];
				q++;
			}
			if(s[i]<l[i]){			
				l[i]=s[i];
				z++;
			}
		}
	}
	
	
	cout<<q<<" "<<z<<endl;
	
	
}
