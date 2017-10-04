using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Windows.UI.Xaml.Data;

namespace PoolApp1
{
    public class TimeFormat : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, string language)
        {
            DateTime dt = new DateTime() + (TimeSpan)value;
            return dt.ToString("h:mm tt");
        }

        public object ConvertBack(object value, Type targetType, object parameter, string language)
        {
            throw new NotImplementedException();
        }
    }

    public class DurationFormat : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, string language)
        {
            var timeSpanValue = (TimeSpan)value;
            var totalHours = timeSpanValue.TotalHours;
            var pluralize = (totalHours != 1);
            return String.Format("{0} hour{1}", totalHours, pluralize ? "s" : "");
        }

        public object ConvertBack(object value, Type targetType, object parameter, string language)
        {
            throw new NotImplementedException();
        }
    }

}
