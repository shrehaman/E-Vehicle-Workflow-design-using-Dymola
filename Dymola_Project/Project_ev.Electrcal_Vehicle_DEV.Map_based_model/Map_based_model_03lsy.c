/* Linear Systems */
#include "Map_based_model_model.h"
#include "Map_based_model_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 178
type: SIMPLE_ASSIGN
mass.flange_a.f = dragF.f + mass.m * mass.a
*/
void Map_based_model_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->localData[0]->realVars[90] /* mass.flange_a.f variable */ = data->localData[0]->realVars[48] /* dragF.f variable */ + (data->simulationInfo->realParameter[128] /* mass.m PARAM */) * (data->localData[0]->realVars[89] /* mass.a variable */);
  TRACE_POP
}
/*
equation index: 179
type: SIMPLE_ASSIGN
$DER.$DER.pP1.flange_a.s = mass.a
*/
void Map_based_model_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->localData[0]->realVars[13] /* der(der(pP1.flange_a.s)) DUMMY_DER */ = data->localData[0]->realVars[89] /* mass.a variable */;
  TRACE_POP
}
/*
equation index: 180
type: SIMPLE_ASSIGN
$DER.$DER.gear.phi_b = $DER.$DER.pP1.flange_a.s / wheel.radius
*/
void Map_based_model_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->localData[0]->realVars[12] /* der(der(gear.phi_b)) DUMMY_DER */ = DIVISION_SIM(data->localData[0]->realVars[13] /* der(der(pP1.flange_a.s)) DUMMY_DER */,data->simulationInfo->realParameter[138] /* wheel.radius PARAM */,"wheel.radius",equationIndexes);
  TRACE_POP
}
/*
equation index: 181
type: SIMPLE_ASSIGN
eleDrive.inertia.a = gear.ratio * $DER.$DER.gear.phi_b
*/
void Map_based_model_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->localData[0]->realVars[70] /* eleDrive.inertia.a variable */ = (data->simulationInfo->realParameter[126] /* gear.ratio PARAM */) * (data->localData[0]->realVars[12] /* der(der(gear.phi_b)) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 182
type: SIMPLE_ASSIGN
add.u1 = eleDrive.toElePow.tau - eleDrive.inertia.J * eleDrive.inertia.a
*/
void Map_based_model_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->localData[0]->realVars[21] /* add.u1 variable */ = data->localData[0]->realVars[81] /* eleDrive.toElePow.tau variable */ - ((data->simulationInfo->realParameter[89] /* eleDrive.inertia.J PARAM */) * (data->localData[0]->realVars[70] /* eleDrive.inertia.a variable */));
  TRACE_POP
}
/*
equation index: 183
type: SIMPLE_ASSIGN
wheel.flangeR.tau = gear.ratio * add.u1
*/
void Map_based_model_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->localData[0]->realVars[95] /* wheel.flangeR.tau variable */ = (data->simulationInfo->realParameter[126] /* gear.ratio PARAM */) * (data->localData[0]->realVars[21] /* add.u1 variable */);
  TRACE_POP
}
/*
equation index: 184
type: SIMPLE_ASSIGN
wheel.flangeT.f = (-wheel.flangeR.tau) / wheel.radius
*/
void Map_based_model_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  data->localData[0]->realVars[96] /* wheel.flangeT.f variable */ = DIVISION_SIM((-data->localData[0]->realVars[95] /* wheel.flangeR.tau variable */),data->simulationInfo->realParameter[138] /* wheel.radius PARAM */,"wheel.radius",equationIndexes);
  TRACE_POP
}
/*
equation index: 185
type: SIMPLE_ASSIGN
add.y = add.k1 * add.u1 + add.k2 * add.u2
*/
void Map_based_model_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  data->localData[0]->realVars[23] /* add.y variable */ = (data->simulationInfo->realParameter[0] /* add.k1 PARAM */) * (data->localData[0]->realVars[21] /* add.u1 variable */) + (data->simulationInfo->realParameter[1] /* add.k2 PARAM */) * (data->localData[0]->realVars[22] /* add.u2 variable */);
  TRACE_POP
}
/*
equation index: 186
type: SIMPLE_ASSIGN
brake.f = wheel.flangeT.f + mass.flange_a.f
*/
void Map_based_model_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->localData[0]->realVars[43] /* brake.f variable */ = data->localData[0]->realVars[96] /* wheel.flangeT.f variable */ + data->localData[0]->realVars[90] /* mass.flange_a.f variable */;
  TRACE_POP
}
/*
equation index: 187
type: SIMPLE_ASSIGN
cutNeg.y = brake.f / tqToForce.k
*/
void Map_based_model_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->localData[0]->realVars[45] /* cutNeg.y variable */ = DIVISION_SIM(data->localData[0]->realVars[43] /* brake.f variable */,data->simulationInfo->realParameter[129] /* tqToForce.k PARAM */,"tqToForce.k",equationIndexes);
  TRACE_POP
}

void residualFunc199(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,199};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[89] /* mass.a variable */ = xloc[0];
  /* local constraints */
  Map_based_model_eqFunction_178(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_179(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_180(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_181(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_182(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_183(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_184(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_185(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_186(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_187(data, threadData);
  res[0] = data->localData[0]->realVars[23] /* add.y variable */ - data->localData[0]->realVars[45] /* cutNeg.y variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData199(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for mass.a */
  linearSystemData->nominal[i] = data->modelData->realVarsData[89].attribute /* mass.a */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[89].attribute /* mass.a */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[89].attribute /* mass.a */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Map_based_model_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 199;
  linearSystemData[0].size = 1;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc199;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = Map_based_model_functionJacLSJac2_column;
  linearSystemData[0].initialAnalyticalJacobian = Map_based_model_initialAnalyticJacobianLSJac2;
  linearSystemData[0].jacobianIndex = 2 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA199;
  linearSystemData[0].setb = NULL;  //setLinearVectorb199;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData199;
}

#if defined(__cplusplus)
}
#endif

