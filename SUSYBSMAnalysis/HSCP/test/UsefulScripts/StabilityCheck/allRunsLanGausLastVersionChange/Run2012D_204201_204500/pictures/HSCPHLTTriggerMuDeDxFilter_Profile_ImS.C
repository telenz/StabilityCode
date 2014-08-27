{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:47:28 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMuDeDxFilterdEdxMSProf = new TProfile("HSCPHLTTriggerMuDeDxFilterdEdxMSProf","",2,0,2,"");
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinEntries(1,103);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinEntries(2,2390);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinContent(1,352.1771);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinContent(2,8179.608);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinError(1,34.77285);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinError(2,167.6962);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetEntries(2493);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetStats(0);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetFillColor(1);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetLineStyle(0);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetMarkerStyle(20);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetMarkerSize(0.4);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(1,"204238");
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(2,"204250");
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
   
   TPaveText *pt = new TPaveText(6.563552e-316,7.291122e-304,2.326725e-310,9.487443e-311,"brNDC");
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
