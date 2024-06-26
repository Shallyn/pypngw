/**
* Writer: Xiaolin.liu
* xiaolin.liu@mail.bnu.edu.cn
*
* This module contains basic functions for  calculation.
* Functions list:
* Kernel: 
* 20xx.xx.xx, LOC
**/

#define CONCAT2x(a,b) a##b
#define CONCAT2(a,b) CONCAT2x(a,b)
#define CONCAT3x(a,b,c) a##b##c
#define CONCAT3(a,b,c) CONCAT3x(a,b,c)
#define STRING(a) #a

#define VTYPE CONCAT2(TYPE,Vector)

#define FUNC CONCAT3(LAL,TYPECODE,CreateVector)
#define XFUNC CONCAT2(Create,VTYPE)

VTYPE * XFUNC ( UINT4 length )
{
  VTYPE * vector;
  vector = MYMalloc( sizeof( *vector ) );
  if ( ! vector )
    X_ERROR_NULL( X_ENOMEM );
  vector->length = length;
  if ( ! length ) /* zero length: set data pointer to be NULL */
    vector->data = NULL;
  else /* non-zero length: allocate memory for data */
  {
    vector->data = MYMalloc( length * sizeof( *vector->data ) );
    if ( ! vector->data )
    {
      MYFree( vector );
      X_ERROR_NULL( X_ENOMEM );
    }
  }
  return vector;
}


void FUNC ( ProcStatus *status, VTYPE **vector, UINT4 length )
{
  /*
   * Initialize status structure
   */

  INITSTATUS(status);

  /* Check sequence length: report error if 0
   * Use of unsigned for length means we can't check if negative
   * length was passed
   */

  ASSERT( length > 0, status, AVFACTORIESH_ELENGTH, AVFACTORIESH_MSGELENGTH );

  /*
   * Check return structure: If return pointer does not point to a
   *    valid pointer then report an error
   */

  ASSERT( vector != NULL, status, AVFACTORIESH_EVPTR, AVFACTORIESH_MSGEVPTR );

  ASSERT( *vector == NULL, status, AVFACTORIESH_EUPTR, AVFACTORIESH_MSGEUPTR );

  /*
   * Allocate pointer
   */

  *vector = XFUNC ( length );
  if ( ! *vector )
  {
    XClearErrno();
    ABORT( status, AVFACTORIESH_EMALLOC, AVFACTORIESH_MSGEMALLOC );
  }

  /* We be done: Normal exit */

  RETURN( status );
}

#undef VTYPE
#undef FUNC
#undef XFUNC
