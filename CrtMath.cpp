/*

// Copyright Eric Chauvin 2021 - 2023.



#include "CrtMath.h"



void CrtMath::init( IntegerMath& intMath,
                    const SPrimes& sPrimes )
{
setupBaseArray( intMath, sPrimes );
}



void CrtMath::setupBaseArray( IntegerMath& intMath,
                    const SPrimes& sPrimes )
{
Integer bigBase;

bigBase.setToOne();

bigBase.copyToIntBuf( baseAr[0] );
baseArCrt[0].setToOne();

bigBase.setFromInt24( 2 );

// Count starts at 1, so it's the prime 3.
// The first time through the loop the base
// is set to 2.
// So BaseAr[0] = 1;
// BaseAr[1] = 2;
// BaseAr[2] = 6;
// BaseAr[3] = 30;
// And so on...


for( Int32 count = 1; count < last; count++ )
  {
  bigBase.copyToIntBuf( baseAr[count] );
  baseArCrt[count].setFromInteger( bigBase, intMath, sPrimes );

  // Multiply it for the next bigBase.
  intMath.multiplyInt( bigBase,
                    sPrimes.getPrimeAt( count ));
  }
}


void CrtMath::copyFromIntBuf( Integer& copyTo,
                  const Int32 where ) const
{
copyTo.copyFromIntBuf( baseAr[where] );
}

*/
