/**
 * Enums
 */
typedef enum
{
	CS_MODMANIFEST = 0x3,
	CS_MESSAGE = 0x5,
	CS_MAPNAME = 0x6,
	CS_AUDIOTRACK = 0x7,
	CS_HOSTNAME = 0x0,
	CS_TVSERVER = 0x1,
	CS_SKYBOX = 0x8,
	CS_STATNUMS = 0x9,
	CS_POWERUPEFFECTS = 0xa,
	CS_GAMETYPETITLE = 0xb,
	CS_GAMETYPENAME = 0xc,
	CS_GAMETYPEVERSION = 0xd,
	CS_GAMETYPEAUTHOR = 0xe,
	CS_AUTORECORDSTATE = 0xf,
	CS_SCB_PLAYERTAB_LAYOUT = 0x10,
	CS_SCB_PLAYERTAB_TITLES = 0x11,
	CS_TEAM_ALPHA_NAME = 0x14,
	CS_TEAM_BETA_NAME = 0x15,
	CS_MAXCLIENTS = 0x2,
	CS_MAPCHECKSUM = 0x1f,
	CS_MATCHNAME = 0x16,
	CS_MATCHSCORE = 0x17,
	CS_ACTIVE_CALLVOTE = 0x19,
	CS_MODELS = 0x20,
	CS_SOUNDS = 0x420,
	CS_IMAGES = 0x820,
	CS_SKINFILES = 0x920,
	CS_LIGHTS = 0xa20,
	CS_ITEMS = 0xb20,
	CS_PLAYERINFOS = 0xb60,
	CS_GAMECOMMANDS = 0xc60,
	CS_LOCATIONS = 0xd60,
	CS_GENERAL = 0xea0,
} configstrings_e;

typedef enum
{
	EF_ROTATE_AND_BOB = 0x1,
	EF_SHELL = 0x2,
	EF_STRONG_WEAPON = 0x4,
	EF_QUAD = 0x8,
	EF_REGEN = 0x1000,
	EF_CARRIER = 0x10,
	EF_BUSYICON = 0x20,
	EF_FLAG_TRAIL = 0x40,
	EF_TAKEDAMAGE = 0x80,
	EF_TEAMCOLOR_TRANSITION = 0x100,
	EF_EXPIRING_QUAD = 0x200,
	EF_EXPIRING_SHELL = 0x400,
	EF_EXPIRING_REGEN = 0x2000,
	EF_GODMODE = 0x800,
	EF_PLAYER_STUNNED = 0x1,
	EF_PLAYER_HIDENAME = 0x100,
} state_effects_e;

typedef enum
{
	MATCH_STATE_WARMUP = 0x1,
	MATCH_STATE_COUNTDOWN = 0x2,
	MATCH_STATE_PLAYTIME = 0x3,
	MATCH_STATE_POSTMATCH = 0x4,
	MATCH_STATE_WAITEXIT = 0x5,
} matchstates_e;

typedef enum
{
	SPAWNSYSTEM_INSTANT = 0x0,
	SPAWNSYSTEM_WAVES = 0x1,
	SPAWNSYSTEM_HOLD = 0x2,
} spawnsystem_e;

typedef enum
{
	STAT_PROGRESS_SELF = 0x20,
	STAT_PROGRESS_OTHER = 0x21,
	STAT_PROGRESS_ALPHA = 0x22,
	STAT_PROGRESS_BETA = 0x23,
	STAT_IMAGE_SELF = 0x24,
	STAT_IMAGE_OTHER = 0x25,
	STAT_IMAGE_ALPHA = 0x26,
	STAT_IMAGE_BETA = 0x27,
	STAT_TIME_SELF = 0x28,
	STAT_TIME_BEST = 0x29,
	STAT_TIME_RECORD = 0x2a,
	STAT_TIME_ALPHA = 0x2b,
	STAT_TIME_BETA = 0x2c,
	STAT_MESSAGE_SELF = 0x2d,
	STAT_MESSAGE_OTHER = 0x2e,
	STAT_MESSAGE_ALPHA = 0x2f,
	STAT_MESSAGE_BETA = 0x30,
	STAT_IMAGE_CLASSACTION1 = 0x31,
	STAT_IMAGE_CLASSACTION2 = 0x32,
} hudstats_e;

typedef enum
{
	TEAM_SPECTATOR = 0x0,
	TEAM_PLAYERS = 0x1,
	TEAM_ALPHA = 0x2,
	TEAM_BETA = 0x3,
	GS_MAX_TEAMS = 0x4,
} teams_e;

typedef enum
{
	ET_GENERIC = 0x0,
	ET_PLAYER = 0x1,
	ET_CORPSE = 0x2,
	ET_BEAM = 0x3,
	ET_PORTALSURFACE = 0x4,
	ET_PUSH_TRIGGER = 0x5,
	ET_GIB = 0x6,
	ET_BLASTER = 0x7,
	ET_ELECTRO_WEAK = 0x8,
	ET_ROCKET = 0x9,
	ET_GRENADE = 0xa,
	ET_PLASMA = 0xb,
	ET_SPRITE = 0xc,
	ET_ITEM = 0xd,
	ET_LASERBEAM = 0xe,
	ET_CURVELASERBEAM = 0xf,
	ET_FLAG_BASE = 0x10,
	ET_MINIMAP_ICON = 0x11,
	ET_DECAL = 0x12,
	ET_ITEM_TIMER = 0x13,
	ET_PARTICLES = 0x14,
	ET_SPAWN_INDICATOR = 0x15,
	ET_RADAR = 0x17,
	ET_EVENT = 0x60,
	ET_SOUNDEVENT = 0x61,
} entitytype_e;

typedef enum
{
	SOLID_NOT = 0x0,
	SOLID_TRIGGER = 0x1,
	SOLID_YES = 0x2,
} solid_e;

typedef enum
{
	MOVETYPE_NONE = 0x0,
	MOVETYPE_PLAYER = 0x1,
	MOVETYPE_NOCLIP = 0x2,
	MOVETYPE_PUSH = 0x3,
	MOVETYPE_STOP = 0x4,
	MOVETYPE_FLY = 0x5,
	MOVETYPE_TOSS = 0x6,
	MOVETYPE_LINEARPROJECTILE = 0x7,
	MOVETYPE_BOUNCE = 0x8,
	MOVETYPE_BOUNCEGRENADE = 0x9,
	MOVETYPE_TOSSSLIDE = 0xa,
} movetype_e;

typedef enum
{
	PMFEAT_CROUCH = 0x1,
	PMFEAT_WALK = 0x2,
	PMFEAT_JUMP = 0x4,
	PMFEAT_DASH = 0x8,
	PMFEAT_WALLJUMP = 0x10,
	PMFEAT_FWDBUNNY = 0x20,
	PMFEAT_AIRCONTROL = 0x40,
	PMFEAT_ZOOM = 0x80,
	PMFEAT_GHOSTMOVE = 0x100,
	PMFEAT_CONTINOUSJUMP = 0x200,
	PMFEAT_ITEMPICK = 0x400,
	PMFEAT_GUNBLADEAUTOATTACK = 0x800,
	PMFEAT_WEAPONSWITCH = 0x1000,
	PMFEAT_ALL = 0xffff,
	PMFEAT_DEFAULT = 0xfeff,
} pmovefeats_e;

typedef enum
{
	IT_WEAPON = 0x1,
	IT_AMMO = 0x2,
	IT_ARMOR = 0x4,
	IT_POWERUP = 0x8,
	IT_HEALTH = 0x40,
} itemtype_e;

typedef enum
{
	G_INSTAGIB_NEGATE_ITEMMASK = 0x4f,
} G_INSTAGIB_NEGATE_ITEMMASK_e;

typedef enum
{
	WEAP_NONE = 0x0,
	WEAP_GUNBLADE = 0x1,
	WEAP_MACHINEGUN = 0x2,
	WEAP_RIOTGUN = 0x3,
	WEAP_GRENADELAUNCHER = 0x4,
	WEAP_ROCKETLAUNCHER = 0x5,
	WEAP_PLASMAGUN = 0x6,
	WEAP_LASERGUN = 0x7,
	WEAP_ELECTROBOLT = 0x8,
	WEAP_INSTAGUN = 0x9,
	WEAP_TOTAL = 0xa,
} weapon_tag_e;

typedef enum
{
	AMMO_NONE = 0x0,
	AMMO_GUNBLADE = 0xa,
	AMMO_BULLETS = 0xb,
	AMMO_SHELLS = 0xc,
	AMMO_GRENADES = 0xd,
	AMMO_ROCKETS = 0xe,
	AMMO_PLASMA = 0xf,
	AMMO_LASERS = 0x10,
	AMMO_BOLTS = 0x11,
	AMMO_INSTAS = 0x12,
	AMMO_WEAK_GUNBLADE = 0x13,
	AMMO_WEAK_BULLETS = 0x14,
	AMMO_WEAK_SHELLS = 0x15,
	AMMO_WEAK_GRENADES = 0x16,
	AMMO_WEAK_ROCKETS = 0x17,
	AMMO_WEAK_PLASMA = 0x18,
	AMMO_WEAK_LASERS = 0x19,
	AMMO_WEAK_BOLTS = 0x1a,
	AMMO_WEAK_INSTAS = 0x1b,
	AMMO_TOTAL = 0x1c,
} ammo_tag_e;

typedef enum
{
	ARMOR_NONE = 0x0,
	ARMOR_GA = 0x1c,
	ARMOR_YA = 0x1d,
	ARMOR_RA = 0x1e,
	ARMOR_SHARD = 0x1f,
} armor_tag_e;

typedef enum
{
	HEALTH_NONE = 0x0,
	HEALTH_SMALL = 0x20,
	HEALTH_MEDIUM = 0x21,
	HEALTH_LARGE = 0x22,
	HEALTH_MEGA = 0x23,
	HEALTH_ULTRA = 0x24,
} health_tag_e;

typedef enum
{
	POWERUP_NONE = 0x0,
	POWERUP_QUAD = 0x25,
	POWERUP_SHELL = 0x26,
	POWERUP_REGEN = 0x27,
	POWERUP_TOTAL = 0x28,
} powerup_tag_e;

typedef enum
{
	AMMO_PACK_WEAK = 0x28,
	AMMO_PACK_STRONG = 0x29,
	AMMO_PACK = 0x2a,
} otheritems_tag_e;

typedef enum
{
	CS_FREE = 0x0,
	CS_ZOMBIE = 0x1,
	CS_CONNECTING = 0x2,
	CS_CONNECTED = 0x3,
	CS_SPAWNED = 0x4,
} client_statest_e;

typedef enum
{
	CHAN_AUTO = 0x0,
	CHAN_PAIN = 0x1,
	CHAN_VOICE = 0x2,
	CHAN_ITEM = 0x3,
	CHAN_BODY = 0x4,
	CHAN_MUZZLEFLASH = 0x5,
	CHAN_FIXED = 0x80,
} sound_channels_e;

typedef enum
{
	CONTENTS_SOLID = 0x1,
	CONTENTS_LAVA = 0x8,
	CONTENTS_SLIME = 0x10,
	CONTENTS_WATER = 0x20,
	CONTENTS_FOG = 0x40,
	CONTENTS_AREAPORTAL = 0x8000,
	CONTENTS_PLAYERCLIP = 0x10000,
	CONTENTS_MONSTERCLIP = 0x20000,
	CONTENTS_TELEPORTER = 0x40000,
	CONTENTS_JUMPPAD = 0x80000,
	CONTENTS_CLUSTERPORTAL = 0x100000,
	CONTENTS_DONOTENTER = 0x200000,
	CONTENTS_ORIGIN = 0x1000000,
	CONTENTS_BODY = 0x2000000,
	CONTENTS_CORPSE = 0x4000000,
	CONTENTS_DETAIL = 0x8000000,
	CONTENTS_STRUCTURAL = 0x10000000,
	CONTENTS_TRANSLUCENT = 0x20000000,
	CONTENTS_TRIGGER = 0x40000000,
	CONTENTS_NODROP = 0x80000000,
	MASK_ALL = 0xffffffff,
	MASK_SOLID = 0x1,
	MASK_PLAYERSOLID = 0x2010001,
	MASK_DEADSOLID = 0x10001,
	MASK_MONSTERSOLID = 0x2020001,
	MASK_WATER = 0x38,
	MASK_OPAQUE = 0x19,
	MASK_SHOT = 0x6000001,
} contents_e;

typedef enum
{
	SURF_NODAMAGE = 0x1,
	SURF_SLICK = 0x2,
	SURF_SKY = 0x4,
	SURF_LADDER = 0x8,
	SURF_NOIMPACT = 0x10,
	SURF_NOMARKS = 0x20,
	SURF_FLESH = 0x40,
	SURF_NODRAW = 0x80,
	SURF_HINT = 0x100,
	SURF_SKIP = 0x200,
	SURF_NOLIGHTMAP = 0x400,
	SURF_POINTLIGHT = 0x800,
	SURF_METALSTEPS = 0x1000,
	SURF_NOSTEPS = 0x2000,
	SURF_NONSOLID = 0x4000,
	SURF_LIGHTFILTER = 0x8000,
	SURF_ALPHASHADOW = 0x10000,
	SURF_NODLIGHT = 0x20000,
	SURF_DUST = 0x40000,
} surfaceflags_e;

typedef enum
{
	SVF_NOCLIENT = 0x1,
	SVF_PORTAL = 0x2,
	SVF_TRANSMITORIGIN2 = 0x8,
	SVF_SOUNDCULL = 0x10,
	SVF_FAKECLIENT = 0x20,
	SVF_BROADCAST = 0x40,
	SVF_CORPSE = 0x80,
	SVF_PROJECTILE = 0x100,
	SVF_ONLYTEAM = 0x200,
	SVF_FORCEOWNER = 0x400,
	SVF_ONLYOWNER = 0x800,
} serverflags_e;

typedef enum
{
	MOD_GUNBLADE_W = 0x24,
	MOD_GUNBLADE_S = 0x25,
	MOD_MACHINEGUN_W = 0x26,
	MOD_MACHINEGUN_S = 0x27,
	MOD_RIOTGUN_W = 0x28,
	MOD_RIOTGUN_S = 0x29,
	MOD_GRENADE_W = 0x2a,
	MOD_GRENADE_S = 0x2b,
	MOD_ROCKET_W = 0x2c,
	MOD_ROCKET_S = 0x2d,
	MOD_PLASMA_W = 0x2e,
	MOD_PLASMA_S = 0x2f,
	MOD_ELECTROBOLT_W = 0x30,
	MOD_ELECTROBOLT_S = 0x31,
	MOD_INSTAGUN_W = 0x32,
	MOD_INSTAGUN_S = 0x33,
	MOD_LASERGUN_W = 0x34,
	MOD_LASERGUN_S = 0x35,
	MOD_GRENADE_SPLASH_W = 0x36,
	MOD_GRENADE_SPLASH_S = 0x37,
	MOD_ROCKET_SPLASH_W = 0x38,
	MOD_ROCKET_SPLASH_S = 0x39,
	MOD_PLASMA_SPLASH_W = 0x3a,
	MOD_PLASMA_SPLASH_S = 0x3b,
	MOD_WATER = 0x3c,
	MOD_SLIME = 0x3d,
	MOD_LAVA = 0x3e,
	MOD_CRUSH = 0x3f,
	MOD_TELEFRAG = 0x40,
	MOD_FALLING = 0x41,
	MOD_SUICIDE = 0x42,
	MOD_EXPLOSIVE = 0x43,
	MOD_BARREL = 0x44,
	MOD_BOMB = 0x45,
	MOD_EXIT = 0x46,
	MOD_SPLASH = 0x47,
	MOD_TARGET_LASER = 0x48,
	MOD_TRIGGER_HURT = 0x49,
	MOD_HIT = 0x4a,
} meaningsofdeath_e;

typedef enum
{
	DAMAGE_NO = 0x0,
	DAMAGE_YES = 0x1,
	DAMAGE_AIM = 0x2,
} takedamage_e;

typedef enum
{
} miscelanea_e;

/**
 * Global properties
 */
const uint levelTime;
const uint frameTime;
const uint realTime;
const uint64 localTime;
const int maxEntities;
const int numEntities;
const int maxClients;
GametypeDesc gametype;
Match match;

/**
 * Global functions
 */
Entity @G_SpawnEntity( const String &in );
const String @G_SpawnTempValue( const String &in );
Entity @G_GetEntity( int entNum );
Client @G_GetClient( int clientNum );
Team @G_GetTeam( int team );
Item @G_GetItem( int tag );
Item @G_GetItemByName( const String &in name );
Item @G_GetItemByClassname( const String &in name );
array<Entity @> @G_FindInRadius( const Vec3 &in, float radius );
array<Entity @> @G_FindByClassname( const String &in );
void G_RemoveAllProjectiles();
void G_RemoveDeadBodies();
void G_Items_RespawnByType( uint typeMask, int item_tag, float delay );
void G_Print( const String &in );
void G_PrintMsg( Entity @, const String &in );
void G_CenterPrintMsg( Entity @, const String &in );
void G_CenterPrintFormatMsg( Entity @, const String &in, const String &in );
void G_CenterPrintFormatMsg( Entity @, const String &in, const String &in, const String &in );
void G_CenterPrintFormatMsg( Entity @, const String &in, const String &in, const String &in, const String &in );
void G_CenterPrintFormatMsg( Entity @, const String &in, const String &in, const String &in, const String &in, const String &in );
void G_CenterPrintFormatMsg( Entity @, const String &in, const String &in, const String &in, const String &in, const String &in, const String &in );
void G_CenterPrintFormatMsg( Entity @, const String &in, const String &in, const String &in, const String &in, const String &in, const String &in, const String &in );
void G_CenterPrintFormatMsg( Entity @, const String &in, const String &in, const String &in, const String &in, const String &in, const String &in, const String &in, const String &in );
void G_Sound( Entity @, int channel, int soundindex, float attenuation );
void G_PositionedSound( const Vec3 &in, int channel, int soundindex, float attenuation );
void G_GlobalSound( int channel, int soundindex );
void G_LocalSound( Client @, int channel, int soundIndex );
void G_AnnouncerSound( Client @, int soundIndex, int team, bool queued, Client @ );
int G_DirToByte( const Vec3 &in origin );
int G_PointContents( const Vec3 &in origin );
bool G_InPVS( const Vec3 &in origin1, const Vec3 &in origin2 );
bool G_WriteFile( const String &, const String & );
bool G_AppendToFile( const String &, const String & );
const String @G_LoadFile( const String & );
int G_FileLength( const String & );
void G_CmdExecute( const String & );
const String @G_LocationName( const Vec3 &in origin );
int G_LocationTag( const String & );
const String @G_LocationName( int tag );
void __G_CallThink( Entity @ent );
void __G_CallTouch( Entity @ent, Entity @other, const Vec3 planeNormal, int surfFlags );
void __G_CallUse( Entity @ent, Entity @other, Entity @activator );
void __G_CallStop( Entity @ent );
void __G_CallPain( Entity @ent, Entity @other, float kick, float damage );
void __G_CallDie( Entity @ent, Entity @inflicter, Entity @attacker );
int G_ImageIndex( const String &in );
int G_SkinIndex( const String &in );
int G_ModelIndex( const String &in );
int G_SoundIndex( const String &in );
int G_ModelIndex( const String &in, bool pure );
int G_SoundIndex( const String &in, bool pure );
void G_RegisterCommand( const String &in );
void G_RegisterCallvote( const String &in, const String &in, const String &in, const String &in );
void G_ConfigString( int index, const String &in );
void G_FireInstaShot( const Vec3 &in origin, const Vec3 &in angles, int range, int damage, int knockback, int stun, Entity @owner );
Entity @G_FireWeakBolt( const Vec3 &in origin, const Vec3 &in angles, int speed, int damage, int knockback, int stun, Entity @owner );
void G_FireStrongBolt( const Vec3 &in origin, const Vec3 &in angles, int range, int damage, int knockback, int stun, Entity @owner );
Entity @G_FirePlasma( const Vec3 &in origin, const Vec3 &in angles, int speed, int radius, int damage, int knockback, int stun, Entity @owner );
Entity @G_FireRocket( const Vec3 &in origin, const Vec3 &in angles, int speed, int radius, int damage, int knockback, int stun, Entity @owner );
Entity @G_FireGrenade( const Vec3 &in origin, const Vec3 &in angles, int speed, int radius, int damage, int knockback, int stun, Entity @owner );
void G_FireRiotgun( const Vec3 &in origin, const Vec3 &in angles, int range, int spread, int count, int damage, int knockback, int stun, Entity @owner );
void G_FireBullet( const Vec3 &in origin, const Vec3 &in angles, int range, int spread, int damage, int knockback, int stun, Entity @owner );
Entity @G_FireBlast( const Vec3 &in origin, const Vec3 &in angles, int speed, int radius, int damage, int knockback, int stun, Entity @owner );
bool ML_FilenameExists( String & );
const String @ML_GetMapByNum( int num );
uint G_RegisterHelpMessage( const String &in );
void G_SetColorCorrection( int index );
int G_GetDefaultColorCorrection();

