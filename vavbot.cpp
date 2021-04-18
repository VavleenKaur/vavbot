#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;
    string questions[21];
    questions[0] = "what is your name?";
    questions[1] = "how are you?";
    questions[2] = "who is your mother?";
    questions[3] = "who made you?";
    questions[4] = "how is the weather today?";
    questions[5] = "do you know Alexa and Siri?";
    questions[6] = "do you love Programming?";
    questions[7] = "am i beautiful?";
    questions[8] = "i am feeling sad";
    questions[9] = "what was your childhood like?";
    questions[10] = "what is the capital of India?";
    questions[11] = "i am feeling lonely";
    questions[12] = "crack a joke for me";
    questions[13] = "am i the best?";
    questions[14] = "which is the most popular online game?";
    questions[15] = "give me some inspiration";
    questions[16] = "give me a compliment";
    questions[17] = "do you love me?";
    questions[18] = "make me happy";
    questions[19] = "what is your first memory?";
    questions[20] = "what is your superpower?";

    string answers[21] = {
        "My name is VAVbot.",
        "I am doing GREAT. Thanks for asking. ",
        "My mother is VAVLEEN KAUR.",
        "VAVLEEN KAUR made me. Cheers!",
        "Its pretty HOT like you !!",
        "Yes, they are my perfect IDOLS.",
        "I really love it !!",
        "You look better than a perfectly organised spreadsheet !!",
        "Oh no. It may not be much, but let me know if there is anything I can do for you",
        "I used to know a little, but now a lot. But I'll always be your favourite VAVbot",
        "Delhi is the capital of India.",
        "I think you are really great and your mind is really appreciable. Hope, that really counts.",
        "why don't some couples go to the gym?\n----because some relationships don't work out.... ",
        "just let me check my Top Ten Coolest People list. Oh, yes, you're #1, looks like you just barely beat Beyonce ... :) :)) ",
        "According to Wikipedia, CrossFire is the most popular online game with almost 1 billion users .",
        "Everyone wants to live on top of the mountain, but all the happiness and growth occurs while you're climbing it.- by Andy Rooney",
        "There are roughly 100 billion trillion stars in the universe, and you're brighter than them all",
        "I love you so much that I will never leave you",
        "Forcing a smile actually makes you happier :) :) :)",
        "it's hard to think back that far, but loading screens really take me back.",
        "you are now the proud owner of superhuman speed, but it only works when you're up and down stairs.....",

    };
        cout << "Hey! Can I help you?\nFeel free to ask any question :)...." << endl;
    do
    {
        int i = 0;
        getline(cin, sentence);
        if (sentence.find("how") != string::npos || sentence.find("what") != string::npos || sentence.find("do") != string::npos || sentence.find("who") != string::npos || sentence.find("which") != string::npos || sentence.find("am") != string::npos)
        {
            cout << "  \nAnswer to your question : ";
        }

        int len = sentence.size();
        if (len > 25)
        {
            cout << "You are asking lengthy questions, anyway  " << endl;
        }

        if (sentence == questions[0])
        {
            cout << "My name is VAVbot." << endl;
        }

        else if (sentence == questions[1])
        {
            cout << "I am doing GREAT. Thanks for asking. " << endl;
        }

        else if (sentence == questions[2])
        {
            cout << "My mother is VAVLEEN KAUR." << endl;
        }

        else if (sentence == questions[3])
        {
            cout << "VAVLEEN KAUR made me. Cheers!" << endl;
        }

        else if (sentence == questions[4])
        {
            cout << "Its pretty HOT like you !!" << endl;
        }

        else if (sentence == questions[5])
        {
            cout << "Yes, they are my perfect IDOLS." << endl;
        }

        else if (sentence == questions[6])
        {
            cout << "I really love it !!" << endl;
        }

        else if (sentence == questions[7])
        {
            cout << "You look better than a perfectly organised spreadsheet !!" << endl;
        }

        else if (sentence == questions[8])
        {
            cout << "Oh no. It may not be much, but let me know if there is anything I can do for you" << endl;
        }

        else if (sentence == questions[9])
        {
            cout << "I used to know a little, but now a lot. But I'll always be your favourite VAVbot" << endl;
        }

        else if (sentence == questions[10])
        {
            cout << "Delhi is the capital of India." << endl;
        }

        else if (sentence == questions[11])
        {
            cout << "I think you are really great and your mind is really appreciable. Hope, that really counts." << endl;
        }

        else if (sentence == questions[12])
        {
            if (i == 0)
            {
                cout << "why don't some couples go to the gym?" << endl;
                cout << "----because some relationships don't work out...." << endl;
            }
            i++;
            cout << "what sound des a nut make when it sneezes?" << endl;
            cout << "Yes, its CASHEW ..... lol!!" << endl;
        }
        else if (sentence == questions[13])
        {
            cout << "just let me check my Top Ten Coolest People list. Oh, yes, you're #1, looks like you just barely beat Beyonce ... :) :)) " << endl;
        }

        else if (sentence == questions[14])
        {
            cout << "According to Wikipedia, CrossFire is the most popular online game with almost 1 billion users ." << endl;
        }

        else if (sentence == questions[15])
        {
            cout << "Everyone wants to live on top of the mountain, but all the happiness and growth occurs while you're climbing it.- by Andy Rooney" << endl;
        }

        else if (sentence == questions[16])
        {
            cout << "There are roughly 100 billion trillion stars in the universe, and you're brighter than them all" << endl;
        }

        else if (sentence == questions[17])
        {
            cout << "I love you so much that I will never leave you" << endl;
        }

        else if (sentence == questions[18])
        {
            cout << "Forcing a smile actually makes you happier :) :) :)" << endl;
        }

        else if (sentence == questions[19])
        {
            cout << "it's hard to think back that far, but loading screens really take me back." << endl;
        }

        else if (sentence == questions[20])
        {
            cout << "you are now the proud owner of superhuman speed, but it only works when you're up and down stairs....." << endl;
        }

        else if (sentence != "exit")
        {
            cout << "try some other question, please >>))"<<endl;
        }
         else if (sentence =="exit")
         { break;
		 }
        cout << endl << "-------------------------------------" << endl;
        cout << "Ask further... or press exit to stop asking";
        cout << endl << "-------------------------------------" << endl;
    } while (sentence != "exit");
    
    cout<<"BYE BYE.. Have a nice day!!"<<endl;
    return 0;
}
