   M S B A M L   `   `   `  ����?  ;Lab4, Version=0.0.0.0, Culture=neutral, PublicKeyToken=nullclr-namespace:Lab4Lab4  5   	       Lab4.MainWindow   5   	   R NWindowsBase, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35W SPresentationCore, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35D 9http://schemas.microsoft.com/winfx/2006/xaml/presentation    5   	   R NSystem.Xaml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   $localclr-namespace:Lab4     5   	   _ [MaterialDesignThemes.Wpf, Version=4.7.1.0, Culture=neutral, PublicKeyToken=df2a72020bd7962aFmaterialDesign1http://materialdesigninxaml.net/winfx/xaml/themes  5   	     � WindowStartupLocation$  CenterScreen=�5	   	    � Title$ 
MainWindow��5
   	   $	��292��6   $	��650��6)    � Icon$ 	/link.cur��65   .��5   	   � $��10q�6      Main-Back-Grid#���   6    � RowDefinitions 5   
   �� 5      $	��100 �6   �� 5      $
��Auto �6   �� 5       � ColumnDefinitions 5   
   �� 5      $��* �6   �� 5      $��* �6   .+�5   
   �� $��	/Logo.png��6   $��0��6#   $��0��63   $��2��6@   $��10q�6T   $��60��6`   �� 5   
   -   5        $��1��5      $��0��5        Button-Look-Prods#���  5        
Nav-Button#���  5      �� 5    
   -   5        $��1��5       $��1��5!        
Button-Add#���  5"      #���  5$      ]� 5&   
   $��2��6   $��0��6!   $��2��61   .+�5'      �� -   5        $��0q�5(       � Cursor$ IBeam��5*        Main-Lan-But#���  5+      .��5-      �� $��/ru.jpg��6   $��7q�5.      $
��Left=�5/      $��20��50      51      �� 52      -   5        $��0q�53      $
��Left=�54      $ IBeam��56      #���  57      .��59      �� $��/en.jpg��6   $��7q�5:      $
��Left=�5;      $��20��5<      5=      �� 5>      -   5        $��0q�5?      $
��Left=�5@      $ IBeam��5B      #���  5C      .��5E      �� $��/by.jpg��6   $��7q�5F      $
��Left=�5G      $��20��5H      5I      �� 5J      -   5        $��0q�5K      $
��Left=�5L      $ IBeam��5N      #���  5O      .��5Q      �� $��
/China.jpg��6   $��7q�5R      $
��Left=�5S      $��20��5T      5U      �� 5W      -   5         ��Name$ Themes��5W      $��24��5X      $	��102��5Y        Theme-Block#���  5Z      .@�5^      �� $��Center=�6   
 J� Uid$ White��5_      .��5`      ��   Theme-White#���  6      Theme-Text-Block#���  5a       $ White��5b       $��Center=�5c       $��25��6;   5d      �� 5e      $��Center=�6   $
 Dark��5f      .��5g      ��   
Theme-Dark#���  6    #���  5h       $
 Dark��5i       $��Center=�5j       5k      �� 5l      $��Center=�6   $ Sweet��5m       .��5n      ��  	 Theme-Sweet#��� 	 6    #���  5o       $ Sweet��5p       $��Center=�5q       5r      5s      5t      5u      5w      