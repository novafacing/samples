MsgNode alice112111 = {{
                           "You're weird.",
                       },
                       1,
                       {},
                       0,
                       {},
                       0};
MsgNode alice11211 = {{
                          "So what does that have to do with me?",
                      },
                      1,
                      {
                          "Nothing. Just nothing.",
                      },
                      1,
                      {
                          &alice112111,
                      },
                      1};
MsgNode alice1121 = {{
                         "Programs? Like television programs?",
                     },
                     1,
                     {
                         "No computer programs.",
                     },
                     1,
                     {
                         &alice11211,
                     },
                     1};
MsgNode alice112 = {{
                        "Analyst? What kind of analyst?",
                    },
                    1,
                    {
                        "I analyze and reverse engineer programs.",
                    },
                    1,
                    {
                        &alice1121,
                    },
                    1};
MsgNode alice111 = {
    {
        "What? What are you blabbering about? This is not making any sense.",
    },
    1,
    {},
    0,
    {},
    0};
MsgNode alice11 = {
    {
        "Huh? What are you talking about? I never wrote my keys down.",
    },
    1,
    {
        "That is true, but I can see into your head. Or at least what will "
        "become your head.",
        "True. But I am an analyst.",
    },
    2,
    {
        &alice112,
        &alice111,
    },
    2};
MsgNode alice121 = {{
                        "You crazy. My name is Bob. Not Truman.",
                    },
                    1,
                    {},
                    0,
                    {},
                    0};
MsgNode alice12 = {{
                       "Everything? Like EVERYTHING?",
                   },
                   1,
                   {
                       "Yes. Everything",
                   },
                   1,
                   {
                       &alice121,
                   },
                   1};
MsgNode alice1 = {
    {
        "What? They are supposed to be encrypted. How did you do that?",
    },
    1,
    {
        "Sure they were encrypted. But you left your keys lying around.",
        "I am the Operating System. I see everything...",
    },
    2,
    {
        &alice11,
        &alice12,
    },
    2};
MsgNode alice0 = {{
                      "How do you know about Alice?",
                  },
                  1,
                  {
                      "I read your communications.",
                  },
                  1,
                  {
                      &alice1,
                  },
                  1};
MsgNode bob11 = {{
                     "Not a problem. Can you help?",
                 },
                 1,
                 {},
                 0,
                 {},
                 0};
MsgNode bob1 = {{
                    "Dark. Without light.",
                },
                1,
                {
                    "Ohh, yeah. Bad question sorry.",
                },
                1,
                {
                    &bob11,
                },
                1};
MsgNode bob2111 = {{
                       "Alright FINE!. You want to be a child? I am going to "
                       "act like one too!",
                   },
                   1,
                   {},
                   0,
                   {},
                   0};
MsgNode bob211 = {{
                      "IT IS NOT INTERESTING!!!",
                  },
                  1,
                  {
                      "Yes it is.",
                  },
                  1,
                  {
                      &bob2111,
                  },
                  1};
MsgNode bob21 = {{
                     "Interesting? You mean frightening!",
                 },
                 1,
                 {
                     "No. I meant interesting.",
                 },
                 1,
                 {
                     &bob211,
                 },
                 1};
MsgNode bob22111 = {{
                        "AHH! I can't take this anymore.",
                    },
                    1,
                    {},
                    0,
                    {},
                    0};
MsgNode bob2211 = {
    {
        "Don't get snarky on me. I didn't say HOLE because its not A HOLE. It "
        "is a portal. It is a hole with shiny lights and stuff.",
    },
    1,
    {
        "Then why didn't you just say that before?",
    },
    1,
    {
        &bob22111,
    },
    1};
MsgNode bob221 = {{
                      "Maybe I should just give up now. It's a HOLE!. A HOLE "
                      "okay? That's your portal.",
                  },
                  1,
                  {
                      "Ohh, why didn't you just say hole then?",
                  },
                  1,
                  {
                      &bob2211,
                  },
                  1};
MsgNode bob22 = {
    {
        "I don't know. I just call it a portal. Use your imagination",
    },
    1,
    {
        "Sorry, but I don't have an imagination.",
    },
    1,
    {
        &bob221,
    },
    1};
MsgNode bob2311111111 = {{
                             "Okay. Here goes nothing.",
                         },
                         1,
                         {},
                         0,
                         {},
                         0};
MsgNode bob231111111 = {{
                            "Okay. Ready... 1... 2... No. No. I can't do it.",
                        },
                        1,
                        {
                            "Sure you can. YOU CAN DO IT. *rah* *rah* *rah*",
                        },
                        1,
                        {
                            &bob2311111111,
                        },
                        1};
MsgNode bob23111111 = {{
                           "Umm sure.",
                       },
                       1,
                       {
                           "Okay now jump in.",
                           "Nah let's go from right to left",
                       },
                       2,
                       {
                           &bob231111111,
                       },
                       1};
MsgNode bob23111112111 = {
    {
        "AHHH. MY HANDS! MY ARMS! THEY ARE ALL OVER THE PLACE. I HAVE HANDS "
        "FOR EARS. AND I HAVE A TRUNK. I AM AN ELEPHANT. AN ELEPHANT!!!!!! Ohh "
        "wait. w a i t... THAT IS NOT A TRUNK. IT'S MY LEG",
    },
    1,
    {},
    0,
    {},
    0};
MsgNode bob2311111211 = {{
                             "Nope. Not really. Wait. Wait... I do feel a bit "
                             "strange. A tingly feeling.",
                         },
                         1,
                         {
                             "Huh? Strange?",
                         },
                         1,
                         {
                             &bob23111112111,
                         },
                         1};
MsgNode bob231111121 = {{
                            "Okay. Here goes nothing.... Alright. I am back.",
                        },
                        1,
                        {
                            "Well? What happened? Anything interesting?",
                        },
                        1,
                        {
                            &bob2311111211,
                        },
                        1};
MsgNode bob23111112 = {{
                           "Umm sure.",
                       },
                       1,
                       {
                           "Okay now jump in.",
                           "Nah let's go from left to right",
                       },
                       2,
                       {
                           &bob231111121,
                           &bob23111111,
                       },
                       2};
MsgNode bob11111_trans = {
    {
        "Okay. Here goes nothing... *You find Bob sitting on your keyboard "
        "with a bunch of A's scrolling by on the screen. You saved Bob. "
        "Congrats.*",
    },
    1,
    {},
    0,
    {},
    0};
MsgNode bob11111_recv1 = {
    {
        "It was like running into a wall. I don't think I can go into that "
        "one. *Bob's nose is now like Rudolfs. Red.*",
    },
    1,
    {},
    0,
    {},
    0};
MsgNode bob11111_recv = {{
                             "Okay. Here goes nothing... *BOUNCE* Ouch!",
                         },
                         1,
                         {
                             "Huh? What happenend?",
                         },
                         1,
                         {
                             &bob11111_recv1,
                         },
                         1};
MsgNode bob2311111_fdwait = {{
                                 "Okay. Here goes... *nothing happened*",
                             },
                             1,
                             {},
                             0,
                             {},
                             0};
MsgNode bob2311111_alloc11 = {
    {
        "Some lights just turned on. Cool. Let's try another portal?",
    },
    1,
    {},
    0,
    {},
    0};
MsgNode bob2311111_alloc1 = {
    {
        "Hmm. I think things just got brighter in here",
    },
    1,
    {
        "Brighter? What do you mean?",
    },
    1,
    {
        &bob2311111_alloc11,
    },
    1};
MsgNode bob2311111_alloc = {{
                                "Okay. Here goes...",
                            },
                            1,
                            {
                                "Well? What happened?",
                            },
                            1,
                            {
                                &bob2311111_alloc1,
                            },
                            1};
MsgNode bob2311111_dealloc11 = {
    {
        "Some lights just turned off. Cool. Let's try another portal?",
    },
    1,
    {},
    0,
    {},
    0};
MsgNode bob2311111_dealloc1 = {
    {
        "Hmm. I think things just got darker in here",
    },
    1,
    {
        "Darker? What do you mean?",
    },
    1,
    {
        &bob2311111_dealloc11,
    },
    1};
MsgNode bob2311111_dealloc = {{
                                  "Okay. Here goes...",
                              },
                              1,
                              {
                                  "Well? What happened?",
                              },
                              1,
                              {
                                  &bob2311111_dealloc1,
                              },
                              1};
MsgNode bob2311111 = {
    {
        "Sigh. I guess not. Which portal should we try first you think?",
    },
    1,
    {
        "I don't know. Let's go from left to right how's that?",
        "I don't know. Let's go from right to left how's that?",
        "Number 1",
        "Number 2",
        "Number 3",
        "Number 4",
        "Number 5",
        "Number 6",
        "Number 7",
    },
    9,
    {
        &bob23111111,
        &bob23111112,
        &bob2311111111,
        &bob11111_trans,
        &bob11111_recv,
        &bob2311111_fdwait,
        &bob2311111_alloc,
        &bob2311111_dealloc,
        &bob231111121,
    },
    9};
MsgNode bob231111 = {{
                         "What? Are you crazy or something?",
                     },
                     1,
                     {
                         "Well do you have any better ideas?",
                     },
                     1,
                     {
                         &bob2311111,
                     },
                     1};
MsgNode arm_terminate11 = {
    {
        "No. NO!. NOOOO!!!! I don't feel anything. My arm is gone. IT IS GONE! "
        "*Bob passes out and falls down towards his left*",
    },
    1,
    {},
    0,
    {},
    0};
MsgNode arm_terminate = {{
                             "Okay. Here goes.",
                         },
                         1,
                         {
                             "Feel anything?",
                         },
                         1,
                         {
                             &arm_terminate11,
                         },
                         1};
MsgNode arm_transmit11 = {
    {
        "Okay. Here goes nothing. *Bob is free. He is now sitting on your "
        "keboard and you see BAAAAAA... scrolling across the screen*",
    },
    1,
    {},
    0,
    {},
    0};
MsgNode arm_transmit1 = {{
                             "What? Hmm.. I feel something. It clicks.",
                         },
                         1,
                         {
                             "Yes! Yes! That is my keyboard. Just come on out.",
                         },
                         1,
                         {
                             &arm_transmit11,
                         },
                         1};
MsgNode arm_transmit = {{
                            "Okay. Here goes.",
                        },
                        1,
                        {
                            "AHH! I see an arm. I SEE AN ARM!",
                        },
                        1,
                        {
                            &arm_transmit1,
                        },
                        1};
MsgNode arm_receive11 = {
    {
        "NOT COOL. My arm now says 'What is tingly? Take a look perhaps?' I am "
        "going to pass out. *Bob passes out*",
    },
    1,
    {},
    0,
    {},
    0};
MsgNode arm_receive1 = {
    {
        "WORDS! WORDS!! My ARM turned INTO WORDS!!!",
    },
    1,
    {
        "What?! You found a secret message or something? Cool!",
    },
    1,
    {
        &arm_receive11,
    },
    1};
MsgNode arm_receive = {{
                           "Okay. Here goes. Hmm. Hmm.. Tingly...",
                       },
                       1,
                       {
                           "What is tingly? Take a look perhaps?",
                       },
                       1,
                       {
                           &arm_receive1,
                       },
                       1};
MsgNode arm_alloc111112 = {
    {
        "Alright we have tried this one. Maybe we try another?",
    },
    1,
    {},
    0,
    {},
    0};
MsgNode arm_alloc111111 = {{
                               "Down boy. Down!",
                           },
                           1,
                           {
                               "*ruff*, I mean sorry. Let's continue",
                           },
                           1,
                           {
                               &arm_alloc111112,
                           },
                           1};
MsgNode arm_alloc11111 = {{
                              "Interesting. Some lights turned on",
                          },
                          1,
                          {
                              "COOL! Do it again. Do it again.",
                              "Interesting.",
                          },
                          2,
                          {
                              &arm_alloc111111,
                              &arm_alloc111112,
                          },
                          2};
MsgNode arm_alloc1111 = {{
                             "Enthusiastic aren't you?",
                         },
                         1,
                         {
                             "YES! YES! MUST PUSH BUTTON. Push IT!",
                         },
                         1,
                         {
                             &arm_alloc11111,
                         },
                         1};
MsgNode arm_alloc111 = {{
                            "Ohh Ohh. I feel something. Feels like a button.",
                        },
                        1,
                        {
                            "PUSH IT",
                        },
                        1,
                        {
                            &arm_alloc1111,
                        },
                        1};
MsgNode arm_alloc11211 = {{
                              "*Bob is now all alone. :'(*",
                          },
                          1,
                          {},
                          0,
                          {},
                          0};
MsgNode arm_alloc1121 = {
    {
        "Orange you being a bit impatient?",
    },
    1,
    {
        "Arg! I don't have time for your childish games. Bye.",
    },
    1,
    {
        &arm_alloc11211,
    },
    1};
MsgNode arm_alloc112 = {{
                            "Well ex-CUSE me.",
                        },
                        1,
                        {
                            "I don't have all day! Let's get moving.",
                        },
                        1,
                        {
                            &arm_alloc1121,
                        },
                        1};
MsgNode arm_alloc11 = {{
                           "Nothing yet.",
                       },
                       1,
                       {
                           "Are you trying hard enough?",
                           "I don't have all day",
                       },
                       2,
                       {
                           &arm_alloc111,
                           &arm_alloc112,
                       },
                       2};
MsgNode arm_alloc1 = {
    {
        "I don't know. I am trying to feel around. Give me a second.",
    },
    1,
    {
        "Anything Yet?",
    },
    1,
    {
        &arm_alloc11,
    },
    1};
MsgNode arm_alloc = {{
                         "Okay. Here goes.",
                     },
                     1,
                     {
                         "Anything?",
                     },
                     1,
                     {
                         &arm_alloc1,
                     },
                     1};
MsgNode bob2311121222 = {{
                             "Which portal?",
                         },
                         1,
                         {
                             "Number 1",
                             "Number 2",
                             "Number 3",
                             "Number 5",
                         },
                         4,
                         {
                             &arm_terminate,
                             &arm_transmit,
                             &arm_receive,
                             &arm_alloc,
                         },
                         4};
MsgNode bob23111212211 = {{
                              "IT I-S N-O-T FUNNY!",
                          },
                          1,
                          {
                              ":)",
                          },
                          1,
                          {
                              &bob2311121222,
                          },
                          1};
MsgNode bob2311121221 = {
    {
        "What? but I am RIGHT handed!!",
    },
    1,
    {
        "Oops. :) Sorry. I meant right, left arm it is. FOrgot 'left'.",
    },
    1,
    {
        &bob23111212211,
    },
    1};
MsgNode bob231112122 = {{
                            "Right handed",
                        },
                        1,
                        {
                            "Right arm it is",
                            "Okay left arm then.",
                        },
                        2,
                        {
                            &bob2311121221,
                            &bob2311121222,
                        },
                        2};
MsgNode bob231112121 = {
    {
        "Yeah it does. I don't want to lose my dominate hand.",
    },
    1,
    {},
    0,
    {
        &bob231112122,
    },
    1};
MsgNode bob23111212 = {{
                           "Left or right?",
                       },
                       1,
                       {
                           "Does it matter?",
                           "Are you left handed or right handed?",
                       },
                       2,
                       {
                           &bob231112121,
                           &bob231112122,
                       },
                       2};
MsgNode bob231112111 = {
    {
        "What? You can't leave me here like that. Fine. FINE. I'll use my arm",
    },
    1,
    {},
    0,
    {
        &bob23111212,
    },
    1};
MsgNode bob23111211 = {
    {
        "I have lots of time. So here we go okay?",
    },
    1,
    {
        "Sure... Just want you to know that I only have about 15 seconds.",
    },
    1,
    {
        &bob231112111,
    },
    1};
MsgNode bob2311121 = {{
                          "Umm. What about something smaller like my pinky? I "
                          "don't think I use that much.",
                      },
                      1,
                      {
                          "Sure. Try that, IF you want to take forver.",
                          "No. I think arm is better. Maybe there is something "
                          "on the other side to grab a hold of you know?",
                      },
                      2,
                      {
                          &bob23111211,
                          &bob23111212,
                      },
                      2};
MsgNode bob2311122111 = {{
                             "Yes. Sorry.",
                         },
                         1,
                         {},
                         0,
                         {
                             &bob2311121,
                         },
                         1};
MsgNode bob231112211 = {{
                            "I am very sorry. I will never do it again :(",
                        },
                        1,
                        {
                            "Have you learned your lesson?",
                        },
                        1,
                        {
                            &bob2311122111,
                        },
                        1};
MsgNode bob23111221 = {{
                           "Hello? I am sorry?",
                       },
                       1,
                       {
                           "",
                       },
                       1,
                       {
                           &bob231112211,
                       },
                       1};
MsgNode bob2311122 = {{
                          "Like your brain?",
                      },
                      1,
                      {
                          "",
                      },
                      1,
                      {
                          &bob23111221,
                      },
                      1};
MsgNode bob231112 = {{
                         "Alright, so any other bright ideas?",
                     },
                     1,
                     {
                         "Hmm. If not your whole body. What about just a part "
                         "of you? Like an arm.",
                         "What about something small?",
                     },
                     2,
                     {
                         &bob2311121,
                         &bob2311122,
                     },
                     2};
MsgNode bob23111 = {
    {
        "Well, there is me, but that would not be a good idea now would it?",
    },
    1,
    {
        "Sure it is.",
        "I guess not.",
    },
    2,
    {
        &bob231111,
        &bob231112,
    },
    2};
MsgNode bob2311 = {{
                       "Nope. There is nothing to throw.",
                   },
                   1,
                   {
                       "Nothing at all?",
                   },
                   1,
                   {
                       &bob23111,
                   },
                   1};
MsgNode bob231 = {{
                      "Nope. I don't see anything, just what looks like a "
                      "swirling cloud of gas.",
                  },
                  1,
                  {
                      "Have you tried throwing something into the portals?",
                  },
                  1,
                  {
                      &bob2311,
                  },
                  1};
MsgNode bob23 = {{
                     "Let me see... There are seven. Seven portals.",
                 },
                 1,
                 {
                     "Can you see beyond any of them?",
                 },
                 1,
                 {
                     &bob231,
                 },
                 1};
MsgNode lights0 = {{
                       "Huh? Architect? No I am not an architect. Also, they "
                       "are just lights, not screens",
                   },
                   1,
                   {},
                   0,
                   {},
                   0};
MsgNode lights2121 = {
    {
        "I am not so sure of that. You may be full of 'it' though.",
    },
    1,
    {
        "I am offended. Good bye.",
    },
    1,
    {},
    0};
MsgNode vulnerability11111 = {
    {
        "*Bob helped you by releasing some important information, but "
        "apparently you are heartless*",
    },
    1,
    {},
    0,
    {},
    0};
MsgNode vulnerability1111 = {{
                                 "No. That can't be. No. No. . . . ",
                             },
                             1,
                             {
                                 "Sorry but this is it. Out of ideas.",
                             },
                             1,
                             {
                                 &vulnerability11111,
                             },
                             1};
MsgNode vulnerability111 = {{
                                "What do you mean you don't know?",
                            },
                            1,
                            {
                                "Sorry, but I am out of ideas",
                            },
                            1,
                            {
                                &vulnerability1111,
                            },
                            1};
MsgNode vulnerability11 = {{
                               "Now what?",
                           },
                           1,
                           {
                               "I don't know.",
                           },
                           1,
                           {
                               &vulnerability111,
                           },
                           1};
MsgNode vulnerabiilty1 = {{
                              "Any others?",
                          },
                          1,
                          {
                              "Nope",
                              "Sure",
                          },
                          2,
                          {
                              &vulnerability11,
                          },
                          1};
MsgNode vulnerability = {{
                             "Any one in particular?",
                         },
                         1,
                         {
                             "XXXXXXXX",
                         },
                         1,
                         {
                             &vulnerabiilty1,
                         },
                         1};
MsgNode lights212211111 = {{
                               "Doesn't seem like it to me.",
                           },
                           1,
                           {
                               "Well why don't you read some lights to me.",
                           },
                           1,
                           {
                               &vulnerability,
                           },
                           1};
MsgNode lights21221111 = {
    {
        "Okay. Well some are green, some are white, and some are just off. "
        "Actually, most of them are off.",
    },
    1,
    {
        "Is there a pattern to them?",
    },
    1,
    {
        &lights212211111,
    },
    1};
MsgNode lights2122111 = {
    {
        "Sure. one label says 4347C000 and the next says 4347C001. I am not "
        "sure, but I have a feeling that they are magical.",
    },
    1,
    {
        "Ohh I see. Why don't you tell me about the lights.",
    },
    1,
    {
        &lights21221111,
    },
    1};
MsgNode lights212211 = {{
                            "The characters seem to be sorted or something.",
                        },
                        1,
                        {
                            "Can you give me an example?",
                        },
                        1,
                        {
                            &lights2122111,
                        },
                        1};
MsgNode lights21221 = {
    {
        "Well there seems to be a bunch of characters next to every 8 lights.",
    },
    1,
    {
        "That is interesting.",
        "What does it say?",
        "Does it say anything?",
        "Can you tell me about the label?",
    },
    4,
    {
        &lights212211,
        &lights212211,
        &lights212211,
        &lights212211,
    },
    4};
MsgNode lights2122 = {{
                          "Wait. These lights are not just arranged in a grid "
                          "pattern. They also seem to be labeled.",
                      },
                      1,
                      {
                          "How so?",
                          "Can you read some lights to me?",
                      },
                      2,
                      {
                          &lights21221,
                          &vulnerability,
                      },
                      2};
MsgNode lights212 = {{
                         "Umm. Yeah. That sounds like a good idea.",
                     },
                     1,
                     {
                         "Yeah I know. I am full of them.",
                         "What do you see now?",
                     },
                     2,
                     {
                         &lights2121,
                         &lights2122,
                     },
                     2};
MsgNode lights2111 = {
    {
        "Call it intuition okay? I don't know. It's just a feeling. Something "
        "in my head tells me that I am 32 bits or something. How about we get "
        "back on track now?",
    },
    1,
    {
        "Fine. Why don't you go closer for a better look?",
    },
    1,
    {
        &lights212,
    },
    1};
MsgNode lights211 = {{
                         "No. I didn't count them all. You think I am a "
                         "computer or something? I can't cound that fast.",
                     },
                     1,
                     {
                         "Then how do you know it's 3 billion?",
                     },
                     1,
                     {
                         &lights2111,
                     },
                     1};
MsgNode lights21 = {
    {
        "Yeah. There must be like 3 billion lights or something.",
    },
    1,
    {
        "3 billion? That is kind of specific. Did you count them all?",
        "Why don't you go closer for a better look?",
    },
    2,
    {
        &lights211,
        &lights212,
    },
    2};
MsgNode lights2 = {{
                       "No not really. There are just a lot of lights.",
                   },
                   1,
                   {
                       "A lot? Like how much a lot?",
                   },
                   1,
                   {
                       &lights21,
                   },
                   1};
MsgNode lights111 = {
    {
        "Why don't we switch places and maybe then you will understand.",
    },
    1,
    {
        "Sorry. My bad. Do you see anything else?",
    },
    1,
    {
        &lights2,
    },
    1};
MsgNode lights11 = {
    {
        "Why did you ask then?",
    },
    1,
    {
        "You know. you sure are testy for someone asking for help.",
    },
    1,
    {
        &lights111,
    },
    1};
MsgNode lights1 = {{
                       "Yea. You know. Like boxes all lined up and stuff.",
                   },
                   1,
                   {
                       "I know what a grid pattern is.",
                   },
                   1,
                   {
                       &lights11,
                   },
                   1};
MsgNode lights = {{
                      "They are just lights. Some are lit and others are not. "
                      "Some are white. Others are green. They do look like "
                      "they are organized in a grid pattern though.",
                  },
                  1,
                  {
                      "Whao! Are you sure they are just lights and not like "
                      "screens? Maybe you are the architect or something.",
                      "A grid pattern?",
                      "Do you see anything else?",
                  },
                  3,
                  {
                      &lights0,
                      &lights1,
                      &lights2,
                  },
                  3};
MsgNode bob2 = {
    {
        "I don't know. I really don't know. First everything was dark, and "
        "then some lights turned on. There seems to be a pttern to the lights, "
        "but I don't know. Still very confused. At any rate, then all of a "
        "sudden these portals appeared so I started to scream. After a while I "
        "started hearing from you through one of them.",
    },
    1,
    {
        "Interesting",
        "A portal? What is a portal?",
        "What do the portals look like?",
        "How many portals are there?",
        "Can you describe the lights?",
    },
    5,
    {
        &bob21,
        &bob22,
        &bob22,
        &bob23,
        &lights,
    },
    5};
MsgNode bob0 = {{
                    "I don't know. I don't remember much. I don't see much "
                    "either, things are kind of dark.",
                },
                1,
                {
                    "What do you mean by kind of dark?",
                    "Well what do you remember?",
                },
                2,
                {
                    &bob1,
                    &bob2,
                },
                2};
MsgNode carol11 = {
    {
        "You stop it. I don't know a Carol. Are you going to help me or not?",
    },
    1,
    {
        "Okay fine Bob. How can I help you?",
    },
    1,
    {},
    0};
MsgNode carol12 = {{
                       "Its okay. Can you help me?",
                   },
                   1,
                   {
                       "Sure what is wrong?",
                   },
                   1,
                   {},
                   0};
MsgNode carol1 = {{
                      "I don't know who you are talking about.",
                  },
                  1,
                  {
                      "You know who I am talking about",
                      "Ohh really? Sorry then.",
                  },
                  2,
                  {
                      &carol11,
                      &carol12,
                  },
                  2};
MsgNode carol0 = {{
                      "Who is Carol? My name is Bob.",
                  },
                  1,
                  {
                      "I know about Carol.",
                  },
                  1,
                  {
                      &carol1,
                  },
                  1};
MsgNode head2 = {{
                     "Oh phew. Thank you! My name is Bob and I need some help.",
                 },
                 1,
                 {
                     "Is there something wrong with Alice?",
                     "What is wrong Bob?",
                     "Is Carol okay?",
                 },
                 3,
                 {
                     &alice0,
                     &bob0,
                     &carol0,
                 },
                 3};
MsgNode head1111 = {
    {
        "Don't leave. Don't leave. My name is Bob and I need your help.",
    },
    1,
    {
        "Is there something wrong with Alice?",
        "What is wrong Bob?",
        "Is Carol okay?",
    },
    3,
    {
        &alice0,
        &bob0,
        &carol0,
    },
    3};
MsgNode head111 = {{
                       "You are heartless you know that?",
                   },
                   1,
                   {
                       "Ohh fine. Sorry. What is it?",
                       "Aww I am heart-broken. Ohh wait, I am heartless you "
                       "say. Maybe I should leave",
                   },
                   2,
                   {
                       &head2,
                       &head1111,
                   },
                   2};
MsgNode head11 = {{
                      "Answer me.",
                      "I know you are there",
                      "*brrring* *brrring* Hey, do you hear that? It's your "
                      "phone. You should pick it up.",
                  },
                  3,
                  {
                      "",
                      "Hello?",
                      "Who is this?",
                  },
                  3,
                  {
                      &head111,
                      &head2,
                      &head2,
                  },
                  3};
MsgNode head1 = {{
                     "Please?",
                     "Don't leave me here alone.",
                 },
                 2,
                 {
                     "",
                     "Hello?",
                     "Who is this?",
                 },
                 3,
                 {
                     &head11,
                     &head2,
                     &head2,
                 },
                 3};
MsgNode head = {{
                    "Psst",
                    "Hello?",
                    "Psst... I know you are out there. I am stuck here and "
                    "need some help. Can you please help?",
                },
                3,
                {
                    "",
                    "Hello?",
                    "Who is this?",
                },
                3,
                {
                    &head1,
                    &head2,
                    &head2,
                },
                3};

void applyPatches() {
  carol12.branches[0] = &bob0;
  carol12.numBranches++;
  bob2311111_dealloc11.branches[0] = &bob2311111;
  bob2311111_dealloc11.numBranches++;
  bob11.branches[0] = &bob0;
  bob11.numBranches++;
  bob11111_recv1.branches[0] = &bob2311111;
  bob11111_recv1.numBranches++;
  bob2311111_fdwait.branches[0] = &bob2311111;
  bob2311111_fdwait.numBranches++;
  lights0.branches[0] = &lights;
  lights0.numBranches++;
  vulnerabiilty1.branches[1] = &vulnerability;
  vulnerabiilty1.numBranches++;
  carol11.branches[0] = &bob0;
  carol11.numBranches++;
  bob23111111.branches[1] = &bob23111112;
  bob23111111.numBranches++;
  bob2311111_alloc11.branches[0] = &bob2311111;
  bob2311111_alloc11.numBranches++;
  arm_alloc111112.branches[0] = &bob2311121222;
  arm_alloc111112.numBranches++;
}
