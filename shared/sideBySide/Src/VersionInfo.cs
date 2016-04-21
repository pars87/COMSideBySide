using System.Reflection;

// Generel information om "assemblies" i en større kontekst, nemlig i de
// underliggende projekter. 
[assembly: AssemblyCompany("Tyson A/S")]
[assembly: AssemblyProduct("Tyson")]
[assembly: AssemblyCopyright("Copyright © 2015-2016 Tyson A/S")]
[assembly: AssemblyTrademark("Tyson.")]

// Versionsinformation sættes af byggemaskineriet. De må IKKE ændres manuelt.
// Versionsinformation består de fire værdier:
// Major Version.Minor Version.Build Number.Revision
// 
// Major Version tælles op ved ændringer i Widex.Fitting.Scorpion.dll
// Minor Version tælles op ved 'breaking changes' i Widex.Fitting.Scorpion.Interop.dll, 
// dvs hvis det eksisterende interface ændres. Tilføjelse af nye metoder er ikke en breaking change!
[assembly: AssemblyVersion("2.1.1264.0")]
[assembly: AssemblyFileVersion("2.1.1264.0")]

namespace Widex
{
    internal static class VersionInfo
    {
        /// <summary>
        /// Firmanavnet, som bruges som første forstavelse på navnerum, DLL'er m.m..
        /// </summary>
        internal const string CompanyName = "Tyson";

        /// <summary>
        /// Den offentlige nøgle svarende til filen Key.snk.
        /// </summary>
        internal const string PublicKey =
            "00240000048000009400000006020000002400005253413100040000010001002bda853bec355b" +
            "d30308a29d5b4780640e3091051a9a074491189176e6b52e224a978524b7454c903d7d1d8c4c5c" +
            "77cbc6e8676d542d9fda4687332fd40b41d7cb68c2ec94841dd8626cc725824a8fbe07b7c0941c" +
            "d601220516f9e0f47d81a17eae2d87f4b37f64def94f6270d58fe63312cd868c326312441de5b2" +
            "424fdeb8";
    }
}
