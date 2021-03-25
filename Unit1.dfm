object Form1: TForm1
  Left = 659
  Top = 214
  Width = 248
  Height = 322
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object AusgabeLable: TLabel
    Left = 8
    Top = 8
    Width = 9
    Height = 13
    Caption = '---'
  end
  object WinkelA: TEdit
    Left = 8
    Top = 64
    Width = 105
    Height = 21
    TabOrder = 0
    Text = '0'
    OnChange = WinkelAChange
  end
  object WinkelB: TEdit
    Left = 128
    Top = 64
    Width = 105
    Height = 21
    TabOrder = 1
    Text = '0'
    OnChange = WinkelBChange
  end
  object addWinkel: TButton
    Left = 8
    Top = 96
    Width = 105
    Height = 49
    Caption = 'Addieren'
    TabOrder = 2
    OnClick = addWinkelClick
  end
  object SubBtn: TButton
    Left = 128
    Top = 96
    Width = 105
    Height = 49
    Caption = 'Subtraieren'
    TabOrder = 3
    OnClick = SubBtnClick
  end
end
