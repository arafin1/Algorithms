 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
       /* Runtime : 0ms
          memory: 9.4mb
        if(n == 0){
            return;
        }
       int ns = 0;
        n=n-1;
       for(int i = m; i<nums1.size();i++){
           nums1[i] = nums2[n];
           n--;
           
       }
        sort(nums1.begin(),nums1.end());

       */
        //Runtime : 4ms
        //Memory: 9mb
         if(n == 0){
            return;
        }
       int ns = 0;
       for(int i = m; i<nums1.size();i++){
           nums1[i] = nums2[ns];
           ns++;
           
       }
        sort(nums1.begin(),nums1.end());

    }