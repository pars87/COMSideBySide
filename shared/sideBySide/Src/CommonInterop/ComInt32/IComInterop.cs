using System.Runtime.InteropServices;

namespace CommonInterop.ComInt32
{
    [ComVisible(true)]
    [Guid("24484884-DAAE-4B24-B0BD-C7B9AEB3D70D")]
    public interface IComInterop
    {
        int Plus1(int x);
    }
}