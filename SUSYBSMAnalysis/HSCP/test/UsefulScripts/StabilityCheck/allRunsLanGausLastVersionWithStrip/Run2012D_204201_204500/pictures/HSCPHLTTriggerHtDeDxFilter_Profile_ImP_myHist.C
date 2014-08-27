{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:43:12 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerHtDeDxFiltermyHist = new TProfile("HSCPHLTTriggerHtDeDxFiltermyHist","",2,0,2,"");
   HSCPHLTTriggerHtDeDxFiltermyHist->SetBinEntries(1,2);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetBinEntries(2,15);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetBinContent(1,6.271897);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetBinContent(2,55.3202);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetBinError(1,4.43594);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetBinError(2,14.37469);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetEntries(17);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetStats(0);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetFillColor(1);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetLineStyle(0);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetMarkerStyle(20);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetMarkerSize(0.4);
   HSCPHLTTriggerHtDeDxFiltermyHist->GetXaxis()->SetBinLabel(1,"204238");
   HSCPHLTTriggerHtDeDxFiltermyHist->GetXaxis()->SetBinLabel(2,"204250");
   HSCPHLTTriggerHtDeDxFiltermyHist->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerHtDeDxFiltermyHist->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerHtDeDxFiltermyHist->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerHtDeDxFiltermyHist->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerHtDeDxFiltermyHist->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerHtDeDxFiltermyHist->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerHtDeDxFiltermyHist->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerHtDeDxFiltermyHist->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerHtDeDxFiltermyHist->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerHtDeDxFiltermyHist->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerHtDeDxFiltermyHist->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerHtDeDxFiltermyHist->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerHtDeDxFiltermyHist->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerHtDeDxFiltermyHist->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerHtDeDxFiltermyHist->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerHtDeDxFiltermyHist->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerHtDeDxFiltermyHist->Draw("E1");
   
   TPaveText *pt = new TPaveText(6.839695e-316,7.291122e-304,2.35214e-310,2.779814e-312,"brNDC");
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
