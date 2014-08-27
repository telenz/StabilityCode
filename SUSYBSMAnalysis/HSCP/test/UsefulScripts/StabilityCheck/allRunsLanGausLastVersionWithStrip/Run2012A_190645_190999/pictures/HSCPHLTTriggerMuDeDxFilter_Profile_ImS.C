{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:28:02 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMuDeDxFilterdEdxMSProf = new TProfile("HSCPHLTTriggerMuDeDxFilterdEdxMSProf","",4,0,4,"");
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinEntries(1,41);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinEntries(3,797);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinEntries(4,736);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinContent(1,145.1095);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinContent(3,2734.437);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinContent(4,2539.17);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinError(1,22.7175);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinError(3,97.0603);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetBinError(4,93.80259);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetEntries(1574);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetStats(0);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetFillColor(1);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetLineStyle(0);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetMarkerStyle(20);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->SetMarkerSize(0.4);
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(1,"190645");
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(2,"190704");
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(3,"190705");
   HSCPHLTTriggerMuDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(4,"190738");
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
   
   TPaveText *pt = new TPaveText(6.5361e-316,8.462314e-316,6.536106e-316,6.536101e-316,"brNDC");
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
