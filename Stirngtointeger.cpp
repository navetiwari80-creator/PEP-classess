class Solution {
public:
    int myAtoi(String s) {
        int index = 0;
        int length = s.size();
      
        // Step 1: Skip leading whitespaces
        while (index < length && s[index] == ' ') {
            ++index;
        }

        // Check if string contains only spaces
        if (index == length) return 0;
      
        // Step 2: Check for sign character
        int sign = 1;
        if (s[index] == '-') {
            sign = -1;
        }

        // Move past the sign character if present
        if (s[index] == '-' || s[index] == '+') {
            ++index;
        }
      
        // Step 3: Convert digits to integer
        int result = 0;
        int overflowThreshold = INT_MAX / 10;

        while (index < length) {
            if (!isdigit(s[index])) {
                break;
            }

            int digit = s[index] - '0';
          
            // Step 4: Check for overflow/underflow before multiplication
            // If result > INT_MAX / 10, then result * 10 would overflow
            // If result == INT_MAX / 10, check if adding digit would overflow
            if (result > overflowThreshold || 
                (result == overflowThreshold && digit > 7)) {
                // Return INT_MAX for positive overflow, INT_MIN for negative overflow
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
          
            // Update result with current digit
            result = result * 10 + digit;
            ++index;
        }
      
        // Step 5: Apply sign and return final result
        return result * sign;
    }
};