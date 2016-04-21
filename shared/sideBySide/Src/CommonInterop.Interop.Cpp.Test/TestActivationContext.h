#ifndef TESTACTIVATIONCONTEXT_H
#define TESTACTIVATIONCONTEXT_H

static HANDLE hCtx;
static ULONG_PTR cookie;

public ref class TestActivationContext
{
public:
	static void Initialize();
	static void Cleanup();
};

#endif