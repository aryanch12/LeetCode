class Solution {
public:
    string reverseVowels(string s) {
        
        int first=0;
        int last=s.length()-1;
        
        while(first<last)
        {
            
//if first and last character both are vowels then swap it 
            if((s[first]=='a'||s[first]=='e'||s[first]=='i'||s[first]=='o'||s[first]=='u'||s[first]=='A'||s[first]=='E'||s[first]=='I'||s[first]=='O'||s[first]=='U')&&(s[last]=='a'||s[last]=='e'||s[last]=='i'||s[last]=='o'||s[last]=='u'||s[last]=='A'||s[last]=='E'||s[last]=='I'||s[last]=='O'||s[last]=='U'))
{
    swap(s[first],s[last]);
    first++;
    last--;
}  

            
//if first is vowel but last is not vowel then decrement last
            
else if((s[first]=='a'||s[first]=='e'||s[first]=='i'||s[first]=='o'||s[first]=='u'||s[first]=='A'||s[first]=='E'||s[first]=='I'||s[first]=='O'||s[first]=='U')&&(s[last]!='a'||s[last]!='e'||s[last]!='i'||s[last]!='o'||s[last]!='u'||s[last]!='A'||s[last]!='E'||s[last]!='I'||s[last]!='O'||s[last]!='U'))
{
    last--;
}
            

//if last is vowel but first is not vowel then incremnt first
        
else if((s[first]!='a'||s[first]!='e'||s[first]!='i'||s[first]!='o'||s[first]!='u'||s[first]!='A'||s[first]!='E'||s[first]!='I'||s[first]!='O'||s[first]!='U')&&(s[last]=='a'||s[last]=='e'||s[last]=='i'||s[last]=='o'||s[last]=='u'||s[last]=='A'||s[last]=='E'||s[last]=='I'||s[last]=='O'||s[last]=='U'))   
{
    first++;
}

            
//if both are not vowel then increment first and decrement last             

else
{
    first++;
    last--;
}
               
        }
        
        return s;
        
    }
};