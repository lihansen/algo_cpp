```c++
#include <unordered_map>

std::unordered_map<std::string, int> myMap;

myMap.insert({"key1", 100});
myMap.insert({"key2", 200});

```


std::unordered_map是C++标准库中的哈希表实现。在使用unordered_map时，find方法和直接索引操作符（operator[]）有一些重要区别：

find方法：   
find方法用于在unordered_map中查找具有给定键（key）的元素。如果找到具有给定键的元素，find方法返回一个指向该元素的迭代器。如果没有找到具有给定键的元素，find方法将返回指向unordered_map末尾的迭代器（unordered_map::end()）。
```c++
std::unordered_map<int, std::string> my_map;
// ... 填充 my_map

auto it = my_map.find(42);
if (it != my_map.end()) {
    // 找到了具有键 42 的元素，可以使用 it->first 和 it->second 访问键和值
} else {
    // 没有找到具有键 42 的元素
}

```

直接索引操作符（operator[]）：
直接索引操作符用于访问具有给定键的元素。如果unordered_map中存在具有给定键的元素，直接索引操作符返回该元素的值。如果unordered_map中不存在具有给定键的元素，直接索引操作符将创建一个新元素，其键为给定的键，值为该类型的默认值，并返回新创建元素的引用。