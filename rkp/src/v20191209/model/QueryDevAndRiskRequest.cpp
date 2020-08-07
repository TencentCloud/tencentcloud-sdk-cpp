/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/rkp/v20191209/model/QueryDevAndRiskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rkp::V20191209::Model;
using namespace rapidjson;
using namespace std;

QueryDevAndRiskRequest::QueryDevAndRiskRequest() :
    m_devTypeHasBeenSet(false),
    m_imeiHasBeenSet(false),
    m_macHasBeenSet(false),
    m_aidHasBeenSet(false),
    m_cidHasBeenSet(false),
    m_imsiHasBeenSet(false),
    m_dfHasBeenSet(false),
    m_kernelVerHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_dfpHasBeenSet(false),
    m_bootTimeHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_ringListHasBeenSet(false),
    m_fontListHasBeenSet(false),
    m_sensorListHasBeenSet(false),
    m_cpuTypeHasBeenSet(false),
    m_batteryHasBeenSet(false),
    m_oaidHasBeenSet(false),
    m_idfaHasBeenSet(false),
    m_idfvHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_iphoneModelHasBeenSet(false),
    m_fingerprintHasBeenSet(false),
    m_serialIdHasBeenSet(false)
{
}

string QueryDevAndRiskRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_devTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DevType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_devType, allocator);
    }

    if (m_imeiHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Imei";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imei.c_str(), allocator).Move(), allocator);
    }

    if (m_macHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mac";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mac.c_str(), allocator).Move(), allocator);
    }

    if (m_aidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Aid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_aid.c_str(), allocator).Move(), allocator);
    }

    if (m_cidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cid.c_str(), allocator).Move(), allocator);
    }

    if (m_imsiHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Imsi";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imsi.c_str(), allocator).Move(), allocator);
    }

    if (m_dfHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Df";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_df.c_str(), allocator).Move(), allocator);
    }

    if (m_kernelVerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KernelVer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_kernelVer.c_str(), allocator).Move(), allocator);
    }

    if (m_storageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_storage.c_str(), allocator).Move(), allocator);
    }

    if (m_dfpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Dfp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dfp.c_str(), allocator).Move(), allocator);
    }

    if (m_bootTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BootTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_bootTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_ringListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RingList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ringList.c_str(), allocator).Move(), allocator);
    }

    if (m_fontListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FontList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fontList.c_str(), allocator).Move(), allocator);
    }

    if (m_sensorListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SensorList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sensorList.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CpuType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_batteryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Battery";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_battery.c_str(), allocator).Move(), allocator);
    }

    if (m_oaidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Oaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_oaid.c_str(), allocator).Move(), allocator);
    }

    if (m_idfaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Idfa";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_idfa.c_str(), allocator).Move(), allocator);
    }

    if (m_idfvHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Idfv";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_idfv.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_iphoneModelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IphoneModel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_iphoneModel.c_str(), allocator).Move(), allocator);
    }

    if (m_fingerprintHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Fingerprint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fingerprint.c_str(), allocator).Move(), allocator);
    }

    if (m_serialIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SerialId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serialId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t QueryDevAndRiskRequest::GetDevType() const
{
    return m_devType;
}

void QueryDevAndRiskRequest::SetDevType(const int64_t& _devType)
{
    m_devType = _devType;
    m_devTypeHasBeenSet = true;
}

bool QueryDevAndRiskRequest::DevTypeHasBeenSet() const
{
    return m_devTypeHasBeenSet;
}

string QueryDevAndRiskRequest::GetImei() const
{
    return m_imei;
}

void QueryDevAndRiskRequest::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool QueryDevAndRiskRequest::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

string QueryDevAndRiskRequest::GetMac() const
{
    return m_mac;
}

void QueryDevAndRiskRequest::SetMac(const string& _mac)
{
    m_mac = _mac;
    m_macHasBeenSet = true;
}

bool QueryDevAndRiskRequest::MacHasBeenSet() const
{
    return m_macHasBeenSet;
}

string QueryDevAndRiskRequest::GetAid() const
{
    return m_aid;
}

void QueryDevAndRiskRequest::SetAid(const string& _aid)
{
    m_aid = _aid;
    m_aidHasBeenSet = true;
}

bool QueryDevAndRiskRequest::AidHasBeenSet() const
{
    return m_aidHasBeenSet;
}

string QueryDevAndRiskRequest::GetCid() const
{
    return m_cid;
}

void QueryDevAndRiskRequest::SetCid(const string& _cid)
{
    m_cid = _cid;
    m_cidHasBeenSet = true;
}

bool QueryDevAndRiskRequest::CidHasBeenSet() const
{
    return m_cidHasBeenSet;
}

string QueryDevAndRiskRequest::GetImsi() const
{
    return m_imsi;
}

void QueryDevAndRiskRequest::SetImsi(const string& _imsi)
{
    m_imsi = _imsi;
    m_imsiHasBeenSet = true;
}

bool QueryDevAndRiskRequest::ImsiHasBeenSet() const
{
    return m_imsiHasBeenSet;
}

string QueryDevAndRiskRequest::GetDf() const
{
    return m_df;
}

void QueryDevAndRiskRequest::SetDf(const string& _df)
{
    m_df = _df;
    m_dfHasBeenSet = true;
}

bool QueryDevAndRiskRequest::DfHasBeenSet() const
{
    return m_dfHasBeenSet;
}

string QueryDevAndRiskRequest::GetKernelVer() const
{
    return m_kernelVer;
}

void QueryDevAndRiskRequest::SetKernelVer(const string& _kernelVer)
{
    m_kernelVer = _kernelVer;
    m_kernelVerHasBeenSet = true;
}

bool QueryDevAndRiskRequest::KernelVerHasBeenSet() const
{
    return m_kernelVerHasBeenSet;
}

string QueryDevAndRiskRequest::GetStorage() const
{
    return m_storage;
}

void QueryDevAndRiskRequest::SetStorage(const string& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool QueryDevAndRiskRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string QueryDevAndRiskRequest::GetDfp() const
{
    return m_dfp;
}

void QueryDevAndRiskRequest::SetDfp(const string& _dfp)
{
    m_dfp = _dfp;
    m_dfpHasBeenSet = true;
}

bool QueryDevAndRiskRequest::DfpHasBeenSet() const
{
    return m_dfpHasBeenSet;
}

string QueryDevAndRiskRequest::GetBootTime() const
{
    return m_bootTime;
}

void QueryDevAndRiskRequest::SetBootTime(const string& _bootTime)
{
    m_bootTime = _bootTime;
    m_bootTimeHasBeenSet = true;
}

bool QueryDevAndRiskRequest::BootTimeHasBeenSet() const
{
    return m_bootTimeHasBeenSet;
}

string QueryDevAndRiskRequest::GetResolution() const
{
    return m_resolution;
}

void QueryDevAndRiskRequest::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool QueryDevAndRiskRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string QueryDevAndRiskRequest::GetRingList() const
{
    return m_ringList;
}

void QueryDevAndRiskRequest::SetRingList(const string& _ringList)
{
    m_ringList = _ringList;
    m_ringListHasBeenSet = true;
}

bool QueryDevAndRiskRequest::RingListHasBeenSet() const
{
    return m_ringListHasBeenSet;
}

string QueryDevAndRiskRequest::GetFontList() const
{
    return m_fontList;
}

void QueryDevAndRiskRequest::SetFontList(const string& _fontList)
{
    m_fontList = _fontList;
    m_fontListHasBeenSet = true;
}

bool QueryDevAndRiskRequest::FontListHasBeenSet() const
{
    return m_fontListHasBeenSet;
}

string QueryDevAndRiskRequest::GetSensorList() const
{
    return m_sensorList;
}

void QueryDevAndRiskRequest::SetSensorList(const string& _sensorList)
{
    m_sensorList = _sensorList;
    m_sensorListHasBeenSet = true;
}

bool QueryDevAndRiskRequest::SensorListHasBeenSet() const
{
    return m_sensorListHasBeenSet;
}

string QueryDevAndRiskRequest::GetCpuType() const
{
    return m_cpuType;
}

void QueryDevAndRiskRequest::SetCpuType(const string& _cpuType)
{
    m_cpuType = _cpuType;
    m_cpuTypeHasBeenSet = true;
}

bool QueryDevAndRiskRequest::CpuTypeHasBeenSet() const
{
    return m_cpuTypeHasBeenSet;
}

string QueryDevAndRiskRequest::GetBattery() const
{
    return m_battery;
}

void QueryDevAndRiskRequest::SetBattery(const string& _battery)
{
    m_battery = _battery;
    m_batteryHasBeenSet = true;
}

bool QueryDevAndRiskRequest::BatteryHasBeenSet() const
{
    return m_batteryHasBeenSet;
}

string QueryDevAndRiskRequest::GetOaid() const
{
    return m_oaid;
}

void QueryDevAndRiskRequest::SetOaid(const string& _oaid)
{
    m_oaid = _oaid;
    m_oaidHasBeenSet = true;
}

bool QueryDevAndRiskRequest::OaidHasBeenSet() const
{
    return m_oaidHasBeenSet;
}

string QueryDevAndRiskRequest::GetIdfa() const
{
    return m_idfa;
}

void QueryDevAndRiskRequest::SetIdfa(const string& _idfa)
{
    m_idfa = _idfa;
    m_idfaHasBeenSet = true;
}

bool QueryDevAndRiskRequest::IdfaHasBeenSet() const
{
    return m_idfaHasBeenSet;
}

string QueryDevAndRiskRequest::GetIdfv() const
{
    return m_idfv;
}

void QueryDevAndRiskRequest::SetIdfv(const string& _idfv)
{
    m_idfv = _idfv;
    m_idfvHasBeenSet = true;
}

bool QueryDevAndRiskRequest::IdfvHasBeenSet() const
{
    return m_idfvHasBeenSet;
}

string QueryDevAndRiskRequest::GetDeviceName() const
{
    return m_deviceName;
}

void QueryDevAndRiskRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool QueryDevAndRiskRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string QueryDevAndRiskRequest::GetIphoneModel() const
{
    return m_iphoneModel;
}

void QueryDevAndRiskRequest::SetIphoneModel(const string& _iphoneModel)
{
    m_iphoneModel = _iphoneModel;
    m_iphoneModelHasBeenSet = true;
}

bool QueryDevAndRiskRequest::IphoneModelHasBeenSet() const
{
    return m_iphoneModelHasBeenSet;
}

string QueryDevAndRiskRequest::GetFingerprint() const
{
    return m_fingerprint;
}

void QueryDevAndRiskRequest::SetFingerprint(const string& _fingerprint)
{
    m_fingerprint = _fingerprint;
    m_fingerprintHasBeenSet = true;
}

bool QueryDevAndRiskRequest::FingerprintHasBeenSet() const
{
    return m_fingerprintHasBeenSet;
}

string QueryDevAndRiskRequest::GetSerialId() const
{
    return m_serialId;
}

void QueryDevAndRiskRequest::SetSerialId(const string& _serialId)
{
    m_serialId = _serialId;
    m_serialIdHasBeenSet = true;
}

bool QueryDevAndRiskRequest::SerialIdHasBeenSet() const
{
    return m_serialIdHasBeenSet;
}


