#include <iostream>
#include <chrono>
#include "../versalib.hpp"

using namespace std;

string tests[] = {
 "PKA7XidN1e2gU2TUgLcrZcUtrFlv5kk3",
 "HTjFduMuxlaCB3sEAFPGdqlNySaMebAU",
 "kpH2S7jJOTEu3Ke9RTyafFSmMZFa1n4c",
 "MfRVqDsTpk5Z6nHIk7DTMZ2zZDruvfUo",
 "43q8vx0rmBkbUfN8hFi2VwUgVzmlIW2j",
 "RKXw0E6axJ1sshKEtYB3coUXeZplpatX",
 "pdvPOLajReOnOeFQ4kjAUTd9wnFdi1aE",
 "ItsCz4KMqkesSoAD7rZ51mPA8rfEUMMl",
 "k8Mc6ElqUd6rpvZ9yIYA8sMkCKmQjch8",
 "jNAOLM9fVhgc3mSrVq9xhc8aYsyOFcdP",
 "3cM4u4tIb0hy8qeCs5UrEiwf0oCXxaxw",
 "L02EcccKvzDmAHrgBuwFhL5tdWKVLUIV",
 "ZI0ApiyTxCUZxve66MHJudTxpEiiyCUk",
 "n4H4Vq2gmOVlUnOb3lRzx1DuujFphQrF",
 "Pp6NW5hwGfAb2TrbpFeZupu8zJ0gnB91",
 "8PHRBprkmz81qG8zj6L2um1FUfj8l07X",
 "RHARxTSIOnlVGJ71wcinTX0XJZDlXLlB",
 "rOmXO470EnrhAfCUiEDHEbj2q3J3r03v",
 "L3poLIjF3HhbEwHntuHYFuAoT8xuuLt2",
 "sfLj6KZRgtD3JOmvAwG4ORsfaNYiI7gb",
 "gKitab3fU0PXNLVFSkj6Npz4NW0GCMkG",
 "s7rANuM3NM9vjhRC31IZjoECwtL2MlPl",
 "D1VX8VMvUXZFhrEqsl1eW5J1LYBTP9h5",
 "pa7A404sfjZNDsfObs5f0cGM7UDzbArq",
 "DpOyZe0hX5fEcFVobZD4a6xSkuWfP1zx",
 "a8YaXyojQNJcMLKW2WKZhkCmUpcuU6AN",
 "qSstlXt5qw9qcbAjyX3JZDk3bHizSMLd",
 "tBlxvuDPeR0UBiXrOC2JAY7ll2DuBtDK",
 "pAQU1mknTf6z29N3PFoXKvvHGwucp0Bt",
 "ZPXFIsr17sQ090uv8gbPBXnBRTajJWr0",
 "sdjGUydC5gJqFi98NIniK22PQpT7Im5W",
 "2eR5uT0FNevREwF1kpMC91L4LeTzorGM",
 "UoEaQHQP0YMCAqIV9Jyou9BtgDOAGSXQ",
 "PZ1cs3gcdOLQTzxbkghLlzd7GuUKXvqJ",
 "5ks8FSptkRNOpwIX5BZ3TFXb2PjVCK44",
 "U1Dl8RJgrPifrMabN7i9Om0dDIw7g7jZ",
 "qNLFEWlwoXGthFGmJ417pXe9fu9rh2i7",
 "W2YuomPyIm6W3U4lTqTD2taZYIyaZORC",
 "6VMINnW0KJY5ZIb5yrcpvoeP9lD5zLkh",
 "NaPGsZ5JDumJFWEjlwKmmW28uUpTm0vH",
 "JdVJFOxatVPeHGkG25eVwaJiuvA2BxgB",
 "BAjsR6TpnHDqxud0hBcnJIXwG40T7V95",
 "yWzNVeHkWHpXBtT4WQtzPcH378IvS9FQ",
 "J5qu3nQ0zQsz2gcicdaspkEoO8mwSs6r",
 "6tbpzwM9T9pSD4Gh07iju2jCiwfIiu28",
 "CR53qR5hIFmVr987MfHIDio9p8CSrzi0",
 "SGxOZAOvmrYoso6ga7Jgei0xlxfg6bhP",
 "MSVgmIpnTZp6vyj40dSpRK8JzlobAct6",
 "nyOJjcMkPqX6EXSq6Yn1PqW29BPTTvWK",
 "vIjKASKeA9Zvk0feN9Wdk9mve828o1cb",
 "YfLIhFjSqFjYToXRKeYmHjscMlsut1eJ",
 "czjwwvkJhwgNyMsVIRjoBCCW1E1hsnkX",
 "8q2DtXHADEtL4sWt3AT8VaTkr2ihJubj",
 "voaZfberz7X9hVkzPpnNoz3gttiTjBBE",
 "HexN9AitIW3Ve5kISDy4FZTrUGBYjBEI",
 "EeFuNgAerAQUkPfNG5vddu53XrcFBmM1",
 "bo1FCKeuQ2nHIutFyZEzc0HTSeXEOGyK",
 "jjBY3WCnbAZGeq5K57iRR7PmRYbWyOKg",
 "Oc4gdcoha2FOoLk1fkamwS2U0UhDEtFN",
 "hZjoX9vElEcaAOxUZ1h3ETaaD3YEXjvs",
 "KvEfITOEvaqTSjOVDbErWQUqpTU5F1X6",
 "n7PTZIHJ5NJmaDVt0VTT33GYxee1xieq",
 "Gkkc4uLhK20wHIy9JYptd31ucEiKudHc",
 "SMRWRWkOQ17nBhTG3nTOvIEtS0Qq99eS",
 "DqCM0GNAQ25h9E9nFIYj5N8N9R4Wy3cC",
 "toZziNSMdnVAGz5RvQEqLTdXdfvRjymD",
 "kkoXssBPQEx3jmqvNULIq409CMO3cJZI",
 "qMsd0Qd9CLlh85iFpwhUsIka69qLAFsb",
 "OmEF3XTm2Soxv42d2VCJ5t9DCXVaMqKp",
 "TLxWAFAh6eOqxYVnumMdKZtauFQFXZa0",
 "YGT7bEr7GBHqIBCGCGKpSrbvbM4ftAqi",
 "F7UagjK7da8ja4sDfCRRktxN4eY6FHc2",
 "HfOnpbBqfKMnejSiwZHj6D8FuZ8YqY44",
 "NaNcNqmP4kmHxG0M5mJb27yu93aj9Bvr",
 "Q8FrVrjTW2mXucVTnfmwwoJ2iAItOYJ9",
 "WBcqgdYARhhu0POCwuL1dKyuZd7scw15",
 "E03dWGVIgBUMp5BjZR0LiKVbba6Oyib2",
 "xexKWSx0T4Bf7tadvpYDDmRPVXXXuQdm",
 "AMtXi2UeNsKY9zK3xW58sr4YNoMsnASf",
 "JMCBohrS0hOxAFiT6bNJDCExNMC5pCwD",
 "eha4StBJBQImuqrYJGc3SBrDrFct2WFw",
 "3mOLB037gMEIqOsIb9uQxooMHPJBPMCO",
 "TC8eDQ54DccfpH987lSwkiY3fkqdg0RE",
 "vhKe0E4MyT69yRoJMlWuQPHn1oFZuKD4",
 "k0MtMjyLigwwDfsU2kHSPMCTp2EdiYl7",
 "w3dZpochU3DhxMOC1VhapWzlP5jU8WdQ",
 "VVBtTAUwjJW1jGMDUQ6h67pwlX85wleW",
 "N030uIS5wjL8V8iOwzVqyHQ0h8X4NHpC",
 "Omcx7IJJn7w4ycNyNS0Ct3s59bnqOBZA",
 "JbJ6DEw52Q0ju38Lv4MVXIVPfT7kEGAe",
 "wXJtCvq3gPiJw4QhPQG2lZASKAIgjZqG",
 "KMhbzpCJAkfMZOv1aJPRgaISc2nJf8Nm",
 "TnHr2MBRLuKpmxZHUosLw5ZQTNcUOMFN",
 "Mrp9MGt7F42iWxHkhvFNya9tOjTXoKhr",
 "eaIMFkKglbKUuRrFc5aKM7lihE4NEbFv",
 "i4Q3jIkkLsAX8wcfnRKRPdCXl2oF2948",
 "etLMesb5zqYXqnFbLLU7ip8gR6gpwVZR",
 "0zZkOGnfuXM3LSt9Bs5gSroDjBm22Lgg",
 "ZiUMs5ElM1jxpxEyVcuFZA0wlccjJzbR",
 "XM4TJq8zD6d6MsavJa9BZSGOhQnezpUo",
};

string results[] = {
 "3kk5vlFrtUcZrcLgUT2Ug2e1NdiX7AKP",
 "UAbeMaSyNlqdGPFAEs3BCalxuMudFjTH",
 "c4n1aFZMmSFfayTR9eK3uETOJj7S2Hpk",
 "oUfvurDZz2ZMTD7kIHn6Z5kpTsDqVRfM",
 "j2WIlmzVgUwV2iFh8NfUbkBmr0xv8q34",
 "XtaplpZeXUoc3BYtEKhss1Jxa6E0wXKR",
 "Ea1idFnw9dTUAjk4QFeOnOeRjaLOPvdp",
 "lMMUEfr8APm15Zr7DAoSsekqMK4zCstI",
 "8hcjQmKCkMs8AYIy9Zvpr6dUqlE6cM8k",
 "PdcFOysYa8chx9qVrSm3cghVf9MLOANj",
 "wxaxXCo0fwiErU5sCeq8yh0bIt4u4Mc3",
 "VIULVKWdt5LhFwuBgrHAmDzvKcccE20L",
 "kUCyiiEpxTduJHM66evxZUCxTyipA0IZ",
 "FrQhpFjuuD1xzRl3bOnUlVOmg2qV4H4n",
 "19Bng0Jz8upuZeFpbrT2bAfGwh5WN6pP",
 "X70l8jfUF1mu2L6jz8Gq18zmkrpBRHP8",
 "BlLXlDZJX0XTnicw17JGVlnOISTxRAHR",
 "v30r3J3q2jbEHDEiUCfAhrnE074OXmOr",
 "2tLuux8ToAuFYHutnHwEbhH3FjILop3L",
 "bg7IiYNafsRO4GwAvmOJ3DtgRZK6jLfs",
 "GkMCG0WN4zpN6jkSFVLNXP0Uf3batiKg",
 "lPlM2LtwCEojZI13CRhjv9MN3MuNAr7s",
 "5h9PTBYL1J5We1lsqErhFZXUvMV8XV1D",
 "qrAbzDU7MGc0f5sbOfsDNZjfs404A7ap",
 "xz1PfWukSx6a4DZboVFcEf5Xh0eZyOpD",
 "NA6UucpUmCkhZKW2WKLMcJNQjoyXaY8a",
 "dLMSziHb3kDZJ3XyjAbcq9wq5tXltsSq",
 "KDtBuD2ll7YAJ2COrXiBU0RePDuvxlBt",
 "tB0pcuwGHvvKXoFP3N92z6fTnkm1UQAp",
 "0rWJjaTRBnXBPbg8vu090Qs71rsIFXPZ",
 "W5mI7TpQP22KinIN89iFqJg5CdyUGjds",
 "MGrozTeL4L19CMpk1FwERveNF0Tu5Re2",
 "QXSGAODgtB9uoyJ9VIqACMY0PQHQaEoU",
 "JqvXKUuG7dzlLhgkbxzTQLOdcg3sc1ZP",
 "44KCVjP2bXFT3ZB5XIwpONRktpSF8sk5",
 "Zj7g7wIDd0mO9i7NbaMrfiPrgJR8lD1U",
 "7i2hr9uf9eXp714JmGFhtGXowlWEFLNq",
 "CROZayIYZat2DTqTl4U3W6mIyPmouY2W",
 "hkLz5Dl9Peovpcry5bIZ5YJK0WnNIMV6",
 "Hv0mTpUu82WmmKwljEWFJmuDJ5ZsGPaN",
 "BgxB2AvuiJawVe52GkGHePVtaxOFJVdJ",
 "59V7T04GwXIJncBh0duxqDHnpT6RsjAB",
 "QF9SvI873HcPztQW4TtBXpHWkHeVNzWy",
 "r6sSwm8OoEkpsadcicg2zsQz0Qn3uq5J",
 "82uiIfwiCj2uji70hG4DSp9T9Mwzpbt6",
 "0izrSC8p9oiDIHfM789rVmFIh5Rq35RC",
 "Phb6gfxlx0iegJ7ag6osoYrmvOAZOxGS",
 "6tcAbolzJ8KRpSd04jyv6pZTnpImgVSM",
 "KWvTTPB92WqP1nY6qSXE6XqPkMcjJOyn",
 "bc1o828evm9kdW9Nef0kvZ9AeKSAKjIv",
 "Je1tuslMcsjHmYeKRXoTYjFqSjFhILfY",
 "Xknsh1E1WCCBojRIVsMyNgwhJkvwwjzc",
 "jbuJhi2rkTaV8TA3tWs4LtEDAHXtD2q8",
 "EBBjTittg3zoNnpPzkVh9X7zrebfZaov",
 "IEBjYBGUrTZF4yDSIk5eV3WItiA9NxeH",
 "1MmBFcrX35uddv5GNfPkUQAreAgNuFeE",
 "KyGOEXeSTH0czEZyFtuIHn2QueKCF1ob",
 "gKOyWbYRmP7RRi75K5qeGZAbnCW3YBjj",
 "NFtEDhU0U2Swmakf1kLoOF2ahocdg4cO",
 "svjXEY3DaaTE3h1ZUxOAacElEv9XojZh",
 "6X1F5UTpqUQWrEbDVOjSTqavEOTIfEvK",
 "qeix1eexYG33TTV0tVDamJN5JHIZTP7n",
 "cHduKiEcu13dtpYJ9yIHw02KhLu4ckkG",
 "Se99qQ0StEIvOTn3GThBn71QOkWRWRMS",
 "Cc3yW4R9N8N5jYIFn9E9h52QANG0MCqD",
 "DmyjRvfdXdTLqEQvR5zGAVndMSNizZot",
 "IZJc3OMC904qILUNvqmj3xEQPBssXokk",
 "bsFALq96akIsUhwpFi58hlLC9dQ0dsMq",
 "pKqMaVXCD9t5JCV2d24vxoS2mTX3FEmO",
 "0aZXFQFuatZKdMmunVYxqOe6hAFAWxLT",
 "iqAtf4MbvbrSpKGCGCBIqHBG7rEb7TGY",
 "2cHF6Ye4NxtkRRCfDs4aj8ad7KjgaU7F",
 "44YqY8ZuF8D6jHZwiSjenMKfqBbpnOfH",
 "rvB9ja39uy72bJm5M0GxHmk4PmqNcNaN",
 "9JYOtIAi2JowwmfnTVcuXm2WTjrVrF8Q",
 "51wcs7dZuyKd1LuwCOP0uhhRAYdgqcBW",
 "2biyO6abbVKiL0RZjB5pMUBgIVGWd30E",
 "mdQuXXXVPRmDDYpvdat7fB4T0xSWKxex",
 "fSAnsMoNY4rs85Wx3Kz9YKsNeU2iXtMA",
 "DwCp5CMNxECDJNb6TiFAxOh0SrhoBCMJ",
 "wFW2tcFrDrBS3cGJYrqumIQBJBtS4ahe",
 "OCMPBJPHMooxQu9bIsOqIEMg730BLOm3",
 "ER0gdqkf3YikwSl789HpfccD45QDe8CT",
 "4DKuZFo1nHPQuWlMJoRy96TyM4E0eKhv",
 "7lYidE2pTCMPSHk2UsfDwwgiLyjMtM0k",
 "QdW8Uj5PlzWpahV1COMxhD3UhcopZd3w",
 "Welw58Xlwp76h6QUDMGj1WJjwUATtBVV",
 "CpHN4X8h0QHyqVzwOi8V8Ljw5SIu030N",
 "AZBOqnb95s3tC0SNyNcy4w7nJJI7xcmO",
 "eAGEk7TfPVIXVM4vL83uj0Q25wED6JbJ",
 "GqZjgIAKSAZl2GQPhQ4wJiPg3qvCtJXw",
 "mN8fJn2cSIagRPJa1vOZMfkAJCpzbhMK",
 "NFMOUcNTQZ5wLsoUHZxmpKuLRBM2rHnT",
 "rhKoXTjOt9ayNFvhkHxWi24F7tGM9prM",
 "vFbEN4Ehil7MKa5cFrRuUKblgKkFMIae",
 "8492Fo2lXCdPRKRnfcw8XAsLkkIj3Q4i",
 "RZVwpg6Rg8pi7ULLbFnqXYqz5bseMLte",
 "ggL22mBjDorSg5sB9tSL3MXufnGOkZz0",
 "RbzJjcclw0AZFucVyExpxj1MlE5sMUiZ",
 "oUpzenQhOGSZB9aJvasM6d6Dz8qJT4MX",
};

int main() {
    int total_tests = sizeof(tests) / sizeof(tests[0]);
    int passed = 0;
    int failed = 0;

    // Define time points for tracking total and min/max execution times
    auto total_time = std::chrono::duration<double, std::nano>::zero();
    auto min_time = std::chrono::duration<double, std::nano>::max();
    auto max_time = std::chrono::duration<double, std::nano>::min();

    for (int i = 0; i < total_tests; ++i) {
        auto start = std::chrono::high_resolution_clock::now();
        string res = versa::reverse(tests[i]);  // Assuming 'versa::reverse' is the function to test
        auto end = std::chrono::high_resolution_clock::now();
        
        // Calculate execution time for current test (in nanoseconds)
        std::chrono::duration<double, std::nano> elapsed_time = end - start;
        
        // Update total execution time
        total_time += elapsed_time;

        // Update min and max execution times (in nanoseconds)
        if (elapsed_time < min_time) {
            min_time = elapsed_time;
        }
        if (elapsed_time > max_time) {
            max_time = elapsed_time;
        }

        // Check result
        if (res == results[i]) {
            passed++;
            cout << "Test " << i + 1 << ": PASSED (Time: " << elapsed_time.count() << " ns)" << endl;
        } else {
            failed++;
            cout << "Test " << i + 1 << ": FAILED (Time: " << elapsed_time.count() << " ns)" << endl;
        }
    }

    // Calculate average time per test (in nanoseconds)
    double average_time = total_time.count() / static_cast<double>(total_tests);

    // Output average time per test
    cout << "\nAverage time per test: " << average_time << " ns" << endl;

    cout << "Tests: " << total_tests << endl;
    cout << "Min: " << min_time.count() << endl;
    cout << "Max: " << max_time.count() << endl;
    cout << "Passed: " << passed << endl;
    cout << "Failed: " << failed << endl;

    return 0;
}
