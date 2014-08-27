{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:37:53 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMuDeDxFiltermyHist = new TProfile("HSCPHLTTriggerMuDeDxFiltermyHist","",1,0,1,"");
   HSCPHLTTriggerMuDeDxFiltermyHist->SetBinEntries(1,727);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetBinContent(1,2691.673);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetBinError(1,100.7792);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetEntries(727);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetStats(0);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetFillColor(1);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetLineStyle(0);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetMarkerStyle(20);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetMarkerSize(0.4);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetBinLabel(1,"198522");
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerMuDeDxFiltermyHist->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuDeDxFiltermyHist->Draw("E1");
   
   TPaveText *pt = new TPaveText(7.895239e-316,7.291122e-304,2.347421e-310,7.897259e-316,"brNDC");
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
