{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:48:42 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerHtDeDxFilterdEdxMProf = new TProfile("HSCPHLTTriggerHtDeDxFilterdEdxMProf","",3,0,3,"");
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetBinEntries(1,20);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetBinEntries(3,2);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetBinContent(1,62.32205);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetBinContent(3,6.581379);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetBinError(1,14.00004);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetBinError(3,4.654014);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetEntries(22);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetStats(0);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetFillColor(1);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetLineStyle(0);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetMarkerStyle(20);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetMarkerSize(0.4);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetBinLabel(1,"207515");
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetBinLabel(2,"207517");
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetBinLabel(3,"207518");
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(6.731268e-316,7.291122e-304,2.340403e-310,6.676568e-316,"brNDC");
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
