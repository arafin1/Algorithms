int maxArithmeticSubarray(vector<int> array) {
  int maxLen = 0;
  for(int i = 0; i < array.size() - 1; i++) {
     int j = i;
     int common_difference = array[i+1] - array[i];
     while(j < array.size() - 1 && (array[j + 1] - array[j] == common_difference))
          j++;
     int max_j = j;
     maxLen = max(maxLen, max_j - i + 1);
  }
  return maxLen;
}