{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:20:37 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMetDeDxFilterdEdxMSProf = new TProfile("HSCPHLTTriggerMetDeDxFilterdEdxMSProf","",4,0,4,"");
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetBinEntries(1,2);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetBinEntries(3,127);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetBinEntries(4,86);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetBinContent(1,6.971679);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetBinContent(3,434.1991);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetBinContent(4,294.8569);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetBinError(1,4.943421);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetBinError(3,38.61233);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetBinError(4,31.87589);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetEntries(215);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetStats(0);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetFillColor(1);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetLineStyle(0);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetMarkerStyle(20);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetMarkerSize(0.4);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(1,"190645");
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(2,"190704");
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(3,"190705");
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(4,"190738");
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(1.612012e-314,2.370221e-310,2.370219e-310,1.645408e-314,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("g");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
