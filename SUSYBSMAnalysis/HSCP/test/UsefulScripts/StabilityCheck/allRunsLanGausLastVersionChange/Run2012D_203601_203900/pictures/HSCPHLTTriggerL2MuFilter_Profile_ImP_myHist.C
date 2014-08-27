{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:34:46 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerL2MuFiltermyHist = new TProfile("HSCPHLTTriggerL2MuFiltermyHist","",1,0,1,"");
   HSCPHLTTriggerL2MuFiltermyHist->SetBinEntries(1,1352);
   HSCPHLTTriggerL2MuFiltermyHist->SetBinContent(1,4752.853);
   HSCPHLTTriggerL2MuFiltermyHist->SetBinError(1,130.5756);
   HSCPHLTTriggerL2MuFiltermyHist->SetEntries(1352);
   HSCPHLTTriggerL2MuFiltermyHist->SetStats(0);
   HSCPHLTTriggerL2MuFiltermyHist->SetFillColor(1);
   HSCPHLTTriggerL2MuFiltermyHist->SetLineStyle(0);
   HSCPHLTTriggerL2MuFiltermyHist->SetMarkerStyle(20);
   HSCPHLTTriggerL2MuFiltermyHist->SetMarkerSize(0.4);
   HSCPHLTTriggerL2MuFiltermyHist->GetXaxis()->SetBinLabel(1,"203894");
   HSCPHLTTriggerL2MuFiltermyHist->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerL2MuFiltermyHist->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerL2MuFiltermyHist->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerL2MuFiltermyHist->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerL2MuFiltermyHist->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerL2MuFiltermyHist->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerL2MuFiltermyHist->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerL2MuFiltermyHist->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerL2MuFiltermyHist->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerL2MuFiltermyHist->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerL2MuFiltermyHist->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerL2MuFiltermyHist->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerL2MuFiltermyHist->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerL2MuFiltermyHist->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerL2MuFiltermyHist->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerL2MuFiltermyHist->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerL2MuFiltermyHist->Draw("E1");
   
   TPaveText *pt = new TPaveText(6.804358e-316,6.804312e-316,2.344315e-310,7.149302e-316,"brNDC");
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
