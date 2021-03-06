/**
 * Enums
 */
typedef enum
{
	CVAR_ARCHIVE = 0x1,
	CVAR_USERINFO = 0x2,
	CVAR_SERVERINFO = 0x4,
	CVAR_NOSET = 0x8,
	CVAR_LATCH = 0x10,
	CVAR_LATCH_VIDEO = 0x20,
	CVAR_LATCH_SOUND = 0x40,
	CVAR_CHEAT = 0x80,
	CVAR_READONLY = 0x100,
} eCvarFlag;

typedef enum
{
	EVENT_PHASE_UNKNOWN = 0x0,
	EVENT_PHASE_CAPTURE = 0x1,
	EVENT_PHASE_TARGET = 0x2,
	EVENT_PHASE_BUBBLE = 0x3,
} eEventPhase;

typedef enum
{
	KI_ESCAPE = 0x51,
} eInputKey;

typedef enum
{
	IN_DEVICE_KEYBOARD = 0x1,
	IN_DEVICE_MOUSE = 0x2,
	IN_DEVICE_JOYSTICK = 0x4,
	IN_DEVICE_TOUCHSCREEN = 0x8,
	IN_DEVICE_SOFTKEYBOARD = 0x10,
} eInputDeviceMask;

typedef enum
{
	CS_TVSERVER = 0x1,
	CS_MODMANIFEST = 0x3,
	CS_MESSAGE = 0x5,
	CS_MAPNAME = 0x6,
	CS_AUDIOTRACK = 0x7,
	CS_HOSTNAME = 0x0,
	CS_GAMETYPETITLE = 0xb,
	CS_GAMETYPENAME = 0xc,
	CS_GAMETYPEVERSION = 0xd,
	CS_GAMETYPEAUTHOR = 0xe,
	CS_TEAM_ALPHA_NAME = 0x14,
	CS_TEAM_BETA_NAME = 0x15,
	CS_MATCHNAME = 0x16,
	CS_MATCHSCORE = 0x17,
	CS_ACTIVE_CALLVOTE = 0x19,
	CS_ACTIVE_CALLVOTE_VOTES = 0x1a,
} eConfigString;

typedef enum
{
	CA_UNITIALIZED = 0x0,
	CA_DISCONNECTED = 0x1,
	CA_GETTING_TICKET = 0x2,
	CA_CONNECTING = 0x3,
	CA_HANDSHAKE = 0x4,
	CA_CONNECTED = 0x5,
	CA_LOADING = 0x6,
	CA_ACTIVE = 0x7,
} eClientState;

typedef enum
{
	DROP_REASON_CONNFAILED = 0x0,
	DROP_REASON_CONNTERMINATED = 0x1,
	DROP_REASON_CONNERROR = 0x2,
} eDropReason;

typedef enum
{
	DROP_TYPE_GENERAL = 0x0,
	DROP_TYPE_PASSWORD = 0x1,
	DROP_TYPE_NORECONNECT = 0x2,
	DROP_TYPE_TOTAL = 0x3,
} eDropType;

typedef enum
{
	DOWNLOADTYPE_NONE = 0x0,
	DOWNLOADTYPE_SERVER = 0x1,
	DOWNLOADTYPE_WEB = 0x2,
} eDownloadType;

typedef enum
{
	MM_LOGIN_STATE_LOGGED_OUT = 0x0,
	MM_LOGIN_STATE_IN_PROGRESS = 0x1,
	MM_LOGIN_STATE_LOGGED_IN = 0x2,
} eMatchmakerState;

/**
 * Global properties
 */
/**
 * Global functions
 */
int abs(int);
double abs(double);
double log(double);
double pow(double, double);
double cos(double);
double sin(double);
double tan(double);
double acos(double);
double asin(double);
double atan(double);
double atan2(double, double);
double sqrt(double);
double ceil(double);
double floor(double);
double random();
double brandom(double, double);
int rand();
String@ FormatInt(int64, const String&in, uint = 0);
String@ FormatFloat(double, const String&in, uint = 0, uint = 0);
String@ Format(const String&in, const String&in);
String@ Format(const String&in, const String&in, const String&in);
String@ Format(const String&in, const String&in, const String&in, const String&in);
String@ Format(const String&in, const String&in, const String&in, const String&in, const String&in);
String@ Format(const String&in, const String&in, const String&in, const String&in, const String&in, const String&in);
String@ Format(const String&in, const String&in, const String&in, const String&in, const String&in, const String&in, const String&in);
String@ Format(const String&in, const String&in, const String&in, const String&in, const String&in, const String&in, const String&in, const String&in);
String@ Format(const String&in, const String&in, const String&in, const String&in, const String&in, const String&in, const String&in, const String&in, const String&in);
String@[]@ Split(const String&in, const String&in);
String@ Join(String@[]&in, const String&in);
uint Strtol(const String&in, uint);
String@ FromCharCode(uint);
String@ FromCharCode(uint[]&in);
const String@ TranslateString(const String&in);
const String@ _T(const String&in);
const String@ GetUserLanguage();
DataSource@ getDataSource(const String&in);
ServerBrowser& get_serverBrowser();
