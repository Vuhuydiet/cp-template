#include <iostream>
#include <string>
#include <utility>
#include <tuple>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <cmath>
#include <stdio.h>
#include <numeric>
#include <typeinfo>
#include <sstream>
#include <time.h>

using namespace std;

// ----------------------------------------------------------------------------------------- //

#define __ostream_target cout

// ----------------------------------------------------------------------------------------- //

class __Printer {
public:
    template <typename T>
    __Printer& operator<< (const T& __data) {
        if (_counter >= _CAPACITY) 
            return *this;

        stringstream buffer;
        this->__print(buffer, __data);
        if (buffer.str().back() != '\n' && _space != -1)
            buffer << _space;
        size_t buffer_size = buffer.str().size() * sizeof(char);
        
        if (_counter + buffer_size <= _CAPACITY) {
            __ostream_target << buffer.str();
            _counter += buffer_size;
        }
        else {
            __ostream_target << "...\n";
            _counter = _CAPACITY;
        }
        return *this;
    }

    __Printer() {
        _start = clock();
    }

    ~__Printer() {
        _end = clock();
        __ostream_target << "\n----------------------------------------------\n";
        __ostream_target << "[Time taken]: " << _end - _start << " ms\n";
    }

    void _set_space(char space = ' ') { this->_space = space;}

private:
    template <typename T>
    void __print(ostream& out, const T& __data) {
        out << __data;
    }
    template <typename T, typename V>
    void __print(ostream& out, const pair<T, V>& p) {
        out << "[";
        this->__print(out, p.first);
        out << ", ";
        this->__print(out, p.second);
        out << "]"; 
    }
    template <typename T>
    void __print(ostream& out, const vector<T>& v) {
        out << "{ ";
        for(int i=0; i<v.size(); i++) {
            if (i != 0)
                out << ", ";
            out << "(" << i << ": ";
            this->__print(out, v[i]);
            out << ")";
        }
        out << " }";
    }
    template <typename T>
    void __print(ostream& out, const set<T>& s) {
        out << "{ ";
        for(auto it = s.cbegin(); it != s.cend(); it++) {
            if (it != s.cbegin())
                out << ", ";
            this->__print(out, *it);
        } 
        out << " }";
    }
    template <typename T>
    void __print(ostream& out, const unordered_set<T>& s) {
        out << "{ ";
        for(auto it = s.cbegin(); it != s.cend(); it++) {
            if (it != s.cbegin())
                out << ", ";
            this->__print(out, *it);
        } 
        out << " }";
    }
    template <typename T, typename V>
    void __print(ostream& out, const map<T, V>& mp) {
        out << "{ ";
        for(auto it = mp.cbegin(); it != mp.cend(); it++) {
            if (it != mp.cbegin())
                out << ", ";
            this->__print(out, *it);
        }
        out << " }";
    }    
    template <typename T, typename V>
    void __print(ostream& out, const unordered_map<T, V>& mp) {
        out << "{ ";
        for(auto it = mp.cbegin(); it != mp.cend(); it++) {
            if (it != mp.cbegin())
                out << ", ";
            this->__print(out, *it);
        }
        out << " }";
    }

private:
    const size_t _CAPACITY = 5e5; // 500 KB
    size_t _counter = 0LL;
    char _space = ' ';

    clock_t _start, _end;

} __printer;

// ------------------------------------------------------------------------------- //

template <typename T>
inline __Printer& __printArr(const T* a, int n, const char* name, int line) {
    __printer._set_space(-1);
    __printer << "[" << line << "] " << name << ": { ";
    for(int i = 0; i < n; i++) {
        if (i != 0)
            __printer << ", ";
        __printer << "(" << i << ": " << a[i] << ")";
    }
    __printer << " }\n";
    __printer._set_space();
    return __printer;
}

template <typename T>
inline __Printer& __print(const T& t, const char* name, int line) {
    __printer._set_space(-1);
    __printer << "[" << line << "] " << name << ": " << t;
    __printer._set_space();
    return __printer;
}

template <typename T>
inline __Printer& __println(const T& t, const char* name, int line) {
    __printer._set_space(-1);
    __print(t, name, line);
    __printer << "\n";
    __printer._set_space();
    return __printer;
}

inline __Printer& __ldb_helper(int line) {
    __printer._set_space(-1);
    __printer << "[" << line << "] ";
    __printer._set_space();
    return __printer;
}

// ------------- API -------------------------------------------------- //

#define __printArr(x, n)        __printArr(x, n, #x, __LINE__)
#define __print(x)              __print(x, #x, __LINE__)
#define __println(x)            __println(x, #x, __LINE__)

#define __db                    __printer
#define __ldb                   __ldb_helper(__LINE__)
#define __flag                  __ldb << "[Flag!]\n"