vector<int> dynamicArray(int n, vector<vector<int>> q) {
   
    vector<int>res;
    int ans = 0;
    vector<vector<int>> seq(n);
    for(int i =0;i<q.size();i++){
        int r = ((q[i][1]^ans)%n);
        if(q[i][0] == 1){
            
            seq[r].push_back(q[i][2]);
            
        }
        else{
                
            int z = seq[r].size();
            int v = (q[i][2] % z);
            ans = seq[r][v];
            res.push_back(ans);
             
        }
        
        
    }
    return res;
}
