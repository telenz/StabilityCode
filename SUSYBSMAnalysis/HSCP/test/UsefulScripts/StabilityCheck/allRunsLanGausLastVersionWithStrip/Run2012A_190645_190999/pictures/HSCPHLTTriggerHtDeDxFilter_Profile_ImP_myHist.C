{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:27:45 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerHtDeDxFiltermyHist = new TProfile("HSCPHLTTriggerHtDeDxFiltermyHist","",4,0,4,"");
   HSCPHLTTriggerHtDeDxFiltermyHist->SetBinEntries(3,4);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetBinEntries(4,5);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetBinContent(3,14.28351);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetBinContent(4,19.12322);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetBinError(3,7.156173);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetBinError(4,8.603179);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetEntries(9);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetStats(0);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetFillColor(1);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetLineStyle(0);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetMarkerStyle(20);
   HSCPHLTTriggerHtDeDxFiltermyHist->SetMarkerSize(0.4);
   HSCPHLTTriggerHtDeDxFiltermyHist->GetXaxis()->SetBinLabel(1,"190645");
   HSCPHLTTriggerHtDeDxFiltermyHist->GetXaxis()->SetBinLabel(2,"190704");
   HSCPHLTTriggerHtDeDxFiltermyHist->GetXaxis()->SetBinLabel(3,"190705");
   HSCPHLTTriggerHtDeDxFiltermyHist->GetXaxis()->SetBinLabel(4,"190738");
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
   
   TPaveText *pt = new TPaveText(9.348024e-316,2.335724e-310,9.522986e-316,9.498362e-316,"brNDC");
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
