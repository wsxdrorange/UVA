#include <iostream>
#include <map>
#include <string.h>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    set <string> ignoreWords;
    string titles [200];
    string n, ln;
    int count = 0, changed = 0;
    map <string, string> kwic;
    char* cstr;
    char* split[10000];

    while(getline(cin,n) && !(n.empty())){
        if(n.compare("::") == 0){
            changed = 1;
            count = 0;
            continue;
        }
        if (changed == 0){
            ignoreWords.insert(n);
        }
        else{
            titles[count] = n;
        }
    }
    count = 0;
    for (int i = 0; i < titles->length(); i++){
        set <string> tempIgnore = ignoreWords;

        //Split each title into array delimited by spaces
        cstr = &(titles[i])[0u];
        split[count] = strtok(cstr," ");
        while(split[count] != NULL){
            split[++count] = strtok(NULL, " ");
        }
        for (int j = 0; j < 10000; j++){
            if (tempIgnore.find(split[j]) == tempIgnore.end()){ //not found in ignore list
                kwic.insert(pair <string, string> (split[j],titles[i]));
                tempIgnore.insert(split[j]);
            }
        }
    }
    map <string, string>::iterator it;
    for (it = kwic.begin(); it != kwic.end(); it++){
        count = 0;
        for (int j = 0; j < 10000; j++){
            split[j] = "";
        }
        cstr = &(it->second)[0u];
        split[count] = strtok(cstr," ");
        while(split[count] != NULL){
            split[++count] = strtok(NULL, " ");
        }
        for (int j = 0; j < 10000 - 1; j++){
            if (it->first.compare(split[j]) == 0){
                string temp = it->first;
                transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
                cout << temp;
            }
            else{
                cout << split[j];
            }
            if (split[j+1] != NULL){
                cout << " ";
            }
            else{
                cout << "\n";
            }
        }
    }
    return 0;
}
