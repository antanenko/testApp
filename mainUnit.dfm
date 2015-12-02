object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 259
  ClientWidth = 518
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 88
    Top = 40
    Width = 31
    Height = 13
    Caption = 'Label1'
  end
  object Button1: TButton
    Left = 40
    Top = 88
    Width = 75
    Height = 25
    Caption = 'Start'
    DoubleBuffered = False
    ParentDoubleBuffered = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 160
    Top = 88
    Width = 75
    Height = 25
    Caption = 'Pause'
    TabOrder = 1
    OnClick = Button2Click
  end
  object ProgressBar1: TProgressBar
    Left = 34
    Top = 144
    Width = 201
    Height = 17
    MarqueeInterval = 1
    Step = 1
    TabOrder = 2
  end
  object Button3: TButton
    Left = 34
    Top = 200
    Width = 75
    Height = 25
    Caption = 'Connect'
    TabOrder = 3
    OnClick = Button3Click
  end
  object Memo1: TMemo
    Left = 296
    Top = 0
    Width = 225
    Height = 257
    Lines.Strings = (
      'Memo1')
    TabOrder = 4
  end
  object Button4: TButton
    Left = 144
    Top = 200
    Width = 75
    Height = 25
    Caption = 'Send'
    TabOrder = 5
    OnClick = Button4Click
  end
  object TcpClient1: TTcpClient
    RemoteHost = '192.168.0.238'
    RemotePort = '23'
    OnReceive = TcpClient1Receive
    Left = 240
    Top = 32
  end
end
