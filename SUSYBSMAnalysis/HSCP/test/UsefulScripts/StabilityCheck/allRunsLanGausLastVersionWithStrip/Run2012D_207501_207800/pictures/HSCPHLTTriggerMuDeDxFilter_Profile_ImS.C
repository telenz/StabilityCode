{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:49:49 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMuDeDxFilterdEdxMSProf = new TProfile("HSCPHLTTriggerMuDeDxFilterdEdxMSProf","",3,0,3,"");
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinEntries(1,2489);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinEntries(2,121);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinEntries(3,166);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinContent(1,8552.192);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinContent(2,422.0794);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinContent(3,576.5035);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinError(1,171.8386);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinError(2,38.46399);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinError(3,44.86165);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetEntries(2776);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetStats(0);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetFillColor(1);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetLineStyle(0);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetMarkerStyle(20);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetMarkerSize(0.4);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(1,"207515");
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(2,"207517");
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(3,"207518");
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(8.129955e-316,8.130091e-316,5.999164e-316,8.129955e-316,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("f");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
