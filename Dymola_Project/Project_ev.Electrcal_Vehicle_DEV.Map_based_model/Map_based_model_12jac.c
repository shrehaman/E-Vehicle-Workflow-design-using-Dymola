/* Jacobians 11 */
#include "Map_based_model_model.h"
#include "Map_based_model_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 51
type: SIMPLE_ASSIGN
$DER.$DER.gear.phi_b.$pDERNLSJac0.dummyVarNLSJac0 = mass.a.SeedNLSJac0 / wheel.radius
*/
void Map_based_model_eqFunction_51(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,51};
  jacobian->tmpVars[2] /* der(der(gear.phi_b.$pDERNLSJac0.dummyVarNLSJac0)) JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[0] /* mass.a.SeedNLSJac0 SEED_VAR */,data->simulationInfo->realParameter[138] /* wheel.radius PARAM */,"wheel.radius");
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
eleDrive.inertia.a.$pDERNLSJac0.dummyVarNLSJac0 = gear.ratio * $DER.$DER.gear.phi_b.$pDERNLSJac0.dummyVarNLSJac0
*/
void Map_based_model_eqFunction_52(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,52};
  jacobian->tmpVars[3] /* eleDrive.inertia.a.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[126] /* gear.ratio PARAM */) * (jacobian->tmpVars[2] /* der(der(gear.phi_b.$pDERNLSJac0.dummyVarNLSJac0)) JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
add.u1.$pDERNLSJac0.dummyVarNLSJac0 = (-eleDrive.inertia.J) * eleDrive.inertia.a.$pDERNLSJac0.dummyVarNLSJac0
*/
void Map_based_model_eqFunction_53(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,53};
  jacobian->tmpVars[4] /* add.u1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[89] /* eleDrive.inertia.J PARAM */)) * (jacobian->tmpVars[3] /* eleDrive.inertia.a.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
wheel.flangeR.tau.$pDERNLSJac0.dummyVarNLSJac0 = gear.ratio * add.u1.$pDERNLSJac0.dummyVarNLSJac0
*/
void Map_based_model_eqFunction_54(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,54};
  jacobian->tmpVars[5] /* wheel.flangeR.tau.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[126] /* gear.ratio PARAM */) * (jacobian->tmpVars[4] /* add.u1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
wheel.flangeT.f.$pDERNLSJac0.dummyVarNLSJac0 = (-wheel.flangeR.tau.$pDERNLSJac0.dummyVarNLSJac0) / wheel.radius
*/
void Map_based_model_eqFunction_55(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,55};
  jacobian->tmpVars[6] /* wheel.flangeT.f.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->tmpVars[5] /* wheel.flangeR.tau.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */),data->simulationInfo->realParameter[138] /* wheel.radius PARAM */,"wheel.radius");
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
add.y.$pDERNLSJac0.dummyVarNLSJac0 = add.k1 * add.u1.$pDERNLSJac0.dummyVarNLSJac0
*/
void Map_based_model_eqFunction_56(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,56};
  jacobian->tmpVars[7] /* add.y.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[0] /* add.k1 PARAM */) * (jacobian->tmpVars[4] /* add.u1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
cutNeg.y.$pDERNLSJac0.dummyVarNLSJac0 = __HOM_LAMBDA * (if add.y > cutNeg.uMax then 0.0 else if add.y < cutNeg.uMin then 0.0 else add.y.$pDERNLSJac0.dummyVarNLSJac0) + (1.0 - __HOM_LAMBDA) * add.y.$pDERNLSJac0.dummyVarNLSJac0
*/
void Map_based_model_eqFunction_57(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,57};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[23] /* add.y variable */,data->simulationInfo->realParameter[40] /* cutNeg.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[23] /* add.y variable */,data->simulationInfo->realParameter[41] /* cutNeg.uMin PARAM */);
    tmp3 = (tmp1?0.0:jacobian->tmpVars[7] /* add.y.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  }
  jacobian->tmpVars[8] /* cutNeg.y.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->lambda) * (tmp3) + (1.0 - data->simulationInfo->lambda) * (jacobian->tmpVars[7] /* add.y.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
brake.f.$pDERNLSJac0.dummyVarNLSJac0 = tqToForce.k * cutNeg.y.$pDERNLSJac0.dummyVarNLSJac0
*/
void Map_based_model_eqFunction_58(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,58};
  jacobian->tmpVars[9] /* brake.f.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[129] /* tqToForce.k PARAM */) * (jacobian->tmpVars[8] /* cutNeg.y.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
mass.flange_a.f.$pDERNLSJac0.dummyVarNLSJac0 = mass.m * mass.a.SeedNLSJac0
*/
void Map_based_model_eqFunction_59(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,59};
  jacobian->tmpVars[0] /* mass.flange_a.f.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[128] /* mass.m PARAM */) * (jacobian->seedVars[0] /* mass.a.SeedNLSJac0 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
$res_NLSJac0_1.$pDERNLSJac0.dummyVarNLSJac0 = wheel.flangeT.f.$pDERNLSJac0.dummyVarNLSJac0 + mass.flange_a.f.$pDERNLSJac0.dummyVarNLSJac0 - brake.f.$pDERNLSJac0.dummyVarNLSJac0
*/
void Map_based_model_eqFunction_60(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,60};
  jacobian->resultVars[0] /* $res_NLSJac0_1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* wheel.flangeT.f.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* mass.flange_a.f.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[9] /* brake.f.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int Map_based_model_functionJacNLSJac0_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Map_based_model_INDEX_JAC_NLSJac0;
  
  
  TRACE_POP
  return 0;
}

int Map_based_model_functionJacNLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Map_based_model_INDEX_JAC_NLSJac0;
  Map_based_model_eqFunction_51(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_52(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_53(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_54(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_55(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_56(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_57(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_58(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_59(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_60(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 94
type: SIMPLE_ASSIGN
$res_NLSJac1_1.$pDERNLSJac1.dummyVarNLSJac1 = if dragF.locked then 0.0 else dragF.sa.SeedNLSJac1
*/
void Map_based_model_eqFunction_94(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,94};
  jacobian->resultVars[0] /* $res_NLSJac1_1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->booleanVars[2] /* dragF.locked DISCRETE */?0.0:jacobian->seedVars[0] /* dragF.sa.SeedNLSJac1 SEED_VAR */);
  TRACE_POP
}

OMC_DISABLE_OPT
int Map_based_model_functionJacNLSJac1_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Map_based_model_INDEX_JAC_NLSJac1;
  
  
  TRACE_POP
  return 0;
}

int Map_based_model_functionJacNLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Map_based_model_INDEX_JAC_NLSJac1;
  Map_based_model_eqFunction_94(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 189
type: SIMPLE_ASSIGN
$DER.$DER.gear.phi_b.$pDERLSJac2.dummyVarLSJac2 = mass.a.SeedLSJac2 / wheel.radius
*/
void Map_based_model_eqFunction_189(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,189};
  jacobian->tmpVars[2] /* der(der(gear.phi_b.$pDERLSJac2.dummyVarLSJac2)) JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[0] /* mass.a.SeedLSJac2 SEED_VAR */,data->simulationInfo->realParameter[138] /* wheel.radius PARAM */,"wheel.radius");
  TRACE_POP
}

/*
equation index: 190
type: SIMPLE_ASSIGN
eleDrive.inertia.a.$pDERLSJac2.dummyVarLSJac2 = gear.ratio * $DER.$DER.gear.phi_b.$pDERLSJac2.dummyVarLSJac2
*/
void Map_based_model_eqFunction_190(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,190};
  jacobian->tmpVars[3] /* eleDrive.inertia.a.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[126] /* gear.ratio PARAM */) * (jacobian->tmpVars[2] /* der(der(gear.phi_b.$pDERLSJac2.dummyVarLSJac2)) JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
add.u1.$pDERLSJac2.dummyVarLSJac2 = (-eleDrive.inertia.J) * eleDrive.inertia.a.$pDERLSJac2.dummyVarLSJac2
*/
void Map_based_model_eqFunction_191(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,191};
  jacobian->tmpVars[4] /* add.u1.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[89] /* eleDrive.inertia.J PARAM */)) * (jacobian->tmpVars[3] /* eleDrive.inertia.a.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
wheel.flangeR.tau.$pDERLSJac2.dummyVarLSJac2 = gear.ratio * add.u1.$pDERLSJac2.dummyVarLSJac2
*/
void Map_based_model_eqFunction_192(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,192};
  jacobian->tmpVars[5] /* wheel.flangeR.tau.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[126] /* gear.ratio PARAM */) * (jacobian->tmpVars[4] /* add.u1.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 193
type: SIMPLE_ASSIGN
wheel.flangeT.f.$pDERLSJac2.dummyVarLSJac2 = (-wheel.flangeR.tau.$pDERLSJac2.dummyVarLSJac2) / wheel.radius
*/
void Map_based_model_eqFunction_193(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,193};
  jacobian->tmpVars[6] /* wheel.flangeT.f.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->tmpVars[5] /* wheel.flangeR.tau.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */),data->simulationInfo->realParameter[138] /* wheel.radius PARAM */,"wheel.radius");
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
add.y.$pDERLSJac2.dummyVarLSJac2 = add.k1 * add.u1.$pDERLSJac2.dummyVarLSJac2
*/
void Map_based_model_eqFunction_194(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,194};
  jacobian->tmpVars[7] /* add.y.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[0] /* add.k1 PARAM */) * (jacobian->tmpVars[4] /* add.u1.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
mass.flange_a.f.$pDERLSJac2.dummyVarLSJac2 = mass.m * mass.a.SeedLSJac2
*/
void Map_based_model_eqFunction_195(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,195};
  jacobian->tmpVars[0] /* mass.flange_a.f.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[128] /* mass.m PARAM */) * (jacobian->seedVars[0] /* mass.a.SeedLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
brake.f.$pDERLSJac2.dummyVarLSJac2 = wheel.flangeT.f.$pDERLSJac2.dummyVarLSJac2 + mass.flange_a.f.$pDERLSJac2.dummyVarLSJac2
*/
void Map_based_model_eqFunction_196(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,196};
  jacobian->tmpVars[8] /* brake.f.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[6] /* wheel.flangeT.f.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* mass.flange_a.f.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
cutNeg.y.$pDERLSJac2.dummyVarLSJac2 = brake.f.$pDERLSJac2.dummyVarLSJac2 / tqToForce.k
*/
void Map_based_model_eqFunction_197(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,197};
  jacobian->tmpVars[9] /* cutNeg.y.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[8] /* brake.f.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[129] /* tqToForce.k PARAM */,"tqToForce.k");
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
$res_LSJac2_1.$pDERLSJac2.dummyVarLSJac2 = add.y.$pDERLSJac2.dummyVarLSJac2 - cutNeg.y.$pDERLSJac2.dummyVarLSJac2
*/
void Map_based_model_eqFunction_198(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,198};
  jacobian->resultVars[0] /* $res_LSJac2_1.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[7] /* add.y.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[9] /* cutNeg.y.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int Map_based_model_functionJacLSJac2_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Map_based_model_INDEX_JAC_LSJac2;
  
  
  TRACE_POP
  return 0;
}

int Map_based_model_functionJacLSJac2_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Map_based_model_INDEX_JAC_LSJac2;
  Map_based_model_eqFunction_189(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_190(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_191(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_192(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_193(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_194(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_195(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_196(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_197(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_198(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 232
type: SIMPLE_ASSIGN
$res_NLSJac3_1.$pDERNLSJac3.dummyVarNLSJac3 = if dragF.locked then 0.0 else dragF.sa.SeedNLSJac3
*/
void Map_based_model_eqFunction_232(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,232};
  jacobian->resultVars[0] /* $res_NLSJac3_1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = (data->localData[0]->booleanVars[2] /* dragF.locked DISCRETE */?0.0:jacobian->seedVars[0] /* dragF.sa.SeedNLSJac3 SEED_VAR */);
  TRACE_POP
}

OMC_DISABLE_OPT
int Map_based_model_functionJacNLSJac3_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Map_based_model_INDEX_JAC_NLSJac3;
  
  
  TRACE_POP
  return 0;
}

int Map_based_model_functionJacNLSJac3_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Map_based_model_INDEX_JAC_NLSJac3;
  Map_based_model_eqFunction_232(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 324
type: SIMPLE_ASSIGN
eleDrive.inertia.a.$pDERNLSJac4.dummyVarNLSJac4 = (-add.u1.SeedNLSJac4) / eleDrive.inertia.J
*/
void Map_based_model_eqFunction_324(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,324};
  jacobian->tmpVars[0] /* eleDrive.inertia.a.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->seedVars[0] /* add.u1.SeedNLSJac4 SEED_VAR */),data->simulationInfo->realParameter[89] /* eleDrive.inertia.J PARAM */,"eleDrive.inertia.J");
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
wheel.flangeR.tau.$pDERNLSJac4.dummyVarNLSJac4 = gear.ratio * add.u1.SeedNLSJac4
*/
void Map_based_model_eqFunction_325(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,325};
  jacobian->tmpVars[1] /* wheel.flangeR.tau.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[126] /* gear.ratio PARAM */) * (jacobian->seedVars[0] /* add.u1.SeedNLSJac4 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
wheel.flangeT.f.$pDERNLSJac4.dummyVarNLSJac4 = (-wheel.flangeR.tau.$pDERNLSJac4.dummyVarNLSJac4) / wheel.radius
*/
void Map_based_model_eqFunction_326(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,326};
  jacobian->tmpVars[2] /* wheel.flangeT.f.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->tmpVars[1] /* wheel.flangeR.tau.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */),data->simulationInfo->realParameter[138] /* wheel.radius PARAM */,"wheel.radius");
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
add.y.$pDERNLSJac4.dummyVarNLSJac4 = add.k1 * add.u1.SeedNLSJac4
*/
void Map_based_model_eqFunction_327(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,327};
  jacobian->tmpVars[3] /* add.y.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[0] /* add.k1 PARAM */) * (jacobian->seedVars[0] /* add.u1.SeedNLSJac4 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
cutNeg.y.$pDERNLSJac4.dummyVarNLSJac4 = if add.y > cutNeg.uMax then 0.0 else if add.y < cutNeg.uMin then 0.0 else add.y.$pDERNLSJac4.dummyVarNLSJac4
*/
void Map_based_model_eqFunction_328(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,328};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  relationhysteresis(data, &tmp4, data->localData[0]->realVars[23] /* add.y variable */, data->simulationInfo->realParameter[40] /* cutNeg.uMax PARAM */, 10, Greater, GreaterZC);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = 0.0;
  }
  else
  {
    relationhysteresis(data, &tmp5, data->localData[0]->realVars[23] /* add.y variable */, data->simulationInfo->realParameter[41] /* cutNeg.uMin PARAM */, 11, Less, LessZC);
    tmp7 = (tmp5?0.0:jacobian->tmpVars[3] /* add.y.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  }
  jacobian->tmpVars[4] /* cutNeg.y.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = tmp7;
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
brake.f.$pDERNLSJac4.dummyVarNLSJac4 = tqToForce.k * cutNeg.y.$pDERNLSJac4.dummyVarNLSJac4
*/
void Map_based_model_eqFunction_329(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,329};
  jacobian->tmpVars[5] /* brake.f.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[129] /* tqToForce.k PARAM */) * (jacobian->tmpVars[4] /* cutNeg.y.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
$DER.$DER.gear.phi_b.$pDERNLSJac4.dummyVarNLSJac4 = eleDrive.inertia.a.$pDERNLSJac4.dummyVarNLSJac4 / gear.ratio
*/
void Map_based_model_eqFunction_330(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,330};
  jacobian->tmpVars[6] /* der(der(gear.phi_b.$pDERNLSJac4.dummyVarNLSJac4)) JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[0] /* eleDrive.inertia.a.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[126] /* gear.ratio PARAM */,"gear.ratio");
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
dragF.a_relfric.$pDERNLSJac4.dummyVarNLSJac4 = $DER.$DER.gear.phi_b.$pDERNLSJac4.dummyVarNLSJac4 * wheel.radius
*/
void Map_based_model_eqFunction_331(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,331};
  jacobian->tmpVars[7] /* dragF.a_relfric.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[6] /* der(der(gear.phi_b.$pDERNLSJac4.dummyVarNLSJac4)) JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[138] /* wheel.radius PARAM */);
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
mass.flange_a.f.$pDERNLSJac4.dummyVarNLSJac4 = mass.m * dragF.a_relfric.$pDERNLSJac4.dummyVarNLSJac4
*/
void Map_based_model_eqFunction_332(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,332};
  jacobian->tmpVars[8] /* mass.flange_a.f.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[128] /* mass.m PARAM */) * (jacobian->tmpVars[7] /* dragF.a_relfric.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
$res_NLSJac4_1.$pDERNLSJac4.dummyVarNLSJac4 = wheel.flangeT.f.$pDERNLSJac4.dummyVarNLSJac4 + mass.flange_a.f.$pDERNLSJac4.dummyVarNLSJac4 - brake.f.$pDERNLSJac4.dummyVarNLSJac4
*/
void Map_based_model_eqFunction_333(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,333};
  jacobian->resultVars[0] /* $res_NLSJac4_1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[2] /* wheel.flangeT.f.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[8] /* mass.flange_a.f.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[5] /* brake.f.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int Map_based_model_functionJacNLSJac4_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Map_based_model_INDEX_JAC_NLSJac4;
  
  
  TRACE_POP
  return 0;
}

int Map_based_model_functionJacNLSJac4_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Map_based_model_INDEX_JAC_NLSJac4;
  Map_based_model_eqFunction_324(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_325(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_326(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_327(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_328(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_329(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_330(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_331(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_332(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_333(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 342
type: SIMPLE_ASSIGN
dragF.startForward.$pDERNLSJac5.dummyVarNLSJac5 = pre(dragF.mode) == 0 and (dragF.sa > dragF.A or dragF.startForward and dragF.sa > dragF.A) or pre(dragF.mode) == -1 and mass.v > dragF.v_small
*/
void Map_based_model_eqFunction_342(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,342};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp12;
  relationhysteresis(data, &tmp9, data->localData[0]->realVars[51] /* dragF.sa variable */, data->simulationInfo->realParameter[42] /* dragF.A PARAM */, 7, Greater, GreaterZC);
  relationhysteresis(data, &tmp10, data->localData[0]->realVars[51] /* dragF.sa variable */, data->simulationInfo->realParameter[42] /* dragF.A PARAM */, 7, Greater, GreaterZC);
  relationhysteresis(data, &tmp12, data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, data->simulationInfo->realParameter[51] /* dragF.v_small PARAM */, 8, Greater, GreaterZC);
  jacobian->tmpVars[0] /* dragF.startForward.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 0)) && (tmp9 || (data->localData[0]->booleanVars[4] /* dragF.startForward DISCRETE */ && tmp10))) || ((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) -1)) && tmp12));
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
dragF.startBackward.$pDERNLSJac5.dummyVarNLSJac5 = pre(dragF.mode) == 0 and (dragF.sa < (-dragF.A) or dragF.startBackward and dragF.sa < (-dragF.A)) or pre(dragF.mode) == 1 and mass.v < (-dragF.v_small)
*/
void Map_based_model_eqFunction_343(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,343};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp17;
  relationhysteresis(data, &tmp14, data->localData[0]->realVars[51] /* dragF.sa variable */, (-data->simulationInfo->realParameter[42] /* dragF.A PARAM */), 5, Less, LessZC);
  relationhysteresis(data, &tmp15, data->localData[0]->realVars[51] /* dragF.sa variable */, (-data->simulationInfo->realParameter[42] /* dragF.A PARAM */), 5, Less, LessZC);
  relationhysteresis(data, &tmp17, data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, (-data->simulationInfo->realParameter[51] /* dragF.v_small PARAM */), 6, Less, LessZC);
  jacobian->tmpVars[1] /* dragF.startBackward.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 0)) && (tmp14 || (data->localData[0]->booleanVars[3] /* dragF.startBackward DISCRETE */ && tmp15))) || ((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 1)) && tmp17));
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
dragF.locked.$pDERNLSJac5.dummyVarNLSJac5 = not (pre(dragF.mode) == 1 or dragF.startForward or pre(dragF.mode) == -1 or dragF.startBackward)
*/
void Map_based_model_eqFunction_344(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,344};
  jacobian->tmpVars[2] /* dragF.locked.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (!((((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 1)) || data->localData[0]->booleanVars[4] /* dragF.startForward DISCRETE */) || (data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) -1))) || data->localData[0]->booleanVars[3] /* dragF.startBackward DISCRETE */));
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
$res_NLSJac5_1.$pDERNLSJac5.dummyVarNLSJac5 = if dragF.locked then 0.0 else dragF.sa.SeedNLSJac5
*/
void Map_based_model_eqFunction_345(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,345};
  jacobian->resultVars[0] /* $res_NLSJac5_1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (data->localData[0]->booleanVars[2] /* dragF.locked DISCRETE */?0.0:jacobian->seedVars[0] /* dragF.sa.SeedNLSJac5 SEED_VAR */);
  TRACE_POP
}

OMC_DISABLE_OPT
int Map_based_model_functionJacNLSJac5_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Map_based_model_INDEX_JAC_NLSJac5;
  
  
  TRACE_POP
  return 0;
}

int Map_based_model_functionJacNLSJac5_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Map_based_model_INDEX_JAC_NLSJac5;
  Map_based_model_eqFunction_342(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_343(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_344(data, threadData, jacobian, parentJacobian);
  Map_based_model_eqFunction_345(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int Map_based_model_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Map_based_model_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Map_based_model_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Map_based_model_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int Map_based_model_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Map_based_model_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int Map_based_model_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Map_based_model_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int Map_based_model_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 11;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(11,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Map_based_model_initialAnalyticJacobianNLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 4;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(4,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Map_based_model_initialAnalyticJacobianLSJac2(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 11;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(11,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Map_based_model_initialAnalyticJacobianNLSJac3(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 4;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(4,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Map_based_model_initialAnalyticJacobianNLSJac4(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 10;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(10,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Map_based_model_initialAnalyticJacobianNLSJac5(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 4;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(4,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
int Map_based_model_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int Map_based_model_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int Map_based_model_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int Map_based_model_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int Map_based_model_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+6] = {0,3,3,4,2,0,3};
  const int rowIndex[15] = {0,1,2,0,1,2,0,1,2,3,2,3,3,4,5};
  int i = 0;
  
  jacobian->sizeCols = 6;
  jacobian->sizeRows = 6;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((6+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(15*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 15;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(6*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 4;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (6+1)*sizeof(unsigned int));
  
  for(i=2;i<6+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 15*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[3] = 1;
  jacobian->sparsePattern->colorCols[2] = 2;
  jacobian->sparsePattern->colorCols[0] = 3;
  jacobian->sparsePattern->colorCols[4] = 4;
  jacobian->sparsePattern->colorCols[5] = 4;
  jacobian->sparsePattern->colorCols[1] = 4;
  TRACE_POP
  return 0;
}


