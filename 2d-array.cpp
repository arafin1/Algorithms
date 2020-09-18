int hourglassSum(vector<vector<int>> arr) {
        int max_so_far =1;
        int best_sum,sum;

        for(int row=0; row<=3; row++){
        for(int col=0; col<=3; col++){
            sum = arr[row][col] + arr[row][col+1] + arr[row][col+2] + arr[row+1][col+1] + arr[row+2][col] + arr[row+2][col+1] + arr[row+2][col+2];
            if(max_so_far==1){
                max_so_far=0;
                best_sum=sum;
            }
            else if(sum>best_sum)
                best_sum=sum;
        }
    }
    return best_sum;
}