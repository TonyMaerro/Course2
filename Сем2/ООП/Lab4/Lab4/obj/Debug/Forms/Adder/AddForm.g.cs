﻿#pragma checksum "..\..\..\..\Forms\Adder\AddForm.xaml" "{8829d00f-11b8-4213-878b-770e8597ac16}" "7A1C1A18718E0E33FC1895B929D71CD0B82A85DB0D5723CF1C76EAB61CD84835"
//------------------------------------------------------------------------------
// <auto-generated>
//     Этот код создан программой.
//     Исполняемая версия:4.0.30319.42000
//
//     Изменения в этом файле могут привести к неправильной работе и будут потеряны в случае
//     повторной генерации кода.
// </auto-generated>
//------------------------------------------------------------------------------

using Lab4.Forms.Adder;
using MahApps.Metro.Controls;
using System;
using System.Diagnostics;
using System.Windows;
using System.Windows.Automation;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Media.Effects;
using System.Windows.Media.Imaging;
using System.Windows.Media.Media3D;
using System.Windows.Media.TextFormatting;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Shell;


namespace Lab4.Forms.Adder {
    
    
    /// <summary>
    /// AddForm
    /// </summary>
    public partial class AddForm : System.Windows.Window, System.Windows.Markup.IComponentConnector {
        
        
        #line 31 "..\..\..\..\Forms\Adder\AddForm.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBox Product_Name;
        
        #line default
        #line hidden
        
        
        #line 49 "..\..\..\..\Forms\Adder\AddForm.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBox Product_Color;
        
        #line default
        #line hidden
        
        
        #line 67 "..\..\..\..\Forms\Adder\AddForm.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBox Product_Price;
        
        #line default
        #line hidden
        
        
        #line 85 "..\..\..\..\Forms\Adder\AddForm.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBox Product_Description;
        
        #line default
        #line hidden
        
        
        #line 105 "..\..\..\..\Forms\Adder\AddForm.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBox Product_Country;
        
        #line default
        #line hidden
        
        
        #line 120 "..\..\..\..\Forms\Adder\AddForm.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Image Product_Image;
        
        #line default
        #line hidden
        
        
        #line 130 "..\..\..\..\Forms\Adder\AddForm.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBox Product_Sale;
        
        #line default
        #line hidden
        
        
        #line 148 "..\..\..\..\Forms\Adder\AddForm.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBox Product_Size;
        
        #line default
        #line hidden
        
        private bool _contentLoaded;
        
        /// <summary>
        /// InitializeComponent
        /// </summary>
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("PresentationBuildTasks", "4.0.0.0")]
        public void InitializeComponent() {
            if (_contentLoaded) {
                return;
            }
            _contentLoaded = true;
            System.Uri resourceLocater = new System.Uri("/Lab4;component/forms/adder/addform.xaml", System.UriKind.Relative);
            
            #line 1 "..\..\..\..\Forms\Adder\AddForm.xaml"
            System.Windows.Application.LoadComponent(this, resourceLocater);
            
            #line default
            #line hidden
        }
        
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("PresentationBuildTasks", "4.0.0.0")]
        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Never)]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Design", "CA1033:InterfaceMethodsShouldBeCallableByChildTypes")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Maintainability", "CA1502:AvoidExcessiveComplexity")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1800:DoNotCastUnnecessarily")]
        void System.Windows.Markup.IComponentConnector.Connect(int connectionId, object target) {
            switch (connectionId)
            {
            case 1:
            this.Product_Name = ((System.Windows.Controls.TextBox)(target));
            return;
            case 2:
            this.Product_Color = ((System.Windows.Controls.TextBox)(target));
            return;
            case 3:
            this.Product_Price = ((System.Windows.Controls.TextBox)(target));
            return;
            case 4:
            this.Product_Description = ((System.Windows.Controls.TextBox)(target));
            return;
            case 5:
            this.Product_Country = ((System.Windows.Controls.TextBox)(target));
            return;
            case 6:
            
            #line 116 "..\..\..\..\Forms\Adder\AddForm.xaml"
            ((System.Windows.Controls.Button)(target)).Click += new System.Windows.RoutedEventHandler(this.ClickOnLoudImg);
            
            #line default
            #line hidden
            return;
            case 7:
            this.Product_Image = ((System.Windows.Controls.Image)(target));
            return;
            case 8:
            this.Product_Sale = ((System.Windows.Controls.TextBox)(target));
            return;
            case 9:
            this.Product_Size = ((System.Windows.Controls.TextBox)(target));
            return;
            case 10:
            
            #line 161 "..\..\..\..\Forms\Adder\AddForm.xaml"
            ((System.Windows.Controls.Button)(target)).Click += new System.Windows.RoutedEventHandler(this.AddProduct);
            
            #line default
            #line hidden
            return;
            case 11:
            
            #line 170 "..\..\..\..\Forms\Adder\AddForm.xaml"
            ((System.Windows.Controls.Button)(target)).Click += new System.Windows.RoutedEventHandler(this.OnCancle);
            
            #line default
            #line hidden
            return;
            }
            this._contentLoaded = true;
        }
    }
}

