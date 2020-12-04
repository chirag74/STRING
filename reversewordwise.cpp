#include<iostream>
#include<string.h>
using namespace std;
void reversestringbywords(char arr[])
{
	int n=strlen(arr);
	int s=0;
	int e=n-1;
	while(s<e)
	{
		char temp=arr[s];
		arr[s]=arr[e];
		arr[e]=temp;
	s++;
	e--;
	}
	int start=0;
	for(int i=0;i<=n;i++)
	{
		if(arr[i]==' '||arr[i]=='\0')
		{
			int end=i-1;
			while(start<end)
			{
				char temp=arr[start];
				arr[start]=arr[end];
				arr[end]=temp;
			start++;
			end--;
			}
			start=i+1;
		}
	}
}
int main()
{
	char arr[10000];
	cin.getline(arr,10000);
	reversestringbywords(arr);
	cout<<arr<<endl;
	
}

