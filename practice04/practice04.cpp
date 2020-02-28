/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice04.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 20:51:26 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/27 20:51:26 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
AからBまでの総和を求める関数： sum_range
 */

#include <bits/stdc++.h>
using namespace std;

int sum_range(int A, int B)
{
    // Bの値がAに到達した場合のベースケース
    if (A == B)     
    {
        return A;
    }

    return B + sum_range(A, (B - 1));
}

int main()
{
    int A, B;
    cin >> A >> B;

    if (A > B)
    {
        swap(A, B);
    }
    int sum;
    sum = sum_range(A, B);
    cout << sum << endl;
}