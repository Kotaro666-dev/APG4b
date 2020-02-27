/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice02.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 11:35:22 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/27 11:35:22 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
例題「3要素の2つの配列A, Bに同じ要素が含まれているかどうか判定する」
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> A(3), B(3);
  for (int i = 0; i < 3; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < 3; i++) {
    cin >> B.at(i);
  }

  bool ans = false;

    for (int i = 0; i < A.size(); i++)
    {
        for(int j = 0; j < B.size(); j++)
        {
            if (A.at(i) == B.at(j))
                ans = true;
        }
    }

    if (ans == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

