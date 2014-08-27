{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:54:52 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerHtDeDxFilterdEdxMPProf = new TProfile("HSCPHLTTriggerHtDeDxFilterdEdxMPProf","",5,0,5,"");
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->SetBinEntries(1,1);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->SetBinEntries(4,4);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->SetBinContent(1,2.957058);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->SetBinContent(4,13.31025);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->SetBinError(1,2.957058);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->SetBinError(4,6.774607);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->SetEntries(5);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->SetStats(0);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->SetFillColor(1);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->SetLineStyle(0);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->SetMarkerStyle(20);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->SetMarkerSize(0.4);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetXaxis()->SetBinLabel(1,"193834");
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetXaxis()->SetBinLabel(2,"193835");
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetXaxis()->SetBinLabel(3,"193836");
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetXaxis()->SetBinLabel(4,"193998");
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetXaxis()->SetBinLabel(5,"193999");
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMPProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(9.525974e-316,7.291122e-304,2.355455e-310,5.329598e-316,"brNDC");
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
