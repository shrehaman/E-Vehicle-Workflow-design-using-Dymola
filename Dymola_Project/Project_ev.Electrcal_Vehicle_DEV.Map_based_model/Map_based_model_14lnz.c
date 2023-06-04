/* Linearization */
#include "Map_based_model_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *Map_based_model_linear_model_frame()
{
  return "model linearized_model \"Map_based_model\" \n  parameter Integer n = 6 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[m] = %s;\n"
  "\n"
  "  parameter Real A[n, n] =\n\t[%s];\n\n"
  "  parameter Real B[n, m] = zeros(n, m);%s\n\n"
  "  parameter Real C[p, n] = zeros(p, n);%s\n\n"
  "  parameter Real D[p, m] = zeros(p, m);%s\n\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[m];\n"
  "  output Real y[p];\n"
  "\n"
  "  Real 'x_batt1.C1.v' = x[1];\n""  Real 'x_batt1.cBattery.v' = x[2];\n""  Real 'x_batt1.cDummy.v' = x[3];\n""  Real 'x_eleDrive.constPDC.integrator1.y' = x[4];\n""  Real 'x_mass.s' = x[5];\n""  Real 'x_mass.v' = x[6];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linearized_model;\n";
}
const char *Map_based_model_linear_model_datarecovery_frame()
{
  return "model linearized_model \"Map_based_model\" \n parameter Integer n = 6 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n  parameter Integer nz = 85 \"data recovery variables\";\n"
  "  parameter Real x0[6] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[85] = %s;\n"
  "\n"
  "  parameter Real A[n, n] =\n\t[%s];\n\n"
  "  parameter Real B[n, m] = zeros(n, m);%s\n\n"
  "  parameter Real C[p, n] = zeros(p, n);%s\n\n"
  "  parameter Real D[p, m] = zeros(p, m);%s\n\n"
  "  parameter Real Cz[nz, n] =\n\t[%s];\n\n"
  "  parameter Real Dz[nz, m] = zeros(nz, m);%s\n\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[m];\n"
  "  output Real y[p];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'x_batt1.C1.v' = x[1];\n""  Real 'x_batt1.cBattery.v' = x[2];\n""  Real 'x_batt1.cDummy.v' = x[3];\n""  Real 'x_eleDrive.constPDC.integrator1.y' = x[4];\n""  Real 'x_mass.s' = x[5];\n""  Real 'x_mass.v' = x[6];\n"
  "  Real 'z_der(der(gear.phi_b))' = z[1];\n""  Real 'z_der(der(pP1.flange_a.s))' = z[2];\n""  Real 'z_der(dragF.s)' = z[3];\n""  Real 'z_der(dragF.v)' = z[4];\n""  Real 'z_der(eleDrive.inertia.w)' = z[5];\n""  Real 'z_der(eleDrive.wSensor.flange.phi)' = z[6];\n""  Real 'z_der(gear.phi_b)' = z[7];\n""  Real 'z_der(pP1.flange_a.s)' = z[8];\n""  Real 'z_$cse1' = z[9];\n""  Real 'z_add.u1' = z[10];\n""  Real 'z_add.u2' = z[11];\n""  Real 'z_add.y' = z[12];\n""  Real 'z_batt1.C1.i' = z[13];\n""  Real 'z_batt1.ECell' = z[14];\n""  Real 'z_batt1.Ip.i' = z[15];\n""  Real 'z_batt1.Ip.v' = z[16];\n""  Real 'z_batt1.R0.LossPower' = z[17];\n""  Real 'z_batt1.R0.R_actual' = z[18];\n""  Real 'z_batt1.R0.i' = z[19];\n""  Real 'z_batt1.R0.v' = z[20];\n""  Real 'z_batt1.R1.LossPower' = z[21];\n""  Real 'z_batt1.R1.R_actual' = z[22];\n""  Real 'z_batt1.R1.i' = z[23];\n""  Real 'z_batt1.R1.v' = z[24];\n""  Real 'z_batt1.SOC' = z[25];\n""  Real 'z_batt1.abs1.u' = z[26];\n""  Real 'z_batt1.cBattery.i' = z[27];\n""  Real 'z_batt1.cDummy.i' = z[28];\n""  Real 'z_batt1.iCellStray' = z[29];\n""  Real 'z_batt1.n.i' = z[30];\n""  Real 'z_batt1.powerLoss' = z[31];\n""  Real 'z_brake.f' = z[32];\n""  Real 'z_brake.s_support' = z[33];\n""  Real 'z_cutNeg.y' = z[34];\n""  Real 'z_dragF.Sign' = z[35];\n""  Real 'z_dragF.a_relfric' = z[36];\n""  Real 'z_dragF.f' = z[37];\n""  Real 'z_dragF.s' = z[38];\n""  Real 'z_dragF.s_support' = z[39];\n""  Real 'z_dragF.sa' = z[40];\n""  Real 'z_dragF.v' = z[41];\n""  Real 'z_driver.accelTau' = z[42];\n""  Real 'z_driver.brakeTau' = z[43];\n""  Real 'z_driver.driveCyc.timeScaled' = z[44];\n""  Real 'z_driver.driveCyc.y[1]' = z[45];\n""  Real 'z_driver.feedback.u1' = z[46];\n""  Real 'z_driver.feedback.y' = z[47];\n""  Real 'z_driver.gain.y' = z[48];\n""  Real 'z_eleDrive.constPDC.Pref' = z[49];\n""  Real 'z_eleDrive.constPDC.feedback1.u2' = z[50];\n""  Real 'z_eleDrive.constPDC.feedback1.y' = z[51];\n""  Real 'z_eleDrive.constPDC.integrator1.local_set' = z[52];\n""  Real 'z_eleDrive.constPDC.pSensor.voltageSensor.n.i' = z[53];\n""  Real 'z_eleDrive.constPDC.pSensor.voltageSensor.p.i' = z[54];\n""  Real 'z_eleDrive.constPDC.varCond.G_actual' = z[55];\n""  Real 'z_eleDrive.constPDC.varCond.LossPower' = z[56];\n""  Real 'z_eleDrive.constPDC.varCond.i' = z[57];\n""  Real 'z_eleDrive.gain.u' = z[58];\n""  Real 'z_eleDrive.inertia.a' = z[59];\n""  Real 'z_eleDrive.inertia.w' = z[60];\n""  Real 'z_eleDrive.limTau.yH' = z[61];\n""  Real 'z_eleDrive.limTau.yL' = z[62];\n""  Real 'z_eleDrive.powSensor.power' = z[63];\n""  Real 'z_eleDrive.toElePow.PMOT.y' = z[64];\n""  Real 'z_eleDrive.toElePow.abs1.y' = z[65];\n""  Real 'z_eleDrive.toElePow.abs2.y' = z[66];\n""  Real 'z_eleDrive.toElePow.applyEta.eta' = z[67];\n""  Real 'z_eleDrive.toElePow.effTable_.u1' = z[68];\n""  Real 'z_eleDrive.toElePow.effTable_.u2' = z[69];\n""  Real 'z_eleDrive.toElePow.tau' = z[70];\n""  Real 'z_eleDrive.torque.phi_support' = z[71];\n""  Real 'z_eleDrive.wSensor.flange.phi' = z[72];\n""  Real 'z_eleDrive.wSensor.flange.tau' = z[73];\n""  Real 'z_gear.phi_b' = z[74];\n""  Real 'z_gear.phi_support' = z[75];\n""  Real 'z_ground.p.i' = z[76];\n""  Real 'z_ground.p.v' = z[77];\n""  Real 'z_mass.a' = z[78];\n""  Real 'z_mass.flange_a.f' = z[79];\n""  Real 'z_pP1.flange_a.s' = z[80];\n""  Real 'z_pP1.power' = z[81];\n""  Real 'z_pP2.power' = z[82];\n""  Real 'z_velSens.flange.f' = z[83];\n""  Real 'z_wheel.flangeR.tau' = z[84];\n""  Real 'z_wheel.flangeT.f' = z[85];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linearized_model;\n";
}
#if defined(__cplusplus)
}
#endif

