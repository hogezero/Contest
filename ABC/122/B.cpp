#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int counter = 0;
    int ans = 0;
    cin >> s;

    for(int i = 0;i < s.size(); i++){
        if(s.at(i) == 'A' || s.at(i) == 'C' || s.at(i) == 'G' || s.at(i) == 'T'){
            counter++;
        }else{
            if(counter == 0){
                continue;
            }
            if(counter < (s.size()-i)){
                if(counter > ans){
                    ans = counter;
                }
                counter = 0;
                continue;
            }
            else{
                if(counter > ans){
                    ans = counter;
                }
                break;
            }
        }
    }
    if(counter > ans){
        ans = counter;
    }
    cout << ans << endl;
}