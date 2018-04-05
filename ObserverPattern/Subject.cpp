#include "Observer.h"
#include "Subject.h"

void Subject::Attach( Observer* obv )
{
    _obvs.push_front( obv );
}

void Subject::Detach( Observer* obv )
{
    if ( obv != NULL )
    {
        _obvs.remove( obv );
    }
}

void Subject::Notify()
{
    for ( list<Observer*>::iterator It = _obvs.begin(); It != _obvs.end(); ++It )
    {
        ( *It )->Update( this );
    }
}

Subject::~Subject() { }

Subject::Subject()
{
    //_obvs.clear();
}

string ConcreteSubject::GetState()
{
    return _st;
}

void ConcreteSubject::SetState( const string& st )
{
    _st = st;
}
