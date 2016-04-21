using System.Runtime.InteropServices;

using CommonInterop.ComInt32;

namespace ScInteropTest
{
    [ComVisible(true)]
    [Guid("E98002AE-F8AB-478F-94D1-FA9F7D74EEB5")]
    public interface IUseCom
    {
        IComInterop Plus1Me(int x);

        int Add(int a, int b);
    }
}