{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:37:43 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMuDeDxFilterdEdxMPProf = new TProfile("HSCPHLTTriggerMuDeDxFilterdEdxMPProf","",1,0,1,"");
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->SetBinEntries(1,694);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->SetBinContent(1,2545.915);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->SetBinError(1,97.55255);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->SetEntries(694);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->SetStats(0);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->SetFillColor(1);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->SetLineStyle(0);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->SetMarkerStyle(20);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->SetMarkerSize(0.4);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetXaxis()->SetBinLabel(1,"198522");
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuDeDxFilterdEdxMPProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(7.966102e-316,7.895344e-316,7.717823e-316,7.966103e-316,"brNDC");
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
