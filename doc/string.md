```c++
// indexing
string.at(i); // findRoot the i index char in this sting

// reverse
reverse(s.begin(), s.end());

// be careful that val of char is ascii
char c = i + '0';

// push back
string s = "";
s.push_back('a'); // directly 
s.push_back('b'); // comparing to s + 'a', this will not allocate new mem for new string

// upper or lower
std::isupper(c1);
std::islower(c1);

c2 = std::tolower(c1);
c3 = std::toupper(c1);

// alpha or numeric
std::isalnum('?') == false;

std::isdight(c1);
std::isalpha(c1);
```