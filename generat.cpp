/*******************************************************************
*
*  DESCRIPTION: class Generator
*
*  AUTHOR: Huayi Du ,Rujun Hu
*  11/6/2001
*
*******************************************************************/

/** include files **/
#include "generat.h"       // base header
#include "message.h"       // class InternalMessage 
#include "mainsimu.h"      // class Simulator
#include "distri.h"        // class Distribution 
#include "strutil.h"       // str2Value( ... )

/*******************************************************************
* Function Name: Generator
* Description: constructor
********************************************************************/
Generator::Generator( const string &name )
: Atomic( name )
, out( addOutputPort( "out" ) )
{
	
}

/*******************************************************************
* Function Name: initFunction
********************************************************************/
Model &Generator::initFunction()
{
	pid =  2;
	holdIn( active, Time::Zero ) ;
	return *this ;
}

/*******************************************************************
* Function Name: internalFunction
********************************************************************/
Model &Generator::internalFunction( const InternalMessage & )
{
	
                   holdIn(active, Time("00:00:00:500"));
   	return *this ;
}

/*******************************************************************
* Function Name: outputFunction
********************************************************************/
Model &Generator::outputFunction( const InternalMessage &msg )
{
	sendOutput( msg.time(), out, pid ) ;
	return *this ;
}

Generator::~Generator()
{
	delete dist;
}
