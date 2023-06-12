class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for (int i = 0; i < details.size(); i++) {
            char tensDigit = details[i][11];
            char onesDigit = details[i][12];
            int age = (tensDigit - '0') * 10 + (onesDigit - '0');
            if (age > 60) {
                count++;
            }
        }
        return count;
    }
};
// class Solution
// {
//     public:
//         int countSeniors(vector<string> &details)
//         {
//             int count = 0;
//             for (int i = 0; i < details.size(); i++)
//             {
//                 std::string substring = details[i].substr(11, 2);	// Assuming the age substring starts at index 11 and has a length of 2
//                 int age = std::stoi(substring);
//                 if(age>60)
//                 {
//                     count++;
//                 }
//             }
//             return count;
//         }
// };