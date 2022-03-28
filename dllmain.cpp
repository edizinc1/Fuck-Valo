#pragma once

#include "pch.h"
#include "interception.h"
#include <stdio.h>
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int get_screen_width(void) { // screen width
    return GetSystemMetrics(SM_CXSCREEN);
}

int get_screen_height(void) { // screen height
    return GetSystemMetrics(SM_CYSCREEN);
}

struct point {
    double x;
    double y;
    point(double x, double y) : x(x), y(y) {}
};

inline bool is_color(int red, int green, int blue) { // color sorter
        if (green >= 170) {
            return false;
        }

        if (green >= 120) {
            return abs(red - blue) <= 8 &&
                red - green >= 50 &&
                blue - green >= 50 &&
                red >= 105 &&
                blue >= 105;
        }

        return abs(red - blue) <= 13 &&
            red - green >= 60 &&
            blue - green >= 60 &&
            red >= 110 &&
            blue >= 100;
}

InterceptionContext context;
InterceptionDevice device;
InterceptionStroke stroke;
BYTE* screenData = 0;
bool run_threads = true;
const int screen_width = get_screen_width(), screen_height = get_screen_height();

int aim_x = 0;
int aim_y = 0;

void bot() { // bot proc
    int w = 100, h = 100;
    auto t_start = std::chrono::high_resolution_clock::now();
    auto t_end = std::chrono::high_resolution_clock::now();

    HDC hScreen = GetDC(NULL);
    HBITMAP hBitmap = CreateCompatibleBitmap(hScreen, w, h);
    screenData = (BYTE*)malloc(5 * screen_width * screen_height);
    HDC hDC = CreateCompatibleDC(hScreen);
    point middle_screen(screen_width / 2, screen_height / 2);

    BITMAPINFOHEADER bmi = { 0 };
    bmi.biSize = sizeof(BITMAPINFOHEADER);
    bmi.biPlanes = 1;
    bmi.biBitCount = 32;
    bmi.biWidth = w;
    bmi.biHeight = -h;
    bmi.biCompression = BI_RGB;
    bmi.biSizeImage = 0;

    while (run_threads) {
        Sleep(6);
        HGDIOBJ old_obj = SelectObject(hDC, hBitmap);
        BOOL bRet = BitBlt(hDC, 0, 0, w, h, hScreen, middle_screen.x - (w/2), middle_screen.y - (h/2), SRCCOPY);
        SelectObject(hDC, old_obj);
        GetDIBits(hDC, hBitmap, 0, h, screenData, (BITMAPINFO*)&bmi, DIB_RGB_COLORS);
        bool stop_loop = false;
        for (int j = 0; j < h; ++j) {
            for (int i = 0; i < w * 4; i += 4) {
                #define red screenData[i + (j*w*4) + 2]
                #define green screenData[i + (j*w*4) + 1]
                #define blue screenData[i + (j*w*4) + 0]

                if (is_color(red, green, blue)) {
                    aim_x = (i / 4) - (w/2);
                    aim_y = j - (h/2) + 3;
                    stop_loop = true;
                    break;
                }
            }
            if (stop_loop) {
                break;
            }
        }
        if (!stop_loop) {
            aim_x = 0;
            aim_y = 0;
        }
    }
}

void rVPBmwjqYxEYajmh() { // junk code
    float NDibTVVLxg = 81449007607236; NDibTVVLxg = 7090379140177; if (NDibTVVLxg = 4535287747401) NDibTVVLxg = 53342403019480; NDibTVVLxg = 57951862895625; NDibTVVLxg = 28956255795186;
    if (NDibTVVLxg = 37353625334240)NDibTVVLxg = 77474017055475; NDibTVVLxg = 94955673640187;
    if (NDibTVVLxg = 52486857671117)NDibTVVLxg = 77474017055475; NDibTVVLxg = 94955673640187;
    if (NDibTVVLxg = 52486857671117)NDibTVVLxg = 77474017055475; NDibTVVLxg = 94955673640187;
    if (NDibTVVLxg = 52486857671117)NDibTVVLxg = 77474017055475; NDibTVVLxg = 94955673640187;
    if (NDibTVVLxg = 52486857671117)NDibTVVLxg = 77474017055475; NDibTVVLxg = 94955673640187; NDibTVVLxg = 1570405751838;

    float SJFpzlDXgY = 89326637430505; SJFpzlDXgY = 77043877809357; if (SJFpzlDXgY = 84296208626473) SJFpzlDXgY = 52781202553524; SJFpzlDXgY = 26957255747477; SJFpzlDXgY = 57474772695725;
    if (SJFpzlDXgY = 83681585278120)SJFpzlDXgY = 86264737298384; SJFpzlDXgY = 88682589309956;
    if (SJFpzlDXgY = 56258528130190)SJFpzlDXgY = 86264737298384; SJFpzlDXgY = 88682589309956;
    if (SJFpzlDXgY = 56258528130190)SJFpzlDXgY = 86264737298384; SJFpzlDXgY = 88682589309956;
    if (SJFpzlDXgY = 56258528130190)SJFpzlDXgY = 86264737298384; SJFpzlDXgY = 88682589309956;
    if (SJFpzlDXgY = 56258528130190)SJFpzlDXgY = 86264737298384; SJFpzlDXgY = 88682589309956; SJFpzlDXgY = 55645483986100;

    float TUUdiSbMDn = 95587686308310; TUUdiSbMDn = 77975078349031; if (TUUdiSbMDn = 9859526585823) TUUdiSbMDn = 5211207048437; TUUdiSbMDn = 140398160940; TUUdiSbMDn = 609401403981;
    if (TUUdiSbMDn = 1695727521120)TUUdiSbMDn = 65858238252134; TUUdiSbMDn = 58378517198782;
    if (TUUdiSbMDn = 43165518736559)TUUdiSbMDn = 65858238252134; TUUdiSbMDn = 58378517198782;
    if (TUUdiSbMDn = 43165518736559)TUUdiSbMDn = 65858238252134; TUUdiSbMDn = 58378517198782;
    if (TUUdiSbMDn = 43165518736559)TUUdiSbMDn = 65858238252134; TUUdiSbMDn = 58378517198782;
    if (TUUdiSbMDn = 43165518736559)TUUdiSbMDn = 65858238252134; TUUdiSbMDn = 58378517198782; TUUdiSbMDn = 69591192667377;

    float LzupNHmopU = 62679514008032; LzupNHmopU = 19949088998196; if (LzupNHmopU = 41688967936411) LzupNHmopU = 32592092603694; LzupNHmopU = 77539251068482; LzupNHmopU = 10684827753925;
    if (LzupNHmopU = 81616563259209)LzupNHmopU = 79364117804525; LzupNHmopU = 224976186594;
    if (LzupNHmopU = 14778728628330)LzupNHmopU = 79364117804525; LzupNHmopU = 224976186594;
    if (LzupNHmopU = 14778728628330)LzupNHmopU = 79364117804525; LzupNHmopU = 224976186594;
    if (LzupNHmopU = 14778728628330)LzupNHmopU = 79364117804525; LzupNHmopU = 224976186594;
    if (LzupNHmopU = 14778728628330)LzupNHmopU = 79364117804525; LzupNHmopU = 224976186594; LzupNHmopU = 81059359796997;

    float yWdSdFBgPR = 98474908053703; yWdSdFBgPR = 78566325764466; if (yWdSdFBgPR = 55326977837156) yWdSdFBgPR = 11525276223611; yWdSdFBgPR = 14995081305120; yWdSdFBgPR = 13051201499508;
    if (yWdSdFBgPR = 55972921152527)yWdSdFBgPR = 7837156876138; yWdSdFBgPR = 66986077241027;
    if (yWdSdFBgPR = 38162808857979)yWdSdFBgPR = 7837156876138; yWdSdFBgPR = 66986077241027;
    if (yWdSdFBgPR = 38162808857979)yWdSdFBgPR = 7837156876138; yWdSdFBgPR = 66986077241027;
    if (yWdSdFBgPR = 38162808857979)yWdSdFBgPR = 7837156876138; yWdSdFBgPR = 66986077241027;
    if (yWdSdFBgPR = 38162808857979)yWdSdFBgPR = 7837156876138; yWdSdFBgPR = 66986077241027; yWdSdFBgPR = 93793706361212;

    float nDzTNPUfyF = 22229681631588; nDzTNPUfyF = 51528072976379; if (nDzTNPUfyF = 91263506381672) nDzTNPUfyF = 90517665142611; nDzTNPUfyF = 39480289270841; nDzTNPUfyF = 92708413948028;
    if (nDzTNPUfyF = 4088079051766)nDzTNPUfyF = 63816721865698; nDzTNPUfyF = 8203751771248;
    if (nDzTNPUfyF = 78386576701734)nDzTNPUfyF = 63816721865698; nDzTNPUfyF = 8203751771248;
    if (nDzTNPUfyF = 78386576701734)nDzTNPUfyF = 63816721865698; nDzTNPUfyF = 8203751771248;
    if (nDzTNPUfyF = 78386576701734)nDzTNPUfyF = 63816721865698; nDzTNPUfyF = 8203751771248;
    if (nDzTNPUfyF = 78386576701734)nDzTNPUfyF = 63816721865698; nDzTNPUfyF = 8203751771248; nDzTNPUfyF = 42476722189659;

    float YRnMyoogsC = 68315027111604; YRnMyoogsC = 19314525338753; if (YRnMyoogsC = 57276735725643) YRnMyoogsC = 36694998511922; YRnMyoogsC = 2383648847526; YRnMyoogsC = 8475262383648;
    if (YRnMyoogsC = 2868593669499)YRnMyoogsC = 57256438822140; YRnMyoogsC = 71687751619096;
    if (YRnMyoogsC = 8163524954931)YRnMyoogsC = 57256438822140; YRnMyoogsC = 71687751619096;
    if (YRnMyoogsC = 8163524954931)YRnMyoogsC = 57256438822140; YRnMyoogsC = 71687751619096;
    if (YRnMyoogsC = 8163524954931)YRnMyoogsC = 57256438822140; YRnMyoogsC = 71687751619096;
    if (YRnMyoogsC = 8163524954931)YRnMyoogsC = 57256438822140; YRnMyoogsC = 71687751619096; YRnMyoogsC = 79066855991671;
}

void mgjeBnjjBCzKWShp() { // junk code
    float WgjrIOyLqQ = 49538594813495; WgjrIOyLqQ = 13803022357231; if (WgjrIOyLqQ = 34333698802003) WgjrIOyLqQ = 9674517958962; WgjrIOyLqQ = 51864667485459; WgjrIOyLqQ = 74854595186466;
    if (WgjrIOyLqQ = 3759399674517)WgjrIOyLqQ = 88020039785149; WgjrIOyLqQ = 4530767673259;
    if (WgjrIOyLqQ = 77334549464854)WgjrIOyLqQ = 88020039785149; WgjrIOyLqQ = 4530767673259;
    if (WgjrIOyLqQ = 77334549464854)WgjrIOyLqQ = 88020039785149; WgjrIOyLqQ = 4530767673259;
    if (WgjrIOyLqQ = 77334549464854)WgjrIOyLqQ = 88020039785149; WgjrIOyLqQ = 4530767673259;
    if (WgjrIOyLqQ = 77334549464854)WgjrIOyLqQ = 88020039785149; WgjrIOyLqQ = 4530767673259; WgjrIOyLqQ = 97270373438329;

    float AdjUOIPKrD = 73904092186126; AdjUOIPKrD = 41573195921416; if (AdjUOIPKrD = 35923072690032) AdjUOIPKrD = 98600205609811; AdjUOIPKrD = 25340105480668; AdjUOIPKrD = 54806682534010;
    if (AdjUOIPKrD = 15067679860020)AdjUOIPKrD = 26900326483975; AdjUOIPKrD = 49315194743220;
    if (AdjUOIPKrD = 84569202244409)AdjUOIPKrD = 26900326483975; AdjUOIPKrD = 49315194743220;
    if (AdjUOIPKrD = 84569202244409)AdjUOIPKrD = 26900326483975; AdjUOIPKrD = 49315194743220;
    if (AdjUOIPKrD = 84569202244409)AdjUOIPKrD = 26900326483975; AdjUOIPKrD = 49315194743220;
    if (AdjUOIPKrD = 84569202244409)AdjUOIPKrD = 26900326483975; AdjUOIPKrD = 49315194743220; AdjUOIPKrD = 34590554745940;

    float rVIRSnpTRi = 97904258779919; rVIRSnpTRi = 41630836675552; if (rVIRSnpTRi = 7075844093520) rVIRSnpTRi = 11216201118138; rVIRSnpTRi = 99833403180285; rVIRSnpTRi = 31802859983340;
    if (rVIRSnpTRi = 62963561121620)rVIRSnpTRi = 40935201342983; rVIRSnpTRi = 7512303407849;
    if (rVIRSnpTRi = 99920865801751)rVIRSnpTRi = 40935201342983; rVIRSnpTRi = 7512303407849;
    if (rVIRSnpTRi = 99920865801751)rVIRSnpTRi = 40935201342983; rVIRSnpTRi = 7512303407849;
    if (rVIRSnpTRi = 99920865801751)rVIRSnpTRi = 40935201342983; rVIRSnpTRi = 7512303407849;
    if (rVIRSnpTRi = 99920865801751)rVIRSnpTRi = 40935201342983; rVIRSnpTRi = 7512303407849; rVIRSnpTRi = 64404637338578;

    float HWsYJrCcHs = 983633219342; HWsYJrCcHs = 77990361000025; if (HWsYJrCcHs = 69029955911713) HWsYJrCcHs = 89696487064400; HWsYJrCcHs = 98315907208532; HWsYJrCcHs = 72085329831590;
    if (HWsYJrCcHs = 70845678969648)HWsYJrCcHs = 59117139322270; HWsYJrCcHs = 71142001659531;
    if (HWsYJrCcHs = 48149219349604)HWsYJrCcHs = 59117139322270; HWsYJrCcHs = 71142001659531;
    if (HWsYJrCcHs = 48149219349604)HWsYJrCcHs = 59117139322270; HWsYJrCcHs = 71142001659531;
    if (HWsYJrCcHs = 48149219349604)HWsYJrCcHs = 59117139322270; HWsYJrCcHs = 71142001659531;
    if (HWsYJrCcHs = 48149219349604)HWsYJrCcHs = 59117139322270; HWsYJrCcHs = 71142001659531; HWsYJrCcHs = 86768333152662;

    float QdfVUDYNOV = 44216461942397; QdfVUDYNOV = 5413462441543; if (QdfVUDYNOV = 90243186509251) QdfVUDYNOV = 31640075478096; QdfVUDYNOV = 81896763060787; QdfVUDYNOV = 30607878189676;
    if (QdfVUDYNOV = 49420323164007)QdfVUDYNOV = 65092513236243; QdfVUDYNOV = 20209772475088;
    if (QdfVUDYNOV = 45105847585615)QdfVUDYNOV = 65092513236243; QdfVUDYNOV = 20209772475088;
    if (QdfVUDYNOV = 45105847585615)QdfVUDYNOV = 65092513236243; QdfVUDYNOV = 20209772475088;
    if (QdfVUDYNOV = 45105847585615)QdfVUDYNOV = 65092513236243; QdfVUDYNOV = 20209772475088;
    if (QdfVUDYNOV = 45105847585615)QdfVUDYNOV = 65092513236243; QdfVUDYNOV = 20209772475088; QdfVUDYNOV = 1046842567784;

    float pXQylaQUrI = 1751576301089; pXQylaQUrI = 99556549471311; if (pXQylaQUrI = 45517947755105) pXQylaQUrI = 68566284616440; pXQylaQUrI = 94299296135684; pXQylaQUrI = 61356849429929;
    if (pXQylaQUrI = 60806796856628)pXQylaQUrI = 77551053831135; pXQylaQUrI = 711410933820;
    if (pXQylaQUrI = 42942996504734)pXQylaQUrI = 77551053831135; pXQylaQUrI = 711410933820;
    if (pXQylaQUrI = 42942996504734)pXQylaQUrI = 77551053831135; pXQylaQUrI = 711410933820;
    if (pXQylaQUrI = 42942996504734)pXQylaQUrI = 77551053831135; pXQylaQUrI = 711410933820;
    if (pXQylaQUrI = 42942996504734)pXQylaQUrI = 77551053831135; pXQylaQUrI = 711410933820; pXQylaQUrI = 31117227853368;

    float dTDtUzvqET = 40797612244347; dTDtUzvqET = 22472231111563; if (dTDtUzvqET = 85987192417909) dTDtUzvqET = 99389454520099; dTDtUzvqET = 89561714987378; dTDtUzvqET = 49873788956171;
    if (dTDtUzvqET = 99900289938945)dTDtUzvqET = 24179095023341; dTDtUzvqET = 21488929911170;
    if (dTDtUzvqET = 62428647767192)dTDtUzvqET = 24179095023341; dTDtUzvqET = 21488929911170;
    if (dTDtUzvqET = 62428647767192)dTDtUzvqET = 24179095023341; dTDtUzvqET = 21488929911170;
    if (dTDtUzvqET = 62428647767192)dTDtUzvqET = 24179095023341; dTDtUzvqET = 21488929911170;
    if (dTDtUzvqET = 62428647767192)dTDtUzvqET = 24179095023341; dTDtUzvqET = 21488929911170; dTDtUzvqET = 10647874632599;
}

void wNQMrDWgFpbPuybH() {
    float aWHMNkkXcr = 20418069825927; aWHMNkkXcr = 99907287255837; if (aWHMNkkXcr = 92292889007106) aWHMNkkXcr = 12390075972381; aWHMNkkXcr = 39561327037057; aWHMNkkXcr = 70370573956132;
    if (aWHMNkkXcr = 95572681239007)aWHMNkkXcr = 90071061239971; aWHMNkkXcr = 48834567741412;
    if (aWHMNkkXcr = 34003318100209)aWHMNkkXcr = 90071061239971; aWHMNkkXcr = 48834567741412;
    if (aWHMNkkXcr = 34003318100209)aWHMNkkXcr = 90071061239971; aWHMNkkXcr = 48834567741412;
    if (aWHMNkkXcr = 34003318100209)aWHMNkkXcr = 90071061239971; aWHMNkkXcr = 48834567741412;
    if (aWHMNkkXcr = 34003318100209)aWHMNkkXcr = 90071061239971; aWHMNkkXcr = 48834567741412; aWHMNkkXcr = 33990045973454;

    float jxDFmDAvgW = 67420644943338; jxDFmDAvgW = 94824806516424; if (jxDFmDAvgW = 87264437125891) jxDFmDAvgW = 31786122725348; jxDFmDAvgW = 8362902049659; jxDFmDAvgW = 2049659836290;
    if (jxDFmDAvgW = 93883433178612)jxDFmDAvgW = 71258912376883; jxDFmDAvgW = 66838875102570;
    if (jxDFmDAvgW = 17795045324754)jxDFmDAvgW = 71258912376883; jxDFmDAvgW = 66838875102570;
    if (jxDFmDAvgW = 17795045324754)jxDFmDAvgW = 71258912376883; jxDFmDAvgW = 66838875102570;
    if (jxDFmDAvgW = 17795045324754)jxDFmDAvgW = 71258912376883; jxDFmDAvgW = 66838875102570;
    if (jxDFmDAvgW = 17795045324754)jxDFmDAvgW = 71258912376883; jxDFmDAvgW = 66838875102570; jxDFmDAvgW = 59510884912662;

    float XevrSxLbFJ = 3720829600438; XevrSxLbFJ = 9538474647244; if (XevrSxLbFJ = 44703272049001) XevrSxLbFJ = 67295174400962; XevrSxLbFJ = 8009502802237; XevrSxLbFJ = 8022378009502;
    if (XevrSxLbFJ = 75872706729517)XevrSxLbFJ = 20490015740367; XevrSxLbFJ = 92882377796112;
    if (XevrSxLbFJ = 9291029935286)XevrSxLbFJ = 20490015740367; XevrSxLbFJ = 92882377796112;
    if (XevrSxLbFJ = 9291029935286)XevrSxLbFJ = 20490015740367; XevrSxLbFJ = 92882377796112;
    if (XevrSxLbFJ = 9291029935286)XevrSxLbFJ = 20490015740367; XevrSxLbFJ = 92882377796112;
    if (XevrSxLbFJ = 9291029935286)XevrSxLbFJ = 20490015740367; XevrSxLbFJ = 92882377796112; XevrSxLbFJ = 7700659756268;

    float kWtcpnRcnd = 67641787181246; kWtcpnRcnd = 67086211410917; if (kWtcpnRcnd = 26705808892018) kWtcpnRcnd = 631575726321; kWtcpnRcnd = 76155861797219; kWtcpnRcnd = 17972197615586;
    if (kWtcpnRcnd = 5572432631575)kWtcpnRcnd = 88920181932764; kWtcpnRcnd = 1022845764895;
    if (kWtcpnRcnd = 62549325011260)kWtcpnRcnd = 88920181932764; kWtcpnRcnd = 1022845764895;
    if (kWtcpnRcnd = 62549325011260)kWtcpnRcnd = 88920181932764; kWtcpnRcnd = 1022845764895;
    if (kWtcpnRcnd = 62549325011260)kWtcpnRcnd = 88920181932764; kWtcpnRcnd = 1022845764895;
    if (kWtcpnRcnd = 62549325011260)kWtcpnRcnd = 88920181932764; kWtcpnRcnd = 1022845764895; kWtcpnRcnd = 64047487592208;

    float SlsjkWdMHl = 4510536148821; SlsjkWdMHl = 76291973772881; if (SlsjkWdMHl = 27152491182089) SlsjkWdMHl = 55957681020499; SlsjkWdMHl = 9318466652203; SlsjkWdMHl = 6522039318466;
    if (SlsjkWdMHl = 59630755595768)SlsjkWdMHl = 11820894961871; SlsjkWdMHl = 12342555578665;
    if (SlsjkWdMHl = 42196287649155)SlsjkWdMHl = 11820894961871; SlsjkWdMHl = 12342555578665;
    if (SlsjkWdMHl = 42196287649155)SlsjkWdMHl = 11820894961871; SlsjkWdMHl = 12342555578665;
    if (SlsjkWdMHl = 42196287649155)SlsjkWdMHl = 11820894961871; SlsjkWdMHl = 12342555578665;
    if (SlsjkWdMHl = 42196287649155)SlsjkWdMHl = 11820894961871; SlsjkWdMHl = 12342555578665; SlsjkWdMHl = 80796716418758;

    float ccBhPbcyNO = 29842976532841; ccBhPbcyNO = 27235577540951; if (ccBhPbcyNO = 80998936821817) ccBhPbcyNO = 58516042258673; ccBhPbcyNO = 26952441839006; ccBhPbcyNO = 18390062695244;
    if (ccBhPbcyNO = 59620345851604)ccBhPbcyNO = 68218174277227; ccBhPbcyNO = 24146072964123;
    if (ccBhPbcyNO = 80337142045521)ccBhPbcyNO = 68218174277227; ccBhPbcyNO = 24146072964123;
    if (ccBhPbcyNO = 80337142045521)ccBhPbcyNO = 68218174277227; ccBhPbcyNO = 24146072964123;
    if (ccBhPbcyNO = 80337142045521)ccBhPbcyNO = 68218174277227; ccBhPbcyNO = 24146072964123;
    if (ccBhPbcyNO = 80337142045521)ccBhPbcyNO = 68218174277227; ccBhPbcyNO = 24146072964123; ccBhPbcyNO = 66460446572909;

    float AdUXggwPKA = 78114041741432; AdUXggwPKA = 6335938948879; if (AdUXggwPKA = 59457136832244) AdUXggwPKA = 10297454178618; AdUXggwPKA = 44008138752328; AdUXggwPKA = 87523284400813;
    if (AdUXggwPKA = 95740551029745)AdUXggwPKA = 6832244496737; AdUXggwPKA = 11357851564991;
    if (AdUXggwPKA = 66878976462610)AdUXggwPKA = 6832244496737; AdUXggwPKA = 11357851564991;
    if (AdUXggwPKA = 66878976462610)AdUXggwPKA = 6832244496737; AdUXggwPKA = 11357851564991;
    if (AdUXggwPKA = 66878976462610)AdUXggwPKA = 6832244496737; AdUXggwPKA = 11357851564991;
    if (AdUXggwPKA = 66878976462610)AdUXggwPKA = 6832244496737; AdUXggwPKA = 11357851564991; AdUXggwPKA = 14726897370074;
}

// TODO add more

int main(void) {
    double sensitivity = 0.52;
    double smoothing = 0.5;
    AllocConsole();
    AttachConsole(GetCurrentProcessId());
    auto w_f = freopen("CON", "w", stdout);
    auto r_f = freopen("CON", "r", stdin);
    cout << "/do ooc izni?" << endl;
    int mode = 0;
    cin >> sensitivity;
    cin >> smoothing;
    cin >> mode;
    fclose(w_f);
    fclose(r_f);
    FreeConsole();
    thread(bot).detach();
    rVPBmwjqYxEYajmh(); // junk code
    mgjeBnjjBCzKWShp(); // junk code
    wNQMrDWgFpbPuybH(); // junk code
    auto t_start = std::chrono::high_resolution_clock::now();
    auto t_end = std::chrono::high_resolution_clock::now();
    auto left_start = std::chrono::high_resolution_clock::now();
    auto left_end = std::chrono::high_resolution_clock::now();
    double sensitivity_x = 1.0 / sensitivity / (screen_width / 1920.0) * 1.08;
    double sensitivity_y = 1.0 / sensitivity / (screen_height / 1080.0) * 1.08;
    bool left_down = false;
    bool assist = false;
    bool toggle = false;
  
    context = interception_create_context();
    interception_set_filter(context, interception_is_mouse, INTERCEPTION_FILTER_MOUSE_ALL);

    while (interception_receive(context, device = interception_wait(context), &stroke, 1) > 0) {
        InterceptionMouseStroke& mstroke = *(InterceptionMouseStroke*)&stroke;
        t_end = std::chrono::high_resolution_clock::now();
        double elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end - t_start).count();

        if (mstroke.state & INTERCEPTION_MOUSE_LEFT_BUTTON_UP) {
            left_down = false;
        }

        if (mstroke.state & INTERCEPTION_MOUSE_BUTTON_5_DOWN) {
            assist = true;
        }

        if (mstroke.state & INTERCEPTION_MOUSE_BUTTON_5_UP) {
            assist = false;
        }

        if (mstroke.state & INTERCEPTION_MOUSE_BUTTON_4_DOWN)
        {
            toggle = !toggle;
        }

        CURSORINFO cursorInfo = { 0 };
        cursorInfo.cbSize = sizeof(cursorInfo);
        GetCursorInfo(&cursorInfo);
        if (cursorInfo.flags != 1 && toggle) {
            if (((mode & 1) > 0) && (mstroke.state & INTERCEPTION_MOUSE_LEFT_BUTTON_DOWN)) {
                left_down = true;
                if (elapsed_time_ms > 7) {
                    t_start = std::chrono::high_resolution_clock::now();
                    left_start = std::chrono::high_resolution_clock::now();
                    if (aim_x != 0 || aim_y != 0) {
                        mstroke.x += double(aim_x) * sensitivity_x;
                        mstroke.y += double(aim_y) * sensitivity_y;
                    }
                }
            }
            else if (((mode & 2) > 0) && (mstroke.flags == 0) && toggle) {
                if (elapsed_time_ms > 7) {
                    t_start = std::chrono::high_resolution_clock::now();
                    if (aim_x != 0 || aim_y != 0) {

                        if (aim_x >= -15 && aim_x <= 15 && aim_y >= -30 && aim_y <= 5 && assist && mstroke.state != INTERCEPTION_MOUSE_LEFT_BUTTON_DOWN)
                        {
                            unsigned short storedstate = mstroke.state;
                            int storedx = mstroke.x;
                            int storedy = mstroke.y;
                            mstroke.x = 0;
                            mstroke.y = 0;
                            mstroke.state = INTERCEPTION_MOUSE_LEFT_BUTTON_DOWN;
                            interception_send(context, device, &stroke, 1);
                            mstroke.state = INTERCEPTION_MOUSE_LEFT_BUTTON_UP;
                            interception_send(context, device, &stroke, 1);
                            mstroke.state = storedstate;
                            mstroke.x = storedx;
                            mstroke.y = storedy;
                        }

                        left_end = std::chrono::high_resolution_clock::now();
                        double recoil_ms = std::chrono::duration<double, std::milli>(left_end - left_start).count();
                        double extra = 38.0 * (screen_height / 1080.0) * (recoil_ms / 1000.0);
                        if (!left_down) {
                            extra = 0;
                        }
                        else if (extra > 38.0) {
                            extra = 38.0;
                        }
                        double v_x = double(aim_x) * sensitivity_x * smoothing;
                        double v_y = double(aim_y + extra) * sensitivity_y * smoothing;
                        if (fabs(v_x) < 1.0) {
                            v_x = v_x > 0 ? 1.05 : -1.05;
                        }
                        if (fabs(v_y) < 1.0) {
                            v_y = v_y > 0 ? 1.05 : -1.05;
                        }
                        mstroke.x += v_x;
                        mstroke.y += v_y;
                    }
                }
            }
        }

        interception_send(context, device, &stroke, 1);
    }

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(hModule);
            CreateThread(0, 0, (LPTHREAD_START_ROUTINE)main, 0, 0, 0);
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            interception_destroy_context(context);
            if (screenData) {
                free(screenData);
            }
            break;
    }

    return TRUE;
}
