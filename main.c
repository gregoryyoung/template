#include <stdlib.h>
#include <string.h>
#include <CUnit/Basic.h>
#include "chunk_tests.h"

int main()
{
   /* initialize the CUnit test registry */
   if (CUE_SUCCESS != CU_initialize_registry())
      return CU_get_error();

   int err = register_chunk_tests();
   if(err) return err;

   /* Run all tests using the CUnit Basic interface */
   CU_basic_set_mode(CU_BRM_VERBOSE);
   CU_basic_run_tests();
   CU_cleanup_registry();
   return CU_get_error();
}
