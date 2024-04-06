#include <iostream>
#include "../versalib.hpp"

using std::cout, std::endl;

std::string tests[] = {
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

int main() {
  for (int i = 0; i < 100; i++) {
    cout << " \"" << versa::shift(tests[i]) << "\"," << endl;
  }
  return 0;
}