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
 "KA7XidN1e2gU2TUgLcrZcUtrFlv5kk3P",
 "TjFduMuxlaCB3sEAFPGdqlNySaMebAUH",
 "pH2S7jJOTEu3Ke9RTyafFSmMZFa1n4ck",
 "fRVqDsTpk5Z6nHIk7DTMZ2zZDruvfUoM",
 "3q8vx0rmBkbUfN8hFi2VwUgVzmlIW2j4",
 "KXw0E6axJ1sshKEtYB3coUXeZplpatXR",
 "dvPOLajReOnOeFQ4kjAUTd9wnFdi1aEp",
 "tsCz4KMqkesSoAD7rZ51mPA8rfEUMMlI",
 "8Mc6ElqUd6rpvZ9yIYA8sMkCKmQjch8k",
 "NAOLM9fVhgc3mSrVq9xhc8aYsyOFcdPj",
 "cM4u4tIb0hy8qeCs5UrEiwf0oCXxaxw3",
 "02EcccKvzDmAHrgBuwFhL5tdWKVLUIVL",
 "I0ApiyTxCUZxve66MHJudTxpEiiyCUkZ",
 "4H4Vq2gmOVlUnOb3lRzx1DuujFphQrFn",
 "p6NW5hwGfAb2TrbpFeZupu8zJ0gnB91P",
 "PHRBprkmz81qG8zj6L2um1FUfj8l07X8",
 "HARxTSIOnlVGJ71wcinTX0XJZDlXLlBR",
 "OmXO470EnrhAfCUiEDHEbj2q3J3r03vr",
 "3poLIjF3HhbEwHntuHYFuAoT8xuuLt2L",
 "fLj6KZRgtD3JOmvAwG4ORsfaNYiI7gbs",
 "Kitab3fU0PXNLVFSkj6Npz4NW0GCMkGg",
 "7rANuM3NM9vjhRC31IZjoECwtL2MlPls",
 "1VX8VMvUXZFhrEqsl1eW5J1LYBTP9h5D",
 "a7A404sfjZNDsfObs5f0cGM7UDzbArqp",
 "pOyZe0hX5fEcFVobZD4a6xSkuWfP1zxD",
 "8YaXyojQNJcMLKW2WKZhkCmUpcuU6ANa",
 "SstlXt5qw9qcbAjyX3JZDk3bHizSMLdq",
 "BlxvuDPeR0UBiXrOC2JAY7ll2DuBtDKt",
 "AQU1mknTf6z29N3PFoXKvvHGwucp0Btp",
 "PXFIsr17sQ090uv8gbPBXnBRTajJWr0Z",
 "djGUydC5gJqFi98NIniK22PQpT7Im5Ws",
 "eR5uT0FNevREwF1kpMC91L4LeTzorGM2",
 "oEaQHQP0YMCAqIV9Jyou9BtgDOAGSXQU",
 "Z1cs3gcdOLQTzxbkghLlzd7GuUKXvqJP",
 "ks8FSptkRNOpwIX5BZ3TFXb2PjVCK445",
 "1Dl8RJgrPifrMabN7i9Om0dDIw7g7jZU",
 "NLFEWlwoXGthFGmJ417pXe9fu9rh2i7q",
 "2YuomPyIm6W3U4lTqTD2taZYIyaZORCW",
 "VMINnW0KJY5ZIb5yrcpvoeP9lD5zLkh6",
 "aPGsZ5JDumJFWEjlwKmmW28uUpTm0vHN",
 "dVJFOxatVPeHGkG25eVwaJiuvA2BxgBJ",
 "AjsR6TpnHDqxud0hBcnJIXwG40T7V95B",
 "WzNVeHkWHpXBtT4WQtzPcH378IvS9FQy",
 "5qu3nQ0zQsz2gcicdaspkEoO8mwSs6rJ",
 "tbpzwM9T9pSD4Gh07iju2jCiwfIiu286",
 "R53qR5hIFmVr987MfHIDio9p8CSrzi0C",
 "GxOZAOvmrYoso6ga7Jgei0xlxfg6bhPS",
 "SVgmIpnTZp6vyj40dSpRK8JzlobAct6M",
 "yOJjcMkPqX6EXSq6Yn1PqW29BPTTvWKn",
 "IjKASKeA9Zvk0feN9Wdk9mve828o1cbv",
 "fLIhFjSqFjYToXRKeYmHjscMlsut1eJY",
 "zjwwvkJhwgNyMsVIRjoBCCW1E1hsnkXc",
 "q2DtXHADEtL4sWt3AT8VaTkr2ihJubj8",
 "oaZfberz7X9hVkzPpnNoz3gttiTjBBEv",
 "exN9AitIW3Ve5kISDy4FZTrUGBYjBEIH",
 "eFuNgAerAQUkPfNG5vddu53XrcFBmM1E",
 "o1FCKeuQ2nHIutFyZEzc0HTSeXEOGyKb",
 "jBY3WCnbAZGeq5K57iRR7PmRYbWyOKgj",
 "c4gdcoha2FOoLk1fkamwS2U0UhDEtFNO",
 "ZjoX9vElEcaAOxUZ1h3ETaaD3YEXjvsh",
 "vEfITOEvaqTSjOVDbErWQUqpTU5F1X6K",
 "7PTZIHJ5NJmaDVt0VTT33GYxee1xieqn",
 "kkc4uLhK20wHIy9JYptd31ucEiKudHcG",
 "MRWRWkOQ17nBhTG3nTOvIEtS0Qq99eSS",
 "qCM0GNAQ25h9E9nFIYj5N8N9R4Wy3cCD",
 "oZziNSMdnVAGz5RvQEqLTdXdfvRjymDt",
 "koXssBPQEx3jmqvNULIq409CMO3cJZIk",
 "Msd0Qd9CLlh85iFpwhUsIka69qLAFsbq",
 "mEF3XTm2Soxv42d2VCJ5t9DCXVaMqKpO",
 "LxWAFAh6eOqxYVnumMdKZtauFQFXZa0T",
 "GT7bEr7GBHqIBCGCGKpSrbvbM4ftAqiY",
 "7UagjK7da8ja4sDfCRRktxN4eY6FHc2F",
 "fOnpbBqfKMnejSiwZHj6D8FuZ8YqY44H",
 "aNcNqmP4kmHxG0M5mJb27yu93aj9BvrN",
 "8FrVrjTW2mXucVTnfmwwoJ2iAItOYJ9Q",
 "BcqgdYARhhu0POCwuL1dKyuZd7scw15W",
 "03dWGVIgBUMp5BjZR0LiKVbba6Oyib2E",
 "exKWSx0T4Bf7tadvpYDDmRPVXXXuQdmx",
 "MtXi2UeNsKY9zK3xW58sr4YNoMsnASfA",
 "MCBohrS0hOxAFiT6bNJDCExNMC5pCwDJ",
 "ha4StBJBQImuqrYJGc3SBrDrFct2WFwe",
 "mOLB037gMEIqOsIb9uQxooMHPJBPMCO3",
 "C8eDQ54DccfpH987lSwkiY3fkqdg0RET",
 "hKe0E4MyT69yRoJMlWuQPHn1oFZuKD4v",
 "0MtMjyLigwwDfsU2kHSPMCTp2EdiYl7k",
 "3dZpochU3DhxMOC1VhapWzlP5jU8WdQw",
 "VBtTAUwjJW1jGMDUQ6h67pwlX85wleWV",
 "030uIS5wjL8V8iOwzVqyHQ0h8X4NHpCN",
 "mcx7IJJn7w4ycNyNS0Ct3s59bnqOBZAO",
 "bJ6DEw52Q0ju38Lv4MVXIVPfT7kEGAeJ",
 "XJtCvq3gPiJw4QhPQG2lZASKAIgjZqGw",
 "MhbzpCJAkfMZOv1aJPRgaISc2nJf8NmK",
 "nHr2MBRLuKpmxZHUosLw5ZQTNcUOMFNT",
 "rp9MGt7F42iWxHkhvFNya9tOjTXoKhrM",
 "aIMFkKglbKUuRrFc5aKM7lihE4NEbFve",
 "4Q3jIkkLsAX8wcfnRKRPdCXl2oF2948i",
 "tLMesb5zqYXqnFbLLU7ip8gR6gpwVZRe",
 "zZkOGnfuXM3LSt9Bs5gSroDjBm22Lgg0",
 "iUMs5ElM1jxpxEyVcuFZA0wlccjJzbRZ",
 "M4TJq8zD6d6MsavJa9BZSGOhQnezpUoX",
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
        string res = versa::shift(tests[i]);
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
    cout << "Passed: " << passed << endl;
    cout << "Failed: " << failed << endl;

    return 0;
}
