#include <cstdlib>
#include <iostream>

int main()
{
    annoy:
    int command{system("sudo protonvpn c -f")};
    if(command != 0)
    {
        goto annoy;
    }
    return EXIT_SUCCESS;
}
