using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace PoolApp1
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        private ObservableCollection<Schedule> _items = new ObservableCollection<Schedule>();
        private DateTime today;

        public MainPage()
        {
            this.InitializeComponent();
            this.today = DateTime.Now;
        }

        public IEnumerable<Schedule> Items
        {
            get
            {
                return Schedule.Schedules
                    .Where(i => i.DayOfWeek == DateTime.Now.DayOfWeek)
                    .Where(i => DateTime.Today + i.StartTime >= DateTime.Now)
                    .OrderBy(i => i.StartTime);
            }
        }

        public IEnumerable<Schedule> Tomorrow
        {
            get
            {
                return Schedule.Schedules
                    .Where(i => i.DayOfWeek == DateTime.Now.AddDays(1).DayOfWeek)
                    .OrderBy(i => i.StartTime);
            }
        }
    }
}
