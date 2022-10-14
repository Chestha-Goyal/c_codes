#include <bits/stdc++.h>
using namespace std;

int main(){
	int mas[] = {1,2,3,1,2,3,4,1,2};
    size_t count = sizeof(mas)/sizeof(mas[0]);

    size_t best = 0;
    unordered_set<int> unique;
    for (int i = 0; i < count; i++) {
        while (unique.find(mas[i]) != unique.end()) {
            unique.erase(mas[i - unique.size()]);
        }
        unique.insert(mas[i]);
        if (unique.size() > best) {
            best = unique.size();
        }
    }

    cout << "Length = " << best << endl;
}
