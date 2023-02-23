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

#include <tencentcloud/mna/v20210119/model/DeviceNetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

DeviceNetInfo::DeviceNetInfo() :
    m_typeHasBeenSet(false),
    m_dataEnableHasBeenSet(false),
    m_uploadLimitHasBeenSet(false),
    m_downloadLimitHasBeenSet(false),
    m_dataRxHasBeenSet(false),
    m_dataTxHasBeenSet(false),
    m_vendorHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_signalStrengthHasBeenSet(false),
    m_ratHasBeenSet(false),
    m_netInfoNameHasBeenSet(false),
    m_downRateHasBeenSet(false),
    m_upRateHasBeenSet(false)
{
}

CoreInternalOutcome DeviceNetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DataEnable") && !value["DataEnable"].IsNull())
    {
        if (!value["DataEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.DataEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dataEnable = value["DataEnable"].GetBool();
        m_dataEnableHasBeenSet = true;
    }

    if (value.HasMember("UploadLimit") && !value["UploadLimit"].IsNull())
    {
        if (!value["UploadLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.UploadLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadLimit = string(value["UploadLimit"].GetString());
        m_uploadLimitHasBeenSet = true;
    }

    if (value.HasMember("DownloadLimit") && !value["DownloadLimit"].IsNull())
    {
        if (!value["DownloadLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.DownloadLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadLimit = string(value["DownloadLimit"].GetString());
        m_downloadLimitHasBeenSet = true;
    }

    if (value.HasMember("DataRx") && !value["DataRx"].IsNull())
    {
        if (!value["DataRx"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.DataRx` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataRx = value["DataRx"].GetUint64();
        m_dataRxHasBeenSet = true;
    }

    if (value.HasMember("DataTx") && !value["DataTx"].IsNull())
    {
        if (!value["DataTx"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.DataTx` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataTx = value["DataTx"].GetUint64();
        m_dataTxHasBeenSet = true;
    }

    if (value.HasMember("Vendor") && !value["Vendor"].IsNull())
    {
        if (!value["Vendor"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.Vendor` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vendor = value["Vendor"].GetInt64();
        m_vendorHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("SignalStrength") && !value["SignalStrength"].IsNull())
    {
        if (!value["SignalStrength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.SignalStrength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_signalStrength = value["SignalStrength"].GetInt64();
        m_signalStrengthHasBeenSet = true;
    }

    if (value.HasMember("Rat") && !value["Rat"].IsNull())
    {
        if (!value["Rat"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.Rat` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rat = value["Rat"].GetInt64();
        m_ratHasBeenSet = true;
    }

    if (value.HasMember("NetInfoName") && !value["NetInfoName"].IsNull())
    {
        if (!value["NetInfoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.NetInfoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netInfoName = string(value["NetInfoName"].GetString());
        m_netInfoNameHasBeenSet = true;
    }

    if (value.HasMember("DownRate") && !value["DownRate"].IsNull())
    {
        if (!value["DownRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.DownRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_downRate = value["DownRate"].GetDouble();
        m_downRateHasBeenSet = true;
    }

    if (value.HasMember("UpRate") && !value["UpRate"].IsNull())
    {
        if (!value["UpRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.UpRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_upRate = value["UpRate"].GetDouble();
        m_upRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceNetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_dataEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataEnable, allocator);
    }

    if (m_uploadLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_dataRxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataRx, allocator);
    }

    if (m_dataTxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataTx, allocator);
    }

    if (m_vendorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vendor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vendor, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_signalStrengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignalStrength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signalStrength, allocator);
    }

    if (m_ratHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rat, allocator);
    }

    if (m_netInfoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetInfoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netInfoName.c_str(), allocator).Move(), allocator);
    }

    if (m_downRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_downRate, allocator);
    }

    if (m_upRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upRate, allocator);
    }

}


int64_t DeviceNetInfo::GetType() const
{
    return m_type;
}

void DeviceNetInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DeviceNetInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool DeviceNetInfo::GetDataEnable() const
{
    return m_dataEnable;
}

void DeviceNetInfo::SetDataEnable(const bool& _dataEnable)
{
    m_dataEnable = _dataEnable;
    m_dataEnableHasBeenSet = true;
}

bool DeviceNetInfo::DataEnableHasBeenSet() const
{
    return m_dataEnableHasBeenSet;
}

string DeviceNetInfo::GetUploadLimit() const
{
    return m_uploadLimit;
}

void DeviceNetInfo::SetUploadLimit(const string& _uploadLimit)
{
    m_uploadLimit = _uploadLimit;
    m_uploadLimitHasBeenSet = true;
}

bool DeviceNetInfo::UploadLimitHasBeenSet() const
{
    return m_uploadLimitHasBeenSet;
}

string DeviceNetInfo::GetDownloadLimit() const
{
    return m_downloadLimit;
}

void DeviceNetInfo::SetDownloadLimit(const string& _downloadLimit)
{
    m_downloadLimit = _downloadLimit;
    m_downloadLimitHasBeenSet = true;
}

bool DeviceNetInfo::DownloadLimitHasBeenSet() const
{
    return m_downloadLimitHasBeenSet;
}

uint64_t DeviceNetInfo::GetDataRx() const
{
    return m_dataRx;
}

void DeviceNetInfo::SetDataRx(const uint64_t& _dataRx)
{
    m_dataRx = _dataRx;
    m_dataRxHasBeenSet = true;
}

bool DeviceNetInfo::DataRxHasBeenSet() const
{
    return m_dataRxHasBeenSet;
}

uint64_t DeviceNetInfo::GetDataTx() const
{
    return m_dataTx;
}

void DeviceNetInfo::SetDataTx(const uint64_t& _dataTx)
{
    m_dataTx = _dataTx;
    m_dataTxHasBeenSet = true;
}

bool DeviceNetInfo::DataTxHasBeenSet() const
{
    return m_dataTxHasBeenSet;
}

int64_t DeviceNetInfo::GetVendor() const
{
    return m_vendor;
}

void DeviceNetInfo::SetVendor(const int64_t& _vendor)
{
    m_vendor = _vendor;
    m_vendorHasBeenSet = true;
}

bool DeviceNetInfo::VendorHasBeenSet() const
{
    return m_vendorHasBeenSet;
}

int64_t DeviceNetInfo::GetState() const
{
    return m_state;
}

void DeviceNetInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DeviceNetInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DeviceNetInfo::GetPublicIp() const
{
    return m_publicIp;
}

void DeviceNetInfo::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool DeviceNetInfo::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

int64_t DeviceNetInfo::GetSignalStrength() const
{
    return m_signalStrength;
}

void DeviceNetInfo::SetSignalStrength(const int64_t& _signalStrength)
{
    m_signalStrength = _signalStrength;
    m_signalStrengthHasBeenSet = true;
}

bool DeviceNetInfo::SignalStrengthHasBeenSet() const
{
    return m_signalStrengthHasBeenSet;
}

int64_t DeviceNetInfo::GetRat() const
{
    return m_rat;
}

void DeviceNetInfo::SetRat(const int64_t& _rat)
{
    m_rat = _rat;
    m_ratHasBeenSet = true;
}

bool DeviceNetInfo::RatHasBeenSet() const
{
    return m_ratHasBeenSet;
}

string DeviceNetInfo::GetNetInfoName() const
{
    return m_netInfoName;
}

void DeviceNetInfo::SetNetInfoName(const string& _netInfoName)
{
    m_netInfoName = _netInfoName;
    m_netInfoNameHasBeenSet = true;
}

bool DeviceNetInfo::NetInfoNameHasBeenSet() const
{
    return m_netInfoNameHasBeenSet;
}

double DeviceNetInfo::GetDownRate() const
{
    return m_downRate;
}

void DeviceNetInfo::SetDownRate(const double& _downRate)
{
    m_downRate = _downRate;
    m_downRateHasBeenSet = true;
}

bool DeviceNetInfo::DownRateHasBeenSet() const
{
    return m_downRateHasBeenSet;
}

double DeviceNetInfo::GetUpRate() const
{
    return m_upRate;
}

void DeviceNetInfo::SetUpRate(const double& _upRate)
{
    m_upRate = _upRate;
    m_upRateHasBeenSet = true;
}

bool DeviceNetInfo::UpRateHasBeenSet() const
{
    return m_upRateHasBeenSet;
}

