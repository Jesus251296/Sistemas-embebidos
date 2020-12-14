clc
clear
%% ejercicio1
% ve=[255,255,255,255,255,302,302,302,302,302,302,302,302];
% vf=[241.06,211.84,196.73,200.32,205.35,5.98,10.24,-7.71,-42.42,-37.85,53.03,190.92,281.81];
% promve=mean(ve);
% promvf=mean(vf);
% voltve= (promve*5)/1023;
% voltvf= (promvf*5)/1023;
% rel=20*log(voltvf/voltve)

%% ejercicio2
ve=[467,467,467,467,519,519,519,519,519,519,519,519,519];
vf=[391.48,363.56,370.18,379.49,10.35,17.72,-13.34,-73.42,-65.51,91.78,330.42,487.71,495.62];
promve=mean(ve);
promvf=mean(vf);
voltve= (promve*5)/1023;
voltvf= (promvf*5)/1023;
rel=20*log(voltvf/voltve)