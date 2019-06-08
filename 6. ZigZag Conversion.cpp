class Solution {
   public:
    struct dir {
        int x, y;
    } dir;
    char array[2000][500];
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        string result = "";
        memset(array, 0, sizeof(array));
        int i = 0, r = 0, c = 0;
        dir.x = 1;
        dir.y = 0;
        while (s[i] != '\0') {
            array[r][c] = s[i];
            if (r == 0) {
                dir.x = 1;
                dir.y = 0;
                r = r + dir.x;
                c = c + dir.y;
            } else if (r == numRows - 1) {
                dir.x = -1;
                dir.y = 1;
                r = r + dir.x;
                c = c + dir.y;
            } else {
                r = r + dir.x;
                c = c + dir.y;
            }
            i++;
        }
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < c + 1; j++) {
                if (array[i][j] != '\0') {
                    result += array[i][j];
                }
            }
        }
        return result;
    }
};
