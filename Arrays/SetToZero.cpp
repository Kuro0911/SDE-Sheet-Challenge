class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        vector<bool> table(matrix.size(), false);
        for (int i = 0; i < matrix.size(); i++)
        {
            bool isZero = false;
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    if (isZero == false)
                    {
                        for (int j1 = 0; j1 < j; j1++)
                        {
                            matrix[i][j1] = 0;
                        }
                        isZero = true;
                    }
                    if (table[j] == false)
                    {
                        for (int i1 = 0; i1 < i; i1++)
                        {
                            matrix[i1][j] = 0;
                        }
                        table[j] = true;
                    }
                }
                else if (isZero || table[j])
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};