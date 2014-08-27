{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:28:00 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMuDeDxFilterdEdxMProf = new TProfile("HSCPHLTTriggerMuDeDxFilterdEdxMProf","",4,0,4,"");
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->SetBinEntries(1,41);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->SetBinEntries(3,797);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->SetBinEntries(4,736);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->SetBinContent(1,142.7264);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->SetBinContent(3,2697.835);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->SetBinContent(4,2501.627);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->SetBinError(1,22.37754);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->SetBinError(3,95.81428);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->SetBinError(4,92.51515);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->SetEntries(1574);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->SetStats(0);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->SetFillColor(1);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->SetLineStyle(0);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->SetMarkerStyle(20);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->SetMarkerSize(0.4);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetXaxis()->SetBinLabel(1,"190645");
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetXaxis()->SetBinLabel(2,"190704");
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetXaxis()->SetBinLabel(3,"190705");
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetXaxis()->SetBinLabel(4,"190738");
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(6.813213e-316,8.440814e-316,8.44085e-316,9.536977e-316,"brNDC");
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
