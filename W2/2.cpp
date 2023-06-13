// Given two strings ransomNote and magazine, return true if ransomNote can be 
// constructed by using the letters from magazine and false otherwise
// Each letter in magazine can only be used once in ransomNote.
// sort both the strings and then check if the characters of ransomNote are present in magazine
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        int n = ransomNote.size();
        int m = magazine.size();
        if(m<n)
            return false;

        int j =0;
        int count =0;
        for(int i=0; i<m; i++)
        {
            if(magazine[i]==ransomNote[j])
            {
                j++;
                count++;
            }
        }

        if(count==n)
            return true;
        else 
            return false;
    }
};