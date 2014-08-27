{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:30:08 2014) by ROOT version5.32/00
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
   
   TProfile *AnydEdxMPProf = new TProfile("AnydEdxMPProf","",1,0,1,"");
   AnydEdxMPProf->SetBinEntries(1,76556);
   AnydEdxMPProf->SetBinContent(1,230638);
   AnydEdxMPProf->SetBinError(1,844.8317);
   AnydEdxMPProf->SetEntries(76556);
   AnydEdxMPProf->SetStats(0);
   AnydEdxMPProf->SetFillColor(1);
   AnydEdxMPProf->SetLineStyle(0);
   AnydEdxMPProf->SetMarkerStyle(20);
   AnydEdxMPProf->SetMarkerSize(0.4);
   AnydEdxMPProf->GetXaxis()->SetBinLabel(1,"203894");
   AnydEdxMPProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   AnydEdxMPProf->GetXaxis()->SetNdivisions(505);
   AnydEdxMPProf->GetXaxis()->SetLabelFont(42);
   AnydEdxMPProf->GetXaxis()->SetLabelOffset(0.007);
   AnydEdxMPProf->GetXaxis()->SetTitleOffset(1.1);
   AnydEdxMPProf->GetXaxis()->SetTitleFont(42);
   AnydEdxMPProf->GetYaxis()->SetTitle("dE/dx estimator");
   AnydEdxMPProf->GetYaxis()->SetLabelFont(42);
   AnydEdxMPProf->GetYaxis()->SetLabelOffset(0.007);
   AnydEdxMPProf->GetYaxis()->SetLabelSize(0.05);
   AnydEdxMPProf->GetYaxis()->SetTitleOffset(0.9);
   AnydEdxMPProf->GetYaxis()->SetTitleFont(42);
   AnydEdxMPProf->GetZaxis()->SetLabelFont(42);
   AnydEdxMPProf->GetZaxis()->SetLabelOffset(0.007);
   AnydEdxMPProf->GetZaxis()->SetLabelSize(0.05);
   AnydEdxMPProf->GetZaxis()->SetTitleFont(42);
   AnydEdxMPProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(5.704844e-316,2.344316e-310,2.344315e-310,8.943104e-316,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("P");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
