using System.Runtime.InteropServices;

namespace CommonInterop.ComInt32
{
    /// <summary>
    /// Implementation af ComInt32List.
    /// </summary>
    public class ComInterop : IComInterop
    {
        public ComInterop()
        {
        }

        public int Plus1(int x)
        {
            return x + 1;
        }
    }
}