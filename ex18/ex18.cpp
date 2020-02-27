/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex18.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 12:41:56 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/27 12:41:56 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
あるゲーム大会にはN人が参加しM試合が行われました。
各参加者には1からNの番号が割り当てられています。
試合に関する情報が与えられるので、
M回の試合がすべて終了した時点での試合結果の表を作成し、出力してください。
ただし、同じ参加者のペアについて2回以上試合が行われることはないとします。
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }

    vector<vector<char>> result_map(N, vector<char>(N));

    // init by '-'
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            result_map.at(i).at(j) = '-';
        }
    }

    // N×Nのchar型の2次元配列のすべての要素を'-'で初期化
    // vector<vector<char>> result_map(N, vector<char>(N, '-'));

    // input
    for (int i = 0; i < M; i++)
    {
        A.at(i)--;
        B.at(i)--;
        result_map.at(A.at(i)).at(B.at(i)) = 'o';
        result_map.at(B.at(i)).at(A.at(i)) = 'x';
    }

    // display the result map
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << result_map.at(i).at(j);
            if (j == N - 1)
            {
                cout << endl;
            }
            else
            {
                cout << " ";
            }
        }
    }

}

