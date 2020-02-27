/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 11:20:52 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/27 11:20:52 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 整数aと5個の整数x1,x2,x3,x4,x5が与えられます。
** 5個の整数のうちaと等しいものの個数をfor文を使って求めてください。
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, count;
    vector<int> x(5);

    cin >> a;
    for (int i = 0; i < 5; i++)
    {
        cin >> x.at(i);
    }

    count = 0;
    for(int i = 0; i < 5; i++)
    {
        if (x.at(i) == a)
            count++;
    }
    cout << count << endl;
}