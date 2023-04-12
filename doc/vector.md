```c++
for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

// convert a vector to an array
int* arr_ptr = &v[0];
```