class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        if(magazine.length() <ransomNote.length()){
            return false;
        }
       

        int [] letters = new int[256];
        for(char c: ransomNote.toCharArray()){
            letters[c]++;
        }
        for(char c:magazine
           .toCharArray()){
            letters[c]--;
        }
        for(int i: letters){
            if(i >0){
                return false;
            }
        }
        return true;
    }
}