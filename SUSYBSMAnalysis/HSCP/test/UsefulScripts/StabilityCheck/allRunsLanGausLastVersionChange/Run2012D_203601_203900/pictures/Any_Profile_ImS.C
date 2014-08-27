{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:29:58 2014) by ROOT version5.32/00
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
   
   TProfile *AnydEdxMSProf = new TProfile("AnydEdxMSProf","",1,0,1,"");
   AnydEdxMSProf->SetBinEntries(1,89287);
   AnydEdxMSProf->SetBinContent(1,296160.8);
   AnydEdxMSProf->SetBinError(1,992.9776);
   AnydEdxMSProf->SetEntries(89287);
   AnydEdxMSProf->SetStats(0);
   AnydEdxMSProf->SetFillColor(1);
   AnydEdxMSProf->SetLineStyle(0);
   AnydEdxMSProf->SetMarkerStyle(20);
   AnydEdxMSProf->SetMarkerSize(0.4);
   AnydEdxMSProf->GetXaxis()->SetBinLabel(1,"203894");
   AnydEdxMSProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   AnydEdxMSProf->GetXaxis()->SetNdivisions(505);
   AnydEdxMSProf->GetXaxis()->SetLabelFont(42);
   AnydEdxMSProf->GetXaxis()->SetLabelOffset(0.007);
   AnydEdxMSProf->GetXaxis()->SetTitleOffset(1.1);
   AnydEdxMSProf->GetXaxis()->SetTitleFont(42);
   AnydEdxMSProf->GetYaxis()->SetTitle("dE/dx estimator");
   AnydEdxMSProf->GetYaxis()->SetLabelFont(42);
   AnydEdxMSProf->GetYaxis()->SetLabelOffset(0.007);
   AnydEdxMSProf->GetYaxis()->SetLabelSize(0.05);
   AnydEdxMSProf->GetYaxis()->SetTitleOffset(0.9);
   AnydEdxMSProf->GetYaxis()->SetTitleFont(42);
   AnydEdxMSProf->GetZaxis()->SetLabelFont(42);
   AnydEdxMSProf->GetZaxis()->SetLabelOffset(0.007);
   AnydEdxMSProf->GetZaxis()->SetLabelSize(0.05);
   AnydEdxMSProf->GetZaxis()->SetTitleFont(42);
   AnydEdxMSProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(9.064446e-316,6.798592e-316,0,4.792437e-322,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("O");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
