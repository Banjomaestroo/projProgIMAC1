
#include "AsciiGetter.h"

string AsciiGetter :: getAscii(string name){

    if(name=="pokeball"){
        string poke = "────────▄███████████▄────────\n─────▄███▓▓▓▓▓▓▓▓▓▓▓███▄─────\n────███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███────\n───██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██───\n──██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██──\n─██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██─\n██▓▓▓▓▓▓▓▓▓███████▓▓▓▓▓▓▓▓▓██\n██▓▓▓▓▓▓▓▓██░░░░░██▓▓▓▓▓▓▓▓██\n██▓▓▓▓▓▓▓██░░███░░██▓▓▓▓▓▓▓██\n███████████░░███░░███████████\n██░░░░░░░██░░███░░██░░░░░░░██\n██░░░░░░░░██░░░░░██░░░░░░░░██\n██░░░░░░░░░███████░░░░░░░░░██\n─██░░░░░░░░░░░░░░░░░░░░░░░██─\n──██░░░░░░░░░░░░░░░░░░░░░██──\n───██░░░░░░░░░░░░░░░░░░░██───\n────███░░░░░░░░░░░░░░░███────\n─────▀███░░░░░░░░░░░███▀─────\n────────▀███████████▀────────";

        return poke;
    }
    else if(name=="soulakmeche"){
        string soulak = "              \n             _.--\"\"`-..\n            ,\'          `.\n          ,\'          __  `.\n         /|          \" __   \\n        , |           / |.   .\n        |,\'          !_.\'|   |\n      ,\'             \'   |   |\n     /              |`--\'|   |\n    |                `---\'   |\n     .   ,                   |                       ,\".\n      ._     \'           _\'  |                    , \' \ `\n  `.. `.`-...___,...---\"\"    |       __,.        ,`\"   L,|\n  |, `- .`._        _,-,.\'   .  __.-\'-. /        .   ,    \\n-:..     `. `-..--_.,.<       `\"      / `.        `-/ |   .\n  `,         \"\"\"\"\'     `.              ,\'         |   |  \',,\n    `.      \'            \'            /          \'    |\'. |/\n      `.   |              \       _,-\'           |       \'\'\n        `._\'               \   \'\"\                .      |\n           |                \'     \                `._  ,\'\n           |                 \'     \                 .\'|\n           |                 .      \                | |\n           |                 |       L              ,\' |\n           `                 |       |             /   \'\n            \                |       |           ,\'   /\n          ,\' \               |  _.._ ,-..___,..-\'    ,\'\n         /     .             .      `!             ,j\'\n        /       `.          /        .           .\'/\n       .          `.       /         |        _.\'.\'\n        `.          7`\'---\'          |------\"\'_.\'\n       _,.`,_     _\'                ,\'\'-----\"\'\n   _,-_    \'       `.     .\'      ,\\n   -\" /`.         _,\'     | _  _  _.|\n    \"\"--\'---\"\"\"\"\"\'        `\' \'! |! /\n                            `\" \" -\' ";
        return soulak;
    }else{

        return "------SORRY------BUT NOT REALLY------ASCII NOT FOUND----GO PLAY A REAL GAME";
    }

}