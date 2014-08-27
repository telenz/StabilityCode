{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:24:58 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMuFiltermyHist = new TProfile("HSCPHLTTriggerMuFiltermyHist","",3,0,3,"");
   HSCPHLTTriggerMuFiltermyHist->SetBinEntries(1,73500);
   HSCPHLTTriggerMuFiltermyHist->SetBinEntries(2,2841);
   HSCPHLTTriggerMuFiltermyHist->SetBinEntries(3,4149);
   HSCPHLTTriggerMuFiltermyHist->SetBinContent(1,257453.7);
   HSCPHLTTriggerMuFiltermyHist->SetBinContent(2,10053.53);
   HSCPHLTTriggerMuFiltermyHist->SetBinContent(3,14612);
   HSCPHLTTriggerMuFiltermyHist->SetBinError(1,957.9538);
   HSCPHLTTriggerMuFiltermyHist->SetBinError(2,190.4226);
   HSCPHLTTriggerMuFiltermyHist->SetBinError(3,228.9393);
   HSCPHLTTriggerMuFiltermyHist->SetEntries(80490);
   HSCPHLTTriggerMuFiltermyHist->SetStats(0);
   HSCPHLTTriggerMuFiltermyHist->SetFillColor(1);
   HSCPHLTTriggerMuFiltermyHist->SetLineStyle(0);
   HSCPHLTTriggerMuFiltermyHist->SetMarkerStyle(20);
   HSCPHLTTriggerMuFiltermyHist->SetMarkerSize(0.4);
   HSCPHLTTriggerMuFiltermyHist->GetXaxis()->SetBinLabel(1,"207515");
   HSCPHLTTriggerMuFiltermyHist->GetXaxis()->SetBinLabel(2,"207517");
   HSCPHLTTriggerMuFiltermyHist->GetXaxis()->SetBinLabel(3,"207518");
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
   
   TPaveText *pt = new TPaveText(2.321584e-310,6.129361e-316,2.371515e-322,2.371515e-322,"brNDC");
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
