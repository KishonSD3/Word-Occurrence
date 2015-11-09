//
//  main.cpp
//  Act35
//
//  Created by Kishon Daniels on 11/3/15.
//  Copyright © 2015 HackStack. All rights reserved.

#include <iostream>
#include <string>
using namespace std;

int main()

{
    
string paragraph = "I love your dark eyes,\n"
                   "And your curly hair, \n"
                    "I love your smile \n"
                   "And the way you care,\n"
                   "I love your deep kisses, \n"
                   "I love your soft touch, \n"
                   "I love you, I love you, \n"
                   "I love you so much \n";

    cout << paragraph << endl;

    int position = paragraph.size();
    
    while (1)
        
    {
        position = paragraph.rfind("love", position -1);
        
        if (position==string::npos)
            
            break;
        
        cout << position << endl;
        
        paragraph.replace(position,4, "hate");
        
        cout << paragraph << endl;
    }
    
    return 0;
}
