/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex17.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 12:21:08 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/27 12:21:08 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  int pattern;

  pattern = 0;
  for (int i = 0; i < A.size(); i++)
  {
      for (int j = 0; j < P.size(); j++)
      {
          if (A.at(i) + P.at(j) == S)
            pattern++;
      }
  }
    cout << pattern << endl;
}
