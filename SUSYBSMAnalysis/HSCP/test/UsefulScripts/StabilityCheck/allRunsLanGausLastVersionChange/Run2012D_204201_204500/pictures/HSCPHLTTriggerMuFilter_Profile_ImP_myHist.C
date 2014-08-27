{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:43:07 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMuFiltermyHist = new TProfile("HSCPHLTTriggerMuFiltermyHist","",2,0,2,"");
   HSCPHLTTriggerMuFiltermyHist->SetBinEntries(1,2346);
   HSCPHLTTriggerMuFiltermyHist->SetBinEntries(2,46714);
   HSCPHLTTriggerMuFiltermyHist->SetBinContent(1,8193.94);
   HSCPHLTTriggerMuFiltermyHist->SetBinContent(2,163547.9);
   HSCPHLTTriggerMuFiltermyHist->SetBinError(1,170.5686);
   HSCPHLTTriggerMuFiltermyHist->SetBinError(2,763.1722);
   HSCPHLTTriggerMuFiltermyHist->SetEntries(49060);
   HSCPHLTTriggerMuFiltermyHist->SetStats(0);
   HSCPHLTTriggerMuFiltermyHist->SetFillColor(1);
   HSCPHLTTriggerMuFiltermyHist->SetLineStyle(0);
   HSCPHLTTriggerMuFiltermyHist->SetMarkerStyle(20);
   HSCPHLTTriggerMuFiltermyHist->SetMarkerSize(0.4);
   HSCPHLTTriggerMuFiltermyHist->GetXaxis()->SetBinLabel(1,"204238");
   HSCPHLTTriggerMuFiltermyHist->GetXaxis()->SetBinLabel(2,"204250");
   HSCPHLTTriggerMuFiltermyHist->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerMuFiltermyHist->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerMuFiltermyHist->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuFiltermyHist->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuFiltermyHist->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerMuFiltermyHist->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuFiltermyHist->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerMuFiltermyHist->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuFiltermyHist->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuFiltermyHist->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuFiltermyHist->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerMuFiltermyHist->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuFiltermyHist->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuFiltermyHist->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuFiltermyHist->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuFiltermyHist->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuFiltermyHist->Draw("E1");
   
   TPaveText *pt = new TPaveText(8.40496e-316,2.326726e-310,6.777358e-316,8.404963e-316,"brNDC");
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
