{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:47:44 2014) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptTitle(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.07);
   c1->SetRightMargin(0.03);
   c1->SetTopMargin(0.06);
   c1->SetBottomMargin(0.15);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
   
   TProfile *HSCPHLTTriggerL2MuFilterdEdxMSProf = new TProfile("HSCPHLTTriggerL2MuFilterdEdxMSProf","",3,0,3,"");
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetBinEntries(1,2441);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetBinEntries(2,67);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetBinEntries(3,82);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetBinContent(1,8078.035);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetBinContent(2,223.7688);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetBinContent(3,271.5724);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetBinError(1,163.8153);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetBinError(2,27.39364);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetBinError(3,30.04574);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetEntries(2590);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetStats(0);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetFillColor(1);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetLineStyle(0);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetMarkerStyle(20);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetMarkerSize(0.4);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetXaxis()->SetBinLabel(1,"207515");
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetXaxis()->SetBinLabel(2,"207517");
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetXaxis()->SetBinLabel(3,"207518");
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(6.262486e-316,2.340405e-310,6.731352e-316,6.011021e-316,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("d");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
