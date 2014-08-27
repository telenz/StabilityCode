{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:20:01 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMuFilterdEdxMSProf = new TProfile("HSCPHLTTriggerMuFilterdEdxMSProf","",1,0,1,"");
   HSCPHLTTriggerMuFilterdEdxMSProf->SetBinEntries(1,349);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetBinContent(1,1154.809);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetBinError(1,61.92798);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetEntries(349);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetStats(0);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetFillColor(1);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetLineStyle(0);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetMarkerStyle(20);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetMarkerSize(0.4);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetXaxis()->SetBinLabel(1,"205086");
   HSCPHLTTriggerMuFilterdEdxMSProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerMuFilterdEdxMSProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuFilterdEdxMSProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(6.762891e-316,6.762887e-316,6.784875e-316,6.762892e-316,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("b");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
