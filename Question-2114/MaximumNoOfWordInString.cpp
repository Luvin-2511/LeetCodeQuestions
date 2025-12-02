class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxword = 0;
        for(int i=0;i<sentences.size();i++){
            int word = 1;
            for(char c:sentences[i]){
                if(c==' ') word++;
            }
            maxword = max(maxword,word);
        }
        return maxword;
    }
};