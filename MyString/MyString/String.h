#pragma once
class String
{
private:
	char* str;
	static size_t CountStr;
public:
	String();
	String(size_t size);
	String(const char* str, size_t size);
	~String();

	void SetStr(char* str);
	char* GetStr();

	static size_t GetCountStr();

	void EnterStr();
	void Show() const;
};
