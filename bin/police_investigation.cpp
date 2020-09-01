/**
 * @file police_investigation.cpp
 *
 * @version 01.01 2020-9-1
 *
 * @brief https://training.olinfo.it/#/task/ois_police/statement
 *
 * @ingroup police_investigation
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */

#include <bits/stdc++.h>

using namespace std;

int N, K, i, temp, pos;
vector <int> V;
vector <bool> Vv;

int main()
{
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
//  5 3 2 4 1 3 3 -> 3
//  5 1 3 2 1 2 5 -> 0
//  5 5 2 3 1 1 5 -> -1

  cin >> N >> K;
  for(i = 0; i < N; i++){
    cin >> temp;
    V.push_back(temp-1);
    Vv.push_back(true);
  }

  pos = 0;
  i = 0;

  while(pos != K-1 && Vv[pos]){
    Vv[pos] = false;
    pos = V[pos];
    i++;
  }

  if(!Vv[pos]){
    i = -1;
  }

  cout << i;

  return 0;
}
