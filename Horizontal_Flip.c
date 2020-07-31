void flip_horizontal_axis(int n, int matrix[n][n]){
    int temp;
    for(int i=0;i<n/2;i++)
    {
        for (int j = i; j<n;j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[n-i-1][j];
            matrix[n-i-1][j] = temp;
        }
    }
}
