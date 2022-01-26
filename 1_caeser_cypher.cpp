#include<bits/stdc++.h>
using namespace std;

string encryptionDecryption(string str, int m);

int main()
{
	string message;
	int mod;
	printf("Enter the message: ");
	getline(cin, message);
	
	printf("Shift: ");
	cin>>mod;
	
	// converting the plaintext to chiphertext
	string encryptedMessage = encryptionDecryption(message, mod);
	
	// converting the chiphertext to plaintext
	int reverseMod = 26 - mod;
	string decryptedMessage = encryptionDecryption(encryptedMessage, reverseMod);
	
	cout<<"\nEncrypted Message: "<<encryptedMessage<<endl;
	cout<<"\nDecrypted Message: "<<decryptedMessage<<endl;	
	
	return 0;
}

string encryptionDecryption(string str, int m)
{
	string result = "";
	for(int i=0; str[i]!='\0'; i++)
	{
		if ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
		{
		
			if(isupper(str[i]))
			{
				result += char(int(str[i] - 65 + m)%26 + 65);
			}
			else
			{
				result += char(int(str[i] - 97 + m)%26 + 97);
			}
		}
		else
		{
			result += str[i];
		}
	}
	
	return result;
}
