using System.Runtime.InteropServices;

using CommonInterop.ComInt32;

namespace ScInteropTest
{
    [ComVisible(true)]
    [ClassInterface(ClassInterfaceType.None)]
    //[Guid("9E880F8B-8398-404D-95C5-A999D08A3551")]
    [Guid("A20AE549-F6F9-49C3-BA3A-18121CFF2959")]
    public class UseCom : IUseCom
    {
        public IComInterop Plus1Me(int x)
        {
            var temp = new ComInterop();
            temp.Plus1(x);
            return temp;
        }

        public int Add(int a, int b)
        {
            return a + b;
        }
    }
}