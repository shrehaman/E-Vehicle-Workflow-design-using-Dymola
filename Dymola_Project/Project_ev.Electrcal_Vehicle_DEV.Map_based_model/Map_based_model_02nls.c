/* Non Linear Systems */
#include "Map_based_model_model.h"
#include "Map_based_model_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 40
type: SIMPLE_ASSIGN
mass.flange_a.f = dragF.f + mass.m * mass.a
*/
void Map_based_model_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[90] /* mass.flange_a.f variable */ = data->localData[0]->realVars[48] /* dragF.f variable */ + (data->simulationInfo->realParameter[128] /* mass.m PARAM */) * (data->localData[0]->realVars[89] /* mass.a variable */);
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
$DER.$DER.pP1.flange_a.s = mass.a
*/
void Map_based_model_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[13] /* der(der(pP1.flange_a.s)) DUMMY_DER */ = data->localData[0]->realVars[89] /* mass.a variable */;
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
$DER.$DER.gear.phi_b = $DER.$DER.pP1.flange_a.s / wheel.radius
*/
void Map_based_model_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[12] /* der(der(gear.phi_b)) DUMMY_DER */ = DIVISION_SIM(data->localData[0]->realVars[13] /* der(der(pP1.flange_a.s)) DUMMY_DER */,data->simulationInfo->realParameter[138] /* wheel.radius PARAM */,"wheel.radius",equationIndexes);
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
eleDrive.inertia.a = gear.ratio * $DER.$DER.gear.phi_b
*/
void Map_based_model_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[70] /* eleDrive.inertia.a variable */ = (data->simulationInfo->realParameter[126] /* gear.ratio PARAM */) * (data->localData[0]->realVars[12] /* der(der(gear.phi_b)) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
add.u1 = eleDrive.toElePow.tau - eleDrive.inertia.J * eleDrive.inertia.a
*/
void Map_based_model_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->realVars[21] /* add.u1 variable */ = data->localData[0]->realVars[81] /* eleDrive.toElePow.tau variable */ - ((data->simulationInfo->realParameter[89] /* eleDrive.inertia.J PARAM */) * (data->localData[0]->realVars[70] /* eleDrive.inertia.a variable */));
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
wheel.flangeR.tau = gear.ratio * add.u1
*/
void Map_based_model_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->localData[0]->realVars[95] /* wheel.flangeR.tau variable */ = (data->simulationInfo->realParameter[126] /* gear.ratio PARAM */) * (data->localData[0]->realVars[21] /* add.u1 variable */);
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
wheel.flangeT.f = (-wheel.flangeR.tau) / wheel.radius
*/
void Map_based_model_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->realVars[96] /* wheel.flangeT.f variable */ = DIVISION_SIM((-data->localData[0]->realVars[95] /* wheel.flangeR.tau variable */),data->simulationInfo->realParameter[138] /* wheel.radius PARAM */,"wheel.radius",equationIndexes);
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
add.y = add.k1 * add.u1 + add.k2 * add.u2
*/
void Map_based_model_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[23] /* add.y variable */ = (data->simulationInfo->realParameter[0] /* add.k1 PARAM */) * (data->localData[0]->realVars[21] /* add.u1 variable */) + (data->simulationInfo->realParameter[1] /* add.k2 PARAM */) * (data->localData[0]->realVars[22] /* add.u2 variable */);
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
cutNeg.y = homotopy(smooth(0, if add.y > cutNeg.uMax then cutNeg.uMax else if add.y < cutNeg.uMin then cutNeg.uMin else add.y), add.y)
*/
void Map_based_model_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[23] /* add.y variable */,data->simulationInfo->realParameter[40] /* cutNeg.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[40] /* cutNeg.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[23] /* add.y variable */,data->simulationInfo->realParameter[41] /* cutNeg.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[41] /* cutNeg.uMin PARAM */:data->localData[0]->realVars[23] /* add.y variable */);
  }
  data->localData[0]->realVars[45] /* cutNeg.y variable */ = homotopy(tmp3, data->localData[0]->realVars[23] /* add.y variable */);
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
brake.f = tqToForce.k * cutNeg.y
*/
void Map_based_model_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[43] /* brake.f variable */ = (data->simulationInfo->realParameter[129] /* tqToForce.k PARAM */) * (data->localData[0]->realVars[45] /* cutNeg.y variable */);
  TRACE_POP
}

void residualFunc61(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,61};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[89] /* mass.a variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Map_based_model_eqFunction_40(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_41(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_42(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_43(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_44(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_45(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_46(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_47(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_48(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_49(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[90] /* mass.flange_a.f variable */ - data->localData[0]->realVars[43] /* brake.f variable */ + data->localData[0]->realVars[96] /* wheel.flangeT.f variable */;
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS61(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(unsigned int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(unsigned int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}

OMC_DISABLE_OPT
void initializeStaticDataNLS61(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for mass.a */
  sysData->nominal[i] = data->modelData->realVarsData[89].attribute /* mass.a */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[89].attribute /* mass.a */.min;
  sysData->max[i++]   = data->modelData->realVarsData[89].attribute /* mass.a */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS61(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS61(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[89] /* mass.a variable */;
}


/* inner equations */

/*
equation index: 90
type: SIMPLE_ASSIGN
dragF.startForward = $PRE.dragF.mode == 0 and (dragF.sa > dragF.A or $PRE.dragF.startForward and dragF.sa > dragF.A) or $PRE.dragF.mode == -1 and dragF.v > dragF.v_small or dragF.v > 0.0
*/
void Map_based_model_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  tmp1 = Greater(data->localData[0]->realVars[51] /* dragF.sa variable */,data->simulationInfo->realParameter[42] /* dragF.A PARAM */);
  tmp2 = Greater(data->localData[0]->realVars[51] /* dragF.sa variable */,data->simulationInfo->realParameter[42] /* dragF.A PARAM */);
  tmp4 = Greater(data->localData[0]->realVars[52] /* dragF.v DUMMY_STATE */,data->simulationInfo->realParameter[51] /* dragF.v_small PARAM */);
  tmp5 = Greater(data->localData[0]->realVars[52] /* dragF.v DUMMY_STATE */,0.0);
  data->localData[0]->booleanVars[4] /* dragF.startForward DISCRETE */ = ((((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 0)) && (tmp1 || (data->simulationInfo->booleanVarsPre[4] /* dragF.startForward DISCRETE */ && tmp2))) || ((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) -1)) && tmp4)) || tmp5);
  TRACE_POP
}
/*
equation index: 91
type: SIMPLE_ASSIGN
dragF.startBackward = $PRE.dragF.mode == 0 and (dragF.sa < (-dragF.A) or $PRE.dragF.startBackward and dragF.sa < (-dragF.A)) or $PRE.dragF.mode == 1 and dragF.v < (-dragF.v_small) or dragF.v < 0.0
*/
void Map_based_model_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  tmp1 = Less(data->localData[0]->realVars[51] /* dragF.sa variable */,(-data->simulationInfo->realParameter[42] /* dragF.A PARAM */));
  tmp2 = Less(data->localData[0]->realVars[51] /* dragF.sa variable */,(-data->simulationInfo->realParameter[42] /* dragF.A PARAM */));
  tmp4 = Less(data->localData[0]->realVars[52] /* dragF.v DUMMY_STATE */,(-data->simulationInfo->realParameter[51] /* dragF.v_small PARAM */));
  tmp5 = Less(data->localData[0]->realVars[52] /* dragF.v DUMMY_STATE */,0.0);
  data->localData[0]->booleanVars[3] /* dragF.startBackward DISCRETE */ = ((((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 0)) && (tmp1 || (data->simulationInfo->booleanVarsPre[3] /* dragF.startBackward DISCRETE */ && tmp2))) || ((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 1)) && tmp4)) || tmp5);
  TRACE_POP
}
/*
equation index: 92
type: SIMPLE_ASSIGN
dragF.locked = not ($PRE.dragF.mode == 1 or dragF.startForward or $PRE.dragF.mode == -1 or dragF.startBackward)
*/
void Map_based_model_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  data->localData[0]->booleanVars[2] /* dragF.locked DISCRETE */ = (!((((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 1)) || data->localData[0]->booleanVars[4] /* dragF.startForward DISCRETE */) || (data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) -1))) || data->localData[0]->booleanVars[3] /* dragF.startBackward DISCRETE */));
  TRACE_POP
}

void residualFunc95(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,95};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[51] /* dragF.sa variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Map_based_model_eqFunction_90(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_91(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_92(data, threadData);
  /* body */
  res[0] = (data->localData[0]->booleanVars[2] /* dragF.locked DISCRETE */?0.0:(data->localData[0]->booleanVars[4] /* dragF.startForward DISCRETE */?data->localData[0]->realVars[51] /* dragF.sa variable */ - data->simulationInfo->realParameter[42] /* dragF.A PARAM */:(data->localData[0]->booleanVars[3] /* dragF.startBackward DISCRETE */?data->localData[0]->realVars[51] /* dragF.sa variable */ + data->simulationInfo->realParameter[42] /* dragF.A PARAM */:((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 1))?data->localData[0]->realVars[51] /* dragF.sa variable */ - data->simulationInfo->realParameter[42] /* dragF.A PARAM */:data->localData[0]->realVars[51] /* dragF.sa variable */ + data->simulationInfo->realParameter[42] /* dragF.A PARAM */)))) - data->localData[0]->realVars[47] /* dragF.a_relfric variable */;
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS95(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(unsigned int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(unsigned int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}

OMC_DISABLE_OPT
void initializeStaticDataNLS95(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for dragF.sa */
  sysData->nominal[i] = data->modelData->realVarsData[51].attribute /* dragF.sa */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[51].attribute /* dragF.sa */.min;
  sysData->max[i++]   = data->modelData->realVarsData[51].attribute /* dragF.sa */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS95(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS95(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[51] /* dragF.sa variable */;
}


/* inner equations */

/*
equation index: 228
type: SIMPLE_ASSIGN
dragF.startForward = $PRE.dragF.mode == 0 and (dragF.sa > dragF.A or $PRE.dragF.startForward and dragF.sa > dragF.A) or $PRE.dragF.mode == -1 and dragF.v > dragF.v_small or dragF.v > 0.0
*/
void Map_based_model_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  tmp1 = Greater(data->localData[0]->realVars[51] /* dragF.sa variable */,data->simulationInfo->realParameter[42] /* dragF.A PARAM */);
  tmp2 = Greater(data->localData[0]->realVars[51] /* dragF.sa variable */,data->simulationInfo->realParameter[42] /* dragF.A PARAM */);
  tmp4 = Greater(data->localData[0]->realVars[52] /* dragF.v DUMMY_STATE */,data->simulationInfo->realParameter[51] /* dragF.v_small PARAM */);
  tmp5 = Greater(data->localData[0]->realVars[52] /* dragF.v DUMMY_STATE */,0.0);
  data->localData[0]->booleanVars[4] /* dragF.startForward DISCRETE */ = ((((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 0)) && (tmp1 || (data->simulationInfo->booleanVarsPre[4] /* dragF.startForward DISCRETE */ && tmp2))) || ((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) -1)) && tmp4)) || tmp5);
  TRACE_POP
}
/*
equation index: 229
type: SIMPLE_ASSIGN
dragF.startBackward = $PRE.dragF.mode == 0 and (dragF.sa < (-dragF.A) or $PRE.dragF.startBackward and dragF.sa < (-dragF.A)) or $PRE.dragF.mode == 1 and dragF.v < (-dragF.v_small) or dragF.v < 0.0
*/
void Map_based_model_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  tmp1 = Less(data->localData[0]->realVars[51] /* dragF.sa variable */,(-data->simulationInfo->realParameter[42] /* dragF.A PARAM */));
  tmp2 = Less(data->localData[0]->realVars[51] /* dragF.sa variable */,(-data->simulationInfo->realParameter[42] /* dragF.A PARAM */));
  tmp4 = Less(data->localData[0]->realVars[52] /* dragF.v DUMMY_STATE */,(-data->simulationInfo->realParameter[51] /* dragF.v_small PARAM */));
  tmp5 = Less(data->localData[0]->realVars[52] /* dragF.v DUMMY_STATE */,0.0);
  data->localData[0]->booleanVars[3] /* dragF.startBackward DISCRETE */ = ((((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 0)) && (tmp1 || (data->simulationInfo->booleanVarsPre[3] /* dragF.startBackward DISCRETE */ && tmp2))) || ((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 1)) && tmp4)) || tmp5);
  TRACE_POP
}
/*
equation index: 230
type: SIMPLE_ASSIGN
dragF.locked = not ($PRE.dragF.mode == 1 or dragF.startForward or $PRE.dragF.mode == -1 or dragF.startBackward)
*/
void Map_based_model_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->localData[0]->booleanVars[2] /* dragF.locked DISCRETE */ = (!((((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 1)) || data->localData[0]->booleanVars[4] /* dragF.startForward DISCRETE */) || (data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) -1))) || data->localData[0]->booleanVars[3] /* dragF.startBackward DISCRETE */));
  TRACE_POP
}

void residualFunc233(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,233};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[51] /* dragF.sa variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Map_based_model_eqFunction_228(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_229(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_230(data, threadData);
  /* body */
  res[0] = (data->localData[0]->booleanVars[2] /* dragF.locked DISCRETE */?0.0:(data->localData[0]->booleanVars[4] /* dragF.startForward DISCRETE */?data->localData[0]->realVars[51] /* dragF.sa variable */ - data->simulationInfo->realParameter[42] /* dragF.A PARAM */:(data->localData[0]->booleanVars[3] /* dragF.startBackward DISCRETE */?data->localData[0]->realVars[51] /* dragF.sa variable */ + data->simulationInfo->realParameter[42] /* dragF.A PARAM */:((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 1))?data->localData[0]->realVars[51] /* dragF.sa variable */ - data->simulationInfo->realParameter[42] /* dragF.A PARAM */:data->localData[0]->realVars[51] /* dragF.sa variable */ + data->simulationInfo->realParameter[42] /* dragF.A PARAM */)))) - data->localData[0]->realVars[47] /* dragF.a_relfric variable */;
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS233(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(unsigned int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(unsigned int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}

OMC_DISABLE_OPT
void initializeStaticDataNLS233(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for dragF.sa */
  sysData->nominal[i] = data->modelData->realVarsData[51].attribute /* dragF.sa */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[51].attribute /* dragF.sa */.min;
  sysData->max[i++]   = data->modelData->realVarsData[51].attribute /* dragF.sa */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS233(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS233(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[51] /* dragF.sa variable */;
}


/* inner equations */

/*
equation index: 314
type: SIMPLE_ASSIGN
eleDrive.inertia.a = (eleDrive.toElePow.tau - add.u1) / eleDrive.inertia.J
*/
void Map_based_model_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->localData[0]->realVars[70] /* eleDrive.inertia.a variable */ = DIVISION_SIM(data->localData[0]->realVars[81] /* eleDrive.toElePow.tau variable */ - data->localData[0]->realVars[21] /* add.u1 variable */,data->simulationInfo->realParameter[89] /* eleDrive.inertia.J PARAM */,"eleDrive.inertia.J",equationIndexes);
  TRACE_POP
}
/*
equation index: 315
type: SIMPLE_ASSIGN
wheel.flangeR.tau = gear.ratio * add.u1
*/
void Map_based_model_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->localData[0]->realVars[95] /* wheel.flangeR.tau variable */ = (data->simulationInfo->realParameter[126] /* gear.ratio PARAM */) * (data->localData[0]->realVars[21] /* add.u1 variable */);
  TRACE_POP
}
/*
equation index: 316
type: SIMPLE_ASSIGN
wheel.flangeT.f = (-wheel.flangeR.tau) / wheel.radius
*/
void Map_based_model_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->localData[0]->realVars[96] /* wheel.flangeT.f variable */ = DIVISION_SIM((-data->localData[0]->realVars[95] /* wheel.flangeR.tau variable */),data->simulationInfo->realParameter[138] /* wheel.radius PARAM */,"wheel.radius",equationIndexes);
  TRACE_POP
}
/*
equation index: 317
type: SIMPLE_ASSIGN
add.y = add.k1 * add.u1 + add.k2 * add.u2
*/
void Map_based_model_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->localData[0]->realVars[23] /* add.y variable */ = (data->simulationInfo->realParameter[0] /* add.k1 PARAM */) * (data->localData[0]->realVars[21] /* add.u1 variable */) + (data->simulationInfo->realParameter[1] /* add.k2 PARAM */) * (data->localData[0]->realVars[22] /* add.u2 variable */);
  TRACE_POP
}
/*
equation index: 318
type: SIMPLE_ASSIGN
cutNeg.y = smooth(0, if add.y > cutNeg.uMax then cutNeg.uMax else if add.y < cutNeg.uMin then cutNeg.uMin else add.y)
*/
void Map_based_model_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[23] /* add.y variable */,data->simulationInfo->realParameter[40] /* cutNeg.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[40] /* cutNeg.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[23] /* add.y variable */,data->simulationInfo->realParameter[41] /* cutNeg.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[41] /* cutNeg.uMin PARAM */:data->localData[0]->realVars[23] /* add.y variable */);
  }
  data->localData[0]->realVars[45] /* cutNeg.y variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 319
type: SIMPLE_ASSIGN
brake.f = tqToForce.k * cutNeg.y
*/
void Map_based_model_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->localData[0]->realVars[43] /* brake.f variable */ = (data->simulationInfo->realParameter[129] /* tqToForce.k PARAM */) * (data->localData[0]->realVars[45] /* cutNeg.y variable */);
  TRACE_POP
}
/*
equation index: 320
type: SIMPLE_ASSIGN
$DER.$DER.gear.phi_b = eleDrive.inertia.a / gear.ratio
*/
void Map_based_model_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->localData[0]->realVars[12] /* der(der(gear.phi_b)) DUMMY_DER */ = DIVISION_SIM(data->localData[0]->realVars[70] /* eleDrive.inertia.a variable */,data->simulationInfo->realParameter[126] /* gear.ratio PARAM */,"gear.ratio",equationIndexes);
  TRACE_POP
}
/*
equation index: 321
type: SIMPLE_ASSIGN
dragF.a_relfric = $DER.$DER.gear.phi_b * wheel.radius
*/
void Map_based_model_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->localData[0]->realVars[47] /* dragF.a_relfric variable */ = (data->localData[0]->realVars[12] /* der(der(gear.phi_b)) DUMMY_DER */) * (data->simulationInfo->realParameter[138] /* wheel.radius PARAM */);
  TRACE_POP
}
/*
equation index: 322
type: SIMPLE_ASSIGN
mass.flange_a.f = dragF.f + mass.m * dragF.a_relfric
*/
void Map_based_model_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->localData[0]->realVars[90] /* mass.flange_a.f variable */ = data->localData[0]->realVars[48] /* dragF.f variable */ + (data->simulationInfo->realParameter[128] /* mass.m PARAM */) * (data->localData[0]->realVars[47] /* dragF.a_relfric variable */);
  TRACE_POP
}

void residualFunc334(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,334};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[21] /* add.u1 variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Map_based_model_eqFunction_314(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_315(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_316(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_317(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_318(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_319(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_320(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_321(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_322(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[90] /* mass.flange_a.f variable */ - data->localData[0]->realVars[43] /* brake.f variable */ + data->localData[0]->realVars[96] /* wheel.flangeT.f variable */;
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS334(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(unsigned int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(unsigned int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}

OMC_DISABLE_OPT
void initializeStaticDataNLS334(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for add.u1 */
  sysData->nominal[i] = data->modelData->realVarsData[21].attribute /* add.u1 */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[21].attribute /* add.u1 */.min;
  sysData->max[i++]   = data->modelData->realVarsData[21].attribute /* add.u1 */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS334(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS334(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[21] /* add.u1 variable */;
}


/* inner equations */

/*
equation index: 338
type: SIMPLE_ASSIGN
dragF.startForward = pre(dragF.mode) == 0 and (dragF.sa > dragF.A or pre(dragF.startForward) and dragF.sa > dragF.A) or pre(dragF.mode) == -1 and mass.v > dragF.v_small
*/
void Map_based_model_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp4;
  relationhysteresis(data, &tmp1, data->localData[0]->realVars[51] /* dragF.sa variable */, data->simulationInfo->realParameter[42] /* dragF.A PARAM */, 7, Greater, GreaterZC);
  relationhysteresis(data, &tmp2, data->localData[0]->realVars[51] /* dragF.sa variable */, data->simulationInfo->realParameter[42] /* dragF.A PARAM */, 7, Greater, GreaterZC);
  relationhysteresis(data, &tmp4, data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, data->simulationInfo->realParameter[51] /* dragF.v_small PARAM */, 8, Greater, GreaterZC);
  data->localData[0]->booleanVars[4] /* dragF.startForward DISCRETE */ = (((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 0)) && (tmp1 || (data->simulationInfo->booleanVarsPre[4] /* dragF.startForward DISCRETE */ && tmp2))) || ((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) -1)) && tmp4));
  TRACE_POP
}
/*
equation index: 339
type: SIMPLE_ASSIGN
dragF.startBackward = pre(dragF.mode) == 0 and (dragF.sa < (-dragF.A) or pre(dragF.startBackward) and dragF.sa < (-dragF.A)) or pre(dragF.mode) == 1 and mass.v < (-dragF.v_small)
*/
void Map_based_model_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp4;
  relationhysteresis(data, &tmp1, data->localData[0]->realVars[51] /* dragF.sa variable */, (-data->simulationInfo->realParameter[42] /* dragF.A PARAM */), 5, Less, LessZC);
  relationhysteresis(data, &tmp2, data->localData[0]->realVars[51] /* dragF.sa variable */, (-data->simulationInfo->realParameter[42] /* dragF.A PARAM */), 5, Less, LessZC);
  relationhysteresis(data, &tmp4, data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, (-data->simulationInfo->realParameter[51] /* dragF.v_small PARAM */), 6, Less, LessZC);
  data->localData[0]->booleanVars[3] /* dragF.startBackward DISCRETE */ = (((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 0)) && (tmp1 || (data->simulationInfo->booleanVarsPre[3] /* dragF.startBackward DISCRETE */ && tmp2))) || ((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 1)) && tmp4));
  TRACE_POP
}
/*
equation index: 340
type: SIMPLE_ASSIGN
dragF.locked = not (pre(dragF.mode) == 1 or dragF.startForward or pre(dragF.mode) == -1 or dragF.startBackward)
*/
void Map_based_model_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->localData[0]->booleanVars[2] /* dragF.locked DISCRETE */ = (!((((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 1)) || data->localData[0]->booleanVars[4] /* dragF.startForward DISCRETE */) || (data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) -1))) || data->localData[0]->booleanVars[3] /* dragF.startBackward DISCRETE */));
  TRACE_POP
}

void residualFunc346(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,346};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[51] /* dragF.sa variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Map_based_model_eqFunction_338(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_339(data, threadData);

  /* local constraints */
  Map_based_model_eqFunction_340(data, threadData);
  /* body */
  res[0] = (data->localData[0]->booleanVars[2] /* dragF.locked DISCRETE */?0.0:(data->localData[0]->booleanVars[4] /* dragF.startForward DISCRETE */?data->localData[0]->realVars[51] /* dragF.sa variable */ - data->simulationInfo->realParameter[42] /* dragF.A PARAM */:(data->localData[0]->booleanVars[3] /* dragF.startBackward DISCRETE */?data->localData[0]->realVars[51] /* dragF.sa variable */ + data->simulationInfo->realParameter[42] /* dragF.A PARAM */:((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 1))?data->localData[0]->realVars[51] /* dragF.sa variable */ - data->simulationInfo->realParameter[42] /* dragF.A PARAM */:data->localData[0]->realVars[51] /* dragF.sa variable */ + data->simulationInfo->realParameter[42] /* dragF.A PARAM */)))) - data->localData[0]->realVars[47] /* dragF.a_relfric variable */;
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS346(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(unsigned int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(unsigned int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}

OMC_DISABLE_OPT
void initializeStaticDataNLS346(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for dragF.sa */
  sysData->nominal[i] = data->modelData->realVarsData[51].attribute /* dragF.sa */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[51].attribute /* dragF.sa */.min;
  sysData->max[i++]   = data->modelData->realVarsData[51].attribute /* dragF.sa */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS346(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS346(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[51] /* dragF.sa variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void Map_based_model_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[4].equationIndex = 346;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 1;
  nonLinearSystemData[4].residualFunc = residualFunc346;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = Map_based_model_functionJacNLSJac5_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = Map_based_model_initialAnalyticJacobianNLSJac5;
  nonLinearSystemData[4].jacobianIndex = 5 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS346;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS346;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 334;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc334;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = Map_based_model_functionJacNLSJac4_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = Map_based_model_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[3].jacobianIndex = 4 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS334;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS334;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 233;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc233;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = Map_based_model_functionJacNLSJac3_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = Map_based_model_initialAnalyticJacobianNLSJac3;
  nonLinearSystemData[2].jacobianIndex = 3 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS233;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS233;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 95;
  nonLinearSystemData[1].size = 1;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc95;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = Map_based_model_functionJacNLSJac1_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = Map_based_model_initialAnalyticJacobianNLSJac1;
  nonLinearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS95;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS95;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 61;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 1;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc61;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = Map_based_model_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = Map_based_model_initialAnalyticJacobianNLSJac0;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS61;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS61;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

