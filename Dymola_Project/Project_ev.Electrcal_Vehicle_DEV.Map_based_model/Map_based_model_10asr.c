/* Asserts */
#include "Map_based_model_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 581
type: ALGORITHM

  assert(dragF.mode >= -1 and dragF.mode <= 3, "Variable violating min/max constraint: -1 <= dragF.mode <= 3, has value: " + String(dragF.mode, "d"));
*/
void Map_based_model_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,73,"Variable violating min/max constraint: -1 <= dragF.mode <= 3, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->localData[0]->integerVars[0] /* dragF.mode DISCRETE */,((modelica_integer) -1));
    tmp1 = LessEq(data->localData[0]->integerVars[0] /* dragF.mode DISCRETE */,((modelica_integer) 3));
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_integer_to_modelica_string_format(data->localData[0]->integerVars[0] /* dragF.mode DISCRETE */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Mechanics/Translational/Interfaces/PartialFriction.mo",30,3,35,101,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndragF.mode >= -1 and dragF.mode <= 3", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int Map_based_model_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  Map_based_model_eqFunction_581(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

