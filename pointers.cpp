//Work by Alemania, Hazel Andreah V. /CPEDSTRUCTLAB-E24
#include <iostream>
using namespace std;

void msgs(char *, char *);
void strCat(char *, char *);
void strCpy(char *, char *);
void strRev(char *, char *);
int strCmp(char*, char *);

void msgs(char *s1, char *s2){
	cout << "Enter first message: ";
	gets(s1);
	cout << "Enter second message: ";
	gets(s2);
}

void strCat(char *s1, char *s2){
	while(*s1)
		*s1++;
	while(*s1++ = *s2++);
}

void strCpy(char *s1, char *s2){
	while(*s1++ = *s2++);
}

void strRev(char *s1, char *s2){
	int i = 0;
	while(*s1){
		s1++;
		i++;
	}
	while(i >= 0){
		s1--;
		*s2 = *s1;
		s2++;
		--i;
	}
}

int strCmp(char *s1, char *s2){
	while(*s1 == *s2){
		if(*s1 == '\0' || *s2 == '\0')
			break;
		s1++;
		s2++;
	}
	if(*s1 == '\0' && *s2 == '\0')
		return 1;
	return 0;
}

int main(){
	int choice;
	char str1[50];
	char str2[50];
	char str3[50];
	do{
		cout << "1. strcat" << endl;
		cout << "2. stcpy" << endl;
		cout << "3. strrev" << endl;
		cout << "4. strcmp" << endl;
		cout << "5. Exit" << endl;
		cout << "Enter choice: ";
		cin >> choice;
		system("cls");
		switch(choice){
			case 1:
				cin.ignore();
				cout << "1. strcat\n\n";
				msgs(str1, str2);
				strCat(str1, str2);
				cout << "\nstrcat: " << str1 << endl << endl;
				system("pause");
				system("cls");
				break;
			case 2:
				cin.ignore();
				cout << "2. strcpy\n\n";
				msgs(str1, str2);
				strCpy(str3, str2);
				cout << "\nSecond message strcpy: " << str3 << endl << endl;
				system("pause");
				system("cls");
				break;
			case 3:
				cin.ignore();
				cout << "3. strrev\n\n";
				msgs(str1, str2);
				strRev(str1, str2);
				cout << "\nFirst message strrev: " << str2 << endl << endl;
				system("pause");
				system("cls");
				break;
			case 4:
				cin.ignore();
				cout << "4. strcmp\n\n";
				msgs(str1, str2);
				strCmp(str1, str2);
				if(strCmp(str1, str2))
					cout << "\nStrings are both equal" << endl << endl;
				else
					cout << "\nStrings are not equal" << endl << endl;
				system("pause");
				system("cls");
				break;
			case 5:
				exit(1);
		}
	}while(1);
}
