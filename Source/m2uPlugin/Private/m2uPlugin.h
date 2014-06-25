
#pragma once

DECLARE_LOG_CATEGORY_EXTERN(LogM2U, Log, All);

class Fm2uTickObject;

class Fm2uPlugin : public Im2uPlugin
{
public:
	Fm2uPlugin();

	/** IModuleInterface implementation */
	virtual void StartupModule() OVERRIDE;
	virtual void ShutdownModule() OVERRIDE;
	bool HandleConnectionAccepted( FSocket* ClientSocket, const FIPv4Endpoint& ClientEndpoint);
	void Tick( float DeltaTime );

private:
	FSocket* Client;
	class FTcpListener* TcpListener;
	Fm2uTickObject* TickObject;

};

