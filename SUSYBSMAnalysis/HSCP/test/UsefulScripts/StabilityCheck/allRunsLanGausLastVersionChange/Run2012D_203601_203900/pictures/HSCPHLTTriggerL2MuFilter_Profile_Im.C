{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:34:18 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerL2MuFilterdEdxMProf = new TProfile("HSCPHLTTriggerL2MuFilterdEdxMProf","",1,0,1,"");
   HSCPHLTTriggerL2MuFilterdEdxMProf->SetBinEntries(1,1731);
   HSCPHLTTriggerL2MuFilterdEdxMProf->SetBinContent(1,5494.777);
   HSCPHLTTriggerL2MuFilterdEdxMProf->SetBinError(1,132.4707);
   HSCPHLTTriggerL2MuFilterdEdxMProf->SetEntries(1731);
   HSCPHLTTriggerL2MuFilterdEdxMProf->SetStats(0);
   HSCPHLTTriggerL2MuFilterdEdxMProf->SetFillColor(1);
   HSCPHLTTriggerL2MuFilterdEdxMProf->SetLineStyle(0);
   HSCPHLTTriggerL2MuFilterdEdxMProf->SetMarkerStyle(20);
   HSCPHLTTriggerL2MuFilterdEdxMProf->SetMarkerSize(0.4);
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetXaxis()->SetBinLabel(1,"203894");
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerL2MuFilterdEdxMProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerL2MuFilterdEdxMProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(8.941781e-316,7.122187e-316,2.344315e-310,8.836253e-316,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
