//
// Created by Hansen Li on 4/25/23.
//

#include "../../include/Array.h"


bool isValidSudoku(vector<vector<char>> &board) {
    unordered_set<int> row;
    unordered_set<int> col;
    for (int i = 0; i < board.size(); i++) {

        for (int j = 0; j < board[i].size(); j++) {
            if (std::isdigit(board[i][j])) {
                int ij = int(board[i][j] - '0');
                if (row.count(ij) > 0) {
                    return false;
                }
                row.insert(ij);
            }
            if (isdigit(board[j][i])) {
                int ji = int(board[j][i] - '0');
                if (col.count(ji) > 0) {
                    return false;
                }
                col.insert(ji);
            }
        }
        row.clear();
        col.clear();

    }
    unordered_set<int> block;
    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            for (int k = i; k < i + 3; k++) {
                for (int l = j; l < j + 3; l++) {
                    if (std::isdigit(board[k][l])) {
                        int kl = int(board[k][l] - '0');
                        if (block.count(kl) > 0) {
                            return false;
                        }
                        block.insert(kl);
                    }
                }
            }
            block.clear();
        }
    }
    return true;
}


bool isValidSudoku2(vector<vector<char>>& board) {
    int rows[9][9];
    int columns[9][9];
    int subboxes[3][3][9]; // similar to dp arr

    memset(rows,0,sizeof(rows));
    memset(columns,0,sizeof(columns));
    memset(subboxes,0,sizeof(subboxes));
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            char c = board[i][j];
            if (c != '.') {
                int index = c - '0' - 1;
                rows[i][index]++;
                columns[j][index]++;
                subboxes[i / 3][j / 3][index]++;
                if (rows[i][index] > 1 || columns[j][index] > 1 || subboxes[i / 3][j / 3][index] > 1) {
                    return false;
                }
            }
        }
    }
    return true;
}