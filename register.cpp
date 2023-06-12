/*******************************************************************
*
*  DESCRIPTION: Simulator::registerNewAtomics()
*
*
*******************************************************************/

#include "modeladm.h" 
#include "mainsimu.h"
#include "generat.h"    // class Generator
void MainSimulator::registerNewAtomics()
{
	
	SingleModelAdm::Instance().registerAtomic( NewAtomicFunction<Generator>() , "Generator" ) ;
	
}
