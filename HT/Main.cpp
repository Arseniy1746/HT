#include <iostream>
#include "sha1.h"
#include "chat.h"
#include <string.h>

int main()
{
        Chat chat;

        chat.reg((char*)"user1", (char*)"qwerty12345", sizeof("qwerty12345"));
        chat.reg((char*)"user2", (char*)"asdfg", sizeof("asdfg"));
        chat.reg((char*)"user3", (char*)"zsdrt", sizeof("zsdrt"));
        chat.reg((char*)"user4", (char*)"pasgas", sizeof("pasgas"));
        chat.reg((char*)"dfd11111", (char*)"pasgas", sizeof("pasgas"));
        chat.reg((char*)"sdgss", (char*)"pasgas", sizeof("pasgas"));
        chat.reg((char*)"xzxvxcccc", (char*)"pasgas", sizeof("pasgas"));
        chat.reg((char*)"123", (char*)"pasgas", sizeof("pasgas"));
        chat.reg((char*)"34", (char*)"pasgas", sizeof("pasgas"));
        chat.reg((char*)"111", (char*)"pasgas", sizeof("pasgas"));

        chat.unreg((char*)"111");
        chat.unreg((char*)"dfd11111");
    return 0;
}
