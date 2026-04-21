#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_valid_message(const string &text) {
    for (char c : text) {
        if (!isalpha(static_cast<unsigned char>(c)) && c != ' ') {
            return false;
        }
    }
    return true;
}

string rail_fence_decrypt(const string &ciphertext, int rails) {
    if (rails <= 1 || ciphertext.empty()) return ciphertext;

    int n = ciphertext.length();
    vector<vector<char>> fence(rails, vector<char>(n, '\n'));

    // Bước 1: đánh dấu zigzag
    int row = 0, direction = 1;
    for (int col = 0; col < n; col++) {
        fence[row][col] = '*';
        row += direction;

        if (row == 0 || row == rails - 1)
            direction = -direction;
    }

    // Bước 2: điền ký tự theo hàng
    int index = 0;
    for (int i = 0; i < rails; i++) {
        for (int j = 0; j < n; j++) {
            if (fence[i][j] == '*' && index < n) {
                fence[i][j] = ciphertext[index++];
            }
        }
    }

    // Bước 3: đọc lại zigzag
    string result;
    row = 0;
    direction = 1;

    for (int col = 0; col < n; col++) {
        result += fence[row][col];
        row += direction;

        if (row == 0 || row == rails - 1)
            direction = -direction;
    }

    return result;
}
