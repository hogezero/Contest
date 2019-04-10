#include <iostream>
#include <string>

using namespace std;

int main(){
    string w;
    string ans;

    cin >> w;
    for(int i = 0; i < w.size(); i++){
        if(w.at(i) == 'a' || w.at(i) == 'i' || w.at(i) == 'u' \
        || w.at(i) == 'e' || w.at(i) == 'o'){
            continue;
        }
        else{
            ans.push_back(w.at(i));
        }
    }
    cout << ans << endl;

}
