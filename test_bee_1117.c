#include "./Unity/src/unity.h"
#include "bee_1117.h"

void setUp(){}; //FUNÇÃO PADRÂO DO UNITY

void tearDown(){}; //FUNÇÃO PADRÃO  

void testFunctionCheckNote() {
    TEST_ASSERT_FALSE(checkNote(-3.5)); //TESTA SE O RETORNO DA FUNÇÃO É FALSE
    TEST_ASSERT_TRUE(checkNote(10)); //TESTA SE O RETORNO DA FUNÇÃO É TRUE
}

int main(void) {
    UNITY_BEGIN(); //INICIALIZA O UNITY
    RUN_TEST(testFunctionCheckNote); //RODA O TESTE
    return UNITY_END(); //FINALIZA O UNITY E RETORNA O STATUS DE EXECUÇÃO
}