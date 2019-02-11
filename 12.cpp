#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<set>
#include<functional>
#include<random>
#include<iterator>
#include<map>
using namespace std;
vector<int> vector_1;
vector<int> vector_2;
int  M, p, s;
long long int N;
int main(){
    cout << "How many values will be set randomly? N: ";
    cin >> N;
    cout << "Set a range of drawing from 0 to M. M: ";
    cin >> M;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, M);
    for (auto s = 0; s < N; ++s){
        vector_1.push_back(dis(gen));
    }
    set<int> k(vector_1.begin(), vector_1.end());
    k.erase(0);
    for(int i=2; i<M; i++){
        for(int j=2; j<=sqrt(i); j++){
            p=0;
            if ( i%j == 0 ){
                p = 1;
                break;
            }
        }
           if ((p==0) && (i>1)){
           vector_2.push_back(i);
           }
    }
      for(auto it: vector_2){
             cout<< it << " ====> ";
        for(auto it2: k){
             if(it2 % it == 0){                  
                   cout << it2 <<" ";
              }
        }
           cout<<endl;
    }
return 0;
