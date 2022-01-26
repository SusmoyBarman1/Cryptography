#include<bits/stdc++.h>
using namespace std;

string encryptionDecryption(string str, int m);
string polygonSubstitution(string str, int m, string type);

int main()
{
	string message;
	int block;
	printf("Enter the message: ");
	getline(cin, message);
	
	printf("Block: ");
	cin>>block;
	
	// converting the plaintext to chiphertext
	string encryptedMessage = polygonSubstitution(message, block, "encryption");
	
	// converting the chiphertext to plaintext
	//int reverseMod = 26 - mod;
	string decryptedMessage = polygonSubstitution(encryptedMessage, block, "decryption");
	
	//cout<<"\nEncrypted Message: "<<encryptedMessage<<endl;
	//cout<<"\nDecrypted Message: "<<decryptedMessage<<endl;	
	
	return 0;
}

string polygonSubstitution(string str, int m, string type)
{
	if(type == "encryption")
	{
		printf("\nEncryption\n");
	}
	else
	{
		printf("\nDecryption\n");
	}
	return "";
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
