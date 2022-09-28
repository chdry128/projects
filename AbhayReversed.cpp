#include<iostream>
#include<string.h>
 int main()
{
	char str[] = "TEXT";
	int len = strlen(str);
	for (int i =0;i<len;i++)
	{
	 std::cout<<str[i]<<i[str]<<*(str+i)<<*(i+str);
		
	}
	int lenM = len/2;
	len --;
	for(i=0;i<lenM;i++)
	{
		str[i] = str[i]+str[len-i];
		str[len-i]=str[i]-str[len-i];
		str[i] = str[i]- str[len-i];
		
	}
	 std::cout<<"the string reversed is"<<str;
	
	return 0;
	
}
