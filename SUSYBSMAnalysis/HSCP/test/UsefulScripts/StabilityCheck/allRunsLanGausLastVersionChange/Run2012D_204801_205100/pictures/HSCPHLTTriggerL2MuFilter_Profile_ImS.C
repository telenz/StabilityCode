{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:22:42 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerL2MuFilterdEdxMSProf = new TProfile("HSCPHLTTriggerL2MuFilterdEdxMSProf","",1,0,1,"");
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetBinEntries(1,7);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetBinContent(1,23.5517);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetBinError(1,8.921848);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetEntries(7);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetStats(0);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetFillColor(1);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetLineStyle(0);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetMarkerStyle(20);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->SetMarkerSize(0.4);
   HSCPHLTTriggerL2MuFilterdEdxMSProf->GetXaxis()->SetBinLabel(1,"205086");
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
   
   TPaveText *pt = new TPaveText(6.831924e-316,6.823587e-316,2.363911e-310,0,"brNDC");
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
