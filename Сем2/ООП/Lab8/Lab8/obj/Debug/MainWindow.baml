   M S B A M L   `   `   `  ����?  ;Lab8, Version=1.0.0.0, Culture=neutral, PublicKeyToken=nullclr-namespace:Lab8Lab8  5   	       Lab8.MainWindow   5   	   R NWindowsBase, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35W SPresentationCore, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35D 9http://schemas.microsoft.com/winfx/2006/xaml/presentation    5   	   R NSystem.Xaml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   $localclr-namespace:Lab8     5   	     � WindowStartupLocation$  CenterScreen=�5   	    � Title$ 
MainWindow��5	   	   $	��500��5
   	   .��5      �  � ColumnDefinitions 5   
   �� 5      $	��40* �6   �� 5      $	��60* �6   .+�5   
   �� $��0��6   .+�5      �� -   5        $��	ShowTable��5      $��
Книги��5      $	��200��5      $��Center=�5      
�������$��10q�5      �� 5      -   5        $��	AddRecord��5      $#��Добавить запись��5      $	��250��5      5!      &   System.Windows.Controls.DataGrid  5#   
   -   5        $��
BooksTable��5#      $��1��5$         AutoGenerateColumns .     CanUserAddRows .     CanUserResizeColumns .     CanUserDeleteRows .     Columns 5*      0  *System.Windows.Controls.DataGridTextColumn  5+      ,  &System.Windows.Controls.DataGridColumn   Header$ Book Id��6%   	   Width5  /System.Windows.Controls.DataGridLengthConverter$		 25* 5-   %   
   
IsReadOnly
 . 1  +System.Windows.Controls.DataGridBoundColumn   Binding 5,   %   �� *Id+5.   %     50      $ Title��6%   $		 25* 52   %   
 .  51   %   �� *Title+53   %     55      $ 	Author Id��6%   $		 25* 57   %   
 .  56   %   �� *
AuthorId+58   %   4  .System.Windows.Controls.DataGridTemplateColumn  5:      $ Image��6)   $		 200 5;   )      CellTemplate 5<      �� 5=      .R�5>      �� $	��200��5?   $   $	��200��5@   $   ��5>   $   �� *Src+5@   $   5A      5C      5E        5G   
   -   5        $��AuthorsTable��5G      $��1��5H       .  $y�Hidden=�5J       .   .   .   5O        5P      $ Author's Id��6%   $		 33* 5R   %   
 .  5Q   %   �� *Id+5S   %     5U      $ FullName��6%   $		 33* 5W   %   
 .  5V   %   �� *
FullName+5X   %     5Z      $ Alias��6%   $		 33* 5\   %   
 .  5[   %   �� *Alias+5]   %   5_      5`      5a      