#include <iostream>
#include <cstring>
#include "class.h"

void hash_name::EraseLetters()
{
    int c = strlen(name),j=0;

    for (int i=0;i<c;i++)
    {
        if(name[i]>=65 && name[i]<=90)
        {
            name[j]=name[i]+32;
            j++;
        }
        else if(name[i]>=97 && name[i]<=122)
            {
                name[j++]=name[i];
            }
    }
    name[j]='\0';
}
