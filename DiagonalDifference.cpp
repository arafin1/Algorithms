
int diagonalDifference(vector<vector<int>> arr) {
    int d1 = 0;
    int d2 =0;
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr.size();j++){
            if(i == j){
                d1 +=arr[i][j];
                d2+= arr[i][arr.size() - j -1];
            }
            
        }
    }
 
    return abs(d1-d2);

}