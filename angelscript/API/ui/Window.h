/**
 * Window
 */
class Window
{
public:
	/* object properties */

	/* object behaviors */

	/* object methods */
	ElementDocument@ open(const String&in);
	void close(int = 0);
	void modal(const String&inout, int = - 1);
	int getModalValue() const;
	void preload(const String&in);
	ElementDocument@ get_document() const;
	String@ get_location() const;
	void set_location(const String&in);
	uint get_time() const;
	bool get_drawBackground() const;
	int get_width() const;
	int get_height() const;
	float get_pixelRatio() const;
	uint history_size() const;
	void history_back() const;
	void startLocalSound(const String&in) const;
	void startBackgroundTrack(String&in, String&in, bool = true) const;
	void stopBackgroundTrack() const;
	int setTimeout(TimerCallback@, uint);
	int setInterval(TimerCallback@, uint);
	int setTimeout(TimerCallback2@, uint, any&in);
	int setInterval(TimerCallback2@, uint, any&in);
	void clearTimeout(int);
	void clearInterval(int);
	void flash(uint);
	int get_connectCount();
	uint get_supportedInputDevices();
	void showSoftKeyboard(bool);
	bool get_browserAvailable();
	String@ get_osName() const;
};

