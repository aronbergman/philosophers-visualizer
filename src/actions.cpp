#include <string>

using namespace std;

string space(int n)
{
    return string(n, ' ');
}

string think(int n)
{
    return "\033[48;5;203m" + string(n, ' ') + "\033[0m";
}

string taken_fork(int n)
{
    return string(n, 'F');
}

string sleep(int n)
{
    return "\033[48;5;039m" + string(n, ' ') + "\033[0m";
}

string eat(int n)
{
    return "\033[48;5;077m" + string(n, ' ') + "\033[0m";
}
