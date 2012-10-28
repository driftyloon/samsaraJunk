#define SAMSARA_ENTER       213
#define SAMSARA_RESPAWN     218
#define SAMSARA_SPAWN       224

#define LMSMODES            6

#define CLASSCOUNT          7
#define SLOTCOUNT           9
#define CHOICECOUNT         4

#define S_WEP               0
#define S_AMMO1             1
#define S_AMMO2             2
#define S_PICKUPMESSAGE     3

int IsServer = 0;

int LMSArmors[LMSMODES] = 
{
    "",
    "GreenArmor",
    "BlueArmor",
    "LMSArmor", 
    "LMSArmor2",
    "LMSArmor3",
};

int ClassItems[CLASSCOUNT] =
{
    "DoomguyClass",
    "ChexClass",
    "CorvusClass",
    "WolfenClass",
    "HexenClass",
    "DukeClass",
    "MarathonClass",
};

#define CLASS_DOOMGUY   0
#define CLASS_CHEX      1
#define CLASS_CORVUS    2
#define CLASS_WOLFEN    3
#define CLASS_HEXEN     4
#define CLASS_DUKE      5
#define CLASS_MARATHON  6

int ItoSArray[7] = {1, 3, 4, 5, 6, 7, 8};

int ClassWeapons[CLASSCOUNT][SLOTCOUNT][CHOICECOUNT] = 
{
    {   // Doomguy
        {" Fist ",                          "",             "",             "I PUNCH YOO"},
        {" Chainsaw ",                      "",             "",             "A chainsaw! Find some meat!"},
        {" Pistol ",                        "",             "",             "Picked up a pistol."},
        {" Shotgun ",                       "AmmoShell",    "",             "You got the shotgun!"},
        {"Super Shotgun",                   "AmmoShell",    "",             "You got the super shotgun!"},
        {" Chaingun ",                      "Clip",         "",             "You got the chaingun!"},
        {"Rocket Launcher",                 "RocketAmmo",   "",             "You got the rocket launcher!"},
        {"Plasma Rifle",                    "Cell",         "",             "You got the plasma rifle!"},
        {"B.F.G. 9000",                     "Cell",         "",             "You got the BFG9000! Oh, yes."},
    },

    {   // Chexguy
        {" Bootspoon ",                     "",             "",             "I SCOOP YOO"},
        {"Super Bootspork",                 "",             "",             "You got the Super Bootspork!"},
        {"Mini-Zorcher",                    "",             "",             "Picked up a Mini Zorcher."},
        {"Large Zorcher",                   "AmmoShell",    "",             "You got the Large Zorcher!"},
        {"Super Large Zorcher",             "AmmoShell",    "",             "You got the Mega Zorcher!"},
        {"Rapid Zorcher",                   "Clip",         "",             "You got the Rapid Zorcher!"},
        {"Zorch Propulsor",                 "RocketAmmo",   "",             "You got the Zorch Propulsor!"},
        {"Phasing Zorcher",                 "Cell",         "",             "You got the Phasing Zorcher!"},
        {"LAZ Device",                      "Cell",         "",             "You got the LAZ Device! Woot!"},
    },

    {   // Corvus
        {" Staff ",                         "",             "",             "I JAB YOO"},
        {"Gauntlets of the Necromancer",    "",             "",             "Gauntlets of the Necromancer! Find some meat!"},
        {"Gold Wand",                       "",             "",             "Picked up a gold wand."},
        {" Firemace ",                      "AmmoShell",    "",             "You got the firemace!"},
        {"Ethereal Crossbow",               "AmmoShell",    "",             "You got the ethereal crossbow!"},
        {"Dragon Claw",                     "Clip",         "",             "You got the blaster!"},
        {"Phoenix Rod",                     "RocketAmmo",   "",             "You got the Phoenix rod!"},
        {"Hellstaff",                       "Cell",         "",             "You got the hellstaff!"},
        {"PortTomeCoop",                    "",             "",             "You got the Tome of Power! Ahahaha..."},
    },

    {   // B.J.
        {"Knife",                           "",             "",             "I STAB YOO"},
        {"",                                "",             "",             ""},
        {"Luger",                           "",             "",             "Picked up a Luger."},
        {"Machine Gun",                     "Clip",         "",             "You got the machine gun!"},
        {"Machine Gun",                     "Clip",         "",             "You got the machine gun!"},
        {"  Chaingun  ",                    "Clip",         "",             "You got the gatling gun!"},        // rename this chaingun to gatling gun :(
        {" Rocket Launcher ",               "RocketAmmo",   "",             "You got the rocket launcher!"},    // and this one to zreep gun
        {" Flamethrower ",                  "Cell",         "",             "You got the flamethrower!"},
        {"Spear of Destiny",                "Cell",         "",             "You got the Spear of Destiny! Heaven awaits."},
    },

    {   // Parias
        {"Mace of Contrition",              "",             "",             "I WAK YOO"},
        {"",                                "",             "",             ""},
        {"Sapphire Wand",                   "",             "",             "Picked up a sapphire wand."},
        {"Frost Shards",                    "AmmoShell",    "",             "You got the frost shards!"},
        {"Timon's Axe",                     "AmmoShell",    "",             "You got Timon's axe!"},
        {"Serpent Staff",                   "Clip",         "",             "You got the serpent staff!"},
        {"Hammer of Retribution",           "RocketAmmo",   "",             "You got the hammer of retribution!"},
        {"Firestorm",                       "Cell",         "",             "You got the Firestorm!"},
        {"Wraithverge",                     "Cell",         "",             "You got the Wraithverge! Smite with extreme prejudice."},
    },

    {   // Duke
        {"Mighty Boot",                     "",             "",             "I KICK YOO"},
        {"Pipebombs",                       "RocketAmmo",   "",             "Pipe bombs! Find some unsuspecting saps."},
        {"M1911",                           "",             "",             "Picked up an M1911."},
        {"  Shotgun  ",                     "AmmoShell",    "",             "You got the shotgun!"},  // rename this to something like pump-shotty
        {"Explosive Shotgun",               "RocketAmmo",   "",             "You got the explosive shotgun!"},
        {"Chaingun Cannon",                 "Clip",         "",             "You got the chaingun cannon!"},
        {"RPG",                             "RocketAmmo",   "",             "You got the RPG launcher!"},
        {"Freezethrower",                   "Cell",         "",             "You got the freezethrower!"},
        {"Devastator",                      "Cell",         "",             "You got the Devastators! Hail to the king."},
    },

    {   // Security Officer
        {"Steel Knuckles",                  "",             "",             "I PUNCH YOO TOO"},
        {"SOMagnumSMGGiver",                "",             "",             "You got the KKV-7 SMG and an extra magnum!"},
        {".44 Magnum Mega-Class A1",        "",             "",             "Picked up a magnum."},
        {"WSTE-M5 Combat Shotgun",          "AmmoShell",    "",             "You got the WSTE-M5 combat shotgun!"},
        {"Fusion Pistol",                   "FusionBullet", "Cell",         "You got the Zeus-class fusion pistol!"},
        {"MA-75B Assault Rifle",            "RifleBullet",  "Clip",         "You got the MA-75B assault rifle!"},
        {"SPNKR-XP SSM Launcher",           "SpankerAmmo",  "RocketAmmo",   "You got the SPNKR-XP SSM launcher!"},
        {"TOZT-7 Napalm Unit",              "NapalmInTank", "Cell",         "You got the TOZT-7 napalm unit!"},
        {"ONI-71 Wave Motion Cannon",       "Cell",         "RocketAmmo",   "You got the wave motion cannon! Blast 'em in half."},
    }
};
