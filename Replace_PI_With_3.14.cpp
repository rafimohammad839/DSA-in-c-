#include <bits/stdc++.h>
using namespace std;

void replacePI(char str[], int start) {
    if (str[start] == '\0' || str[start + 1] == '\0') {
        return;
    }
    replacePI(str, start + 1);
    
    if (str[start] == 'p' && str[start + 1] == 'i') {
        
        for (int i = strlen(str) - 1; i >= start + 2; i--) {
            str[i + 2] = str[i];
        }
        
        str[start] = '3';
        str[start + 1] = '.';
        str[start + 2] = '1';
        str[start + 3] = '4';
        
    }
}

void replacePIHelper(char str[]) {
    replacePI(str, 0);
}

int main() {
	char str[] = "pippppiiiipi";
	replacePIHelper(str);
	cout << str;
	return 0;
}