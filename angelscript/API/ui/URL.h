/**
 * URL
 */
class URL
{
public:
	/* object properties */

	/* object behaviors */
	~URL();&s
	URL();&s
	URL(const String&in);&s
	URL(const URL&in);&s

	/* object methods */
	URL& opAssign(const URL&in);
	String@ getURL() const;
	bool setURL(const String&in);
	String@ getSchema() const;
	bool setSchema(const String&in);
	String@ getLogin() const;
	bool setLogin(const String&in);
	String@ getPassword() const;
	bool setPassword(const String&in);
	String@ getHost() const;
	bool setHost(const String&in);
	uint getPort() const;
	bool setPort(uint);
	String@ getPath() const;
	bool setPath(const String&in);
	bool prefixPath(const String&in);
	String@ getFileName() const;
	bool setFileName(const String&in);
	String@ getFullFileName() const;
	String@ getFileExtension() const;
	bool setFileExtension(const String&in);
	Dictionary@ getParameters() const;
	void setParameter(const String&in, const String&in);
	void clearParameters();
	String@ getQueryString() const;
};

