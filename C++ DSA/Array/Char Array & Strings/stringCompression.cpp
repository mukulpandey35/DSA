#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int compress(vector<char>& chas) {
    int index = 0, count = 1;
    char prev = chas[0];

    for (int i = 1; i < chas.size(); i++) {
        if (chas[i] == prev) {
            count++;
        } else {
            // Store the previous character
            chas[index++] = prev;

            // If count is more than 1, store its digits
            if (count > 1) {
                int start = index;
                while (count > 0) {
                    chas[index++] = (count % 10) + '0';
                    count /= 10;
                }
                // Reverse the digits as they are added in reverse order
                reverse(chas.begin() + start, chas.begin() + index);
            }

            // Move to the next character
            prev = chas[i];
            count = 1;
        }
    }

    // Store the last character and its count if needed
    chas[index++] = prev;
    if (count > 1) {
        int start = index;
        while (count > 0) {
            chas[index++] = (count % 10) + '0';
            count /= 10;
        }
        reverse(chas.begin() + start, chas.begin() + index);
    }

    return index;  // Return the new length of the compressed array
}

int main() {
    vector<char> chas{'a', 'a', 'a', 'b', 'b', 'b', 'c', 'd', 'e', 'e'};

    int newLength = compress(chas);

    // Print the compressed characters up to the new length
    cout << "Compressed length: " << newLength << endl;
    cout << "Compressed characters: ";
    for (int i = 0; i < newLength; i++) {
        cout << chas[i];
    }
    cout << endl;

    return 0;
}
