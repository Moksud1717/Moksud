include<bits/stdc++.h>
using namespace std;
int main(){
     int n, k;
     cin>>n>>k;
     string s;
     cin>>s;

    sort(s.begin(), s.end());
  //The sort function is used to sort the characters in the string in ascending order.

    int sum = s[0] - 'a' + 1;
    k--;
    char prev = s[0];

//It initializes the sum variable with the value of the first character's position in the alphabet. The variable prev is used to keep track of the previously selected character. It also decrements k by 1./
     for(int i = 1; i < n; i++){
      if(!k){
         break;
     }
     if(s[i] - prev >= 2){
       prev = s[i];
       sum += s[i] - 'a' + 1;
       k--;
    }
  }
//The loop iterates through the sorted string starting from the second character. It checks if there are remaining operations (k > 0) and if the difference between the current character (s[i]) and the previous character (prev) is at least 2. If these conditions are met, the character is selected, and its position value in the alphabet is added to the sum. The loop continues until either k becomes 0 or the end of the string is reached./
  if(!k){
    cout<<sum<<endl;
    return 0;
  }
  cout<<-1;
}






/*After the loop, it checks if all operations have been performed (k == 0). If so, it prints the sum. Otherwise, it prints -1.
Let's illustrate the code with an example:
Input:
6 2
cbadef
Output:
5
Explanation:
    The input string is sorted to become "abcdef."
    The first character, 'a,' is selected, and its position value (1) is added to the sum.
    The second character, 'b,' is selected, and its position value (2) is added to the sum.
    The third character, 'c,' is skipped because the difference from the previous character is less than 2.
    The fourth character, 'd,' is selected, and its position value (4) is added to the sum.
    The fifth character, 'e,' is skipped.
    The sixth character, 'f,' is selected, and its position value (6) is added to the sum.
The final sum is 1 + 2 + 4 + 6 = 13.
