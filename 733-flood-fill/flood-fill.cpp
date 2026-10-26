
class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int start, int color) {
        // Boundary check
        if (r < 0 || c < 0 || r >= image.size() || c >= image[0].size()) {
            return;
        }

        // Stop if the pixel has a different color
        if (image[r][c] != start) {
            return;
        }

        // Change the color
        image[r][c] = color;

        // Visit all 4 adjacent pixels
        dfs(image, r + 1, c, start, color); // Down
        dfs(image, r - 1, c, start, color); // Up
        dfs(image, r, c + 1, start, color); // Right
        dfs(image, r, c - 1, start, color); // Left
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int start = image[sr][sc];

        if (start == color) {
            return image;
        }

        dfs(image, sr, sc, start, color);

        return image;
    }
};
