#include <CUnit/Basic.h>
#include "chunk.h"

int init_suite1(void)
{
    return 0;
}

int clean_suite1(void)
{
    return 0;
}

void test_create(void) {

}

void testAdd(void) {
	CU_ASSERT(0 == add(-2, 2));
	CU_ASSERT(5 == add(0,5));
}

int register_chunk_tests() {

	CU_pSuite pSuite = NULL;
    pSuite = CU_add_suite("chunk tests", init_suite1, clean_suite1);
    if (NULL == pSuite) {
       CU_cleanup_registry();
       return CU_get_error();
    }

    if ((NULL == CU_add_test(pSuite, "test of add()", testAdd)) ||
        (NULL == CU_add_test(pSuite, "test create()", test_create))||
        0)
    {
       CU_cleanup_registry();
       return CU_get_error();
    }
    return 0;
}