{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:42:51 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMuFilterdEdxMProf = new TProfile("HSCPHLTTriggerMuFilterdEdxMProf","",2,0,2,"");
   HSCPHLTTriggerMuFilterdEdxMProf->SetBinEntries(1,3103);
   HSCPHLTTriggerMuFilterdEdxMProf->SetBinEntries(2,62708);
   HSCPHLTTriggerMuFilterdEdxMProf->SetBinContent(1,9722.99);
   HSCPHLTTriggerMuFilterdEdxMProf->SetBinContent(2,197537.5);
   HSCPHLTTriggerMuFilterdEdxMProf->SetBinError(1,175.014);
   HSCPHLTTriggerMuFilterdEdxMProf->SetBinError(2,791.1795);
   HSCPHLTTriggerMuFilterdEdxMProf->SetEntries(65811);
   HSCPHLTTriggerMuFilterdEdxMProf->SetStats(0);
   HSCPHLTTriggerMuFilterdEdxMProf->SetFillColor(1);
   HSCPHLTTriggerMuFilterdEdxMProf->SetLineStyle(0);
   HSCPHLTTriggerMuFilterdEdxMProf->SetMarkerStyle(20);
   HSCPHLTTriggerMuFilterdEdxMProf->SetMarkerSize(0.4);
   HSCPHLTTriggerMuFilterdEdxMProf->GetXaxis()->SetBinLabel(1,"204238");
   HSCPHLTTriggerMuFilterdEdxMProf->GetXaxis()->SetBinLabel(2,"204250");
   HSCPHLTTriggerMuFilterdEdxMProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerMuFilterdEdxMProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerMuFilterdEdxMProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuFilterdEdxMProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuFilterdEdxMProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerMuFilterdEdxMProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuFilterdEdxMProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerMuFilterdEdxMProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuFilterdEdxMProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuFilterdEdxMProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuFilterdEdxMProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerMuFilterdEdxMProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuFilterdEdxMProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuFilterdEdxMProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuFilterdEdxMProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuFilterdEdxMProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuFilterdEdxMProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(6.789401e-316,6.789097e-316,2.326725e-310,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
