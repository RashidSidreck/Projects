#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

string Reverse(const string&input){
    string reversed = input;
    reverse(reversed.begin(), reversed.end());

    return reversed;
}

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

string CapitalizeSecondLetter(string data) {
    for (int i = 1; i < data.size(); i++) {
        if (data[i - 1] == ' ' && isalpha(data[i])) {
            data[i] = toupper(data[i]);
        }
    }
    return data;
}


int main(){
    ofstream Prepared_File("Com221.txt");
    if(Prepared_File.is_open()){
        string fileData;
       
       Prepared_File<<"This is the Advanced Computer Programming Module";
        Prepared_File.close();
        int vowelCount = 0;

         ifstream Read_File("Com221.txt");
        getline(Read_File,fileData);

        for(char ch : fileData){
            if(isVowel(ch)){
                vowelCount++;
            }
        }
        cout<<"This is the Number of Vowels:"<<vowelCount<<endl;

        istringstream wordStream(fileData);
        string word;
        int wordCount =0;

        while(wordStream >> word){
            wordCount++;
        }

        cout<<"Number of word: "<<wordCount<<endl;

        string reversedContent =Reverse(fileData);

        cout<<"Reversed Content: "<<reversedContent<<endl;

         string capitalizedContent = CapitalizeSecondLetter(fileData);
        cout << "Capitalized Content: " << capitalizedContent << endl;
        
    }
    else{
        cout<<"file unable to open"<<endl;
    }

    return 0;
}