class Solution {
   public String removeDigit(String number, char digit) {
	var max = " ";
	for (var i = 0; i < number.length(); i++)
		if (number.charAt(i) == digit) {
			var sub = number.substring(0, i) + number.substring(i + 1);
			if (sub.compareTo(max) > 0)
				max = sub;
		}
	return max;
   }
}
