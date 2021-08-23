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

#include <tencentcloud/iotvideo/v20191126/model/DeviceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

DeviceData::DeviceData() :
    m_tidHasBeenSet(false),
    m_activeTimeHasBeenSet(false),
    m_disabledHasBeenSet(false),
    m_otaVersionHasBeenSet(false),
    m_onlineHasBeenSet(false),
    m_lastOnlineTimeHasBeenSet(false),
    m_iotModelHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_whiteBoxSoUrlHasBeenSet(false),
    m_streamStatusHasBeenSet(false)
{
}

CoreInternalOutcome DeviceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tid") && !value["Tid"].IsNull())
    {
        if (!value["Tid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceData.Tid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tid = string(value["Tid"].GetString());
        m_tidHasBeenSet = true;
    }

    if (value.HasMember("ActiveTime") && !value["ActiveTime"].IsNull())
    {
        if (!value["ActiveTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceData.ActiveTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activeTime = value["ActiveTime"].GetUint64();
        m_activeTimeHasBeenSet = true;
    }

    if (value.HasMember("Disabled") && !value["Disabled"].IsNull())
    {
        if (!value["Disabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceData.Disabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disabled = value["Disabled"].GetBool();
        m_disabledHasBeenSet = true;
    }

    if (value.HasMember("OtaVersion") && !value["OtaVersion"].IsNull())
    {
        if (!value["OtaVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceData.OtaVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otaVersion = string(value["OtaVersion"].GetString());
        m_otaVersionHasBeenSet = true;
    }

    if (value.HasMember("Online") && !value["Online"].IsNull())
    {
        if (!value["Online"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceData.Online` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_online = value["Online"].GetUint64();
        m_onlineHasBeenSet = true;
    }

    if (value.HasMember("LastOnlineTime") && !value["LastOnlineTime"].IsNull())
    {
        if (!value["LastOnlineTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceData.LastOnlineTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastOnlineTime = value["LastOnlineTime"].GetUint64();
        m_lastOnlineTimeHasBeenSet = true;
    }

    if (value.HasMember("IotModel") && !value["IotModel"].IsNull())
    {
        if (!value["IotModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceData.IotModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iotModel = string(value["IotModel"].GetString());
        m_iotModelHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceData.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceData.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("Certificate") && !value["Certificate"].IsNull())
    {
        if (!value["Certificate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceData.Certificate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificate = string(value["Certificate"].GetString());
        m_certificateHasBeenSet = true;
    }

    if (value.HasMember("WhiteBoxSoUrl") && !value["WhiteBoxSoUrl"].IsNull())
    {
        if (!value["WhiteBoxSoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceData.WhiteBoxSoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_whiteBoxSoUrl = string(value["WhiteBoxSoUrl"].GetString());
        m_whiteBoxSoUrlHasBeenSet = true;
    }

    if (value.HasMember("StreamStatus") && !value["StreamStatus"].IsNull())
    {
        if (!value["StreamStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceData.StreamStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_streamStatus = value["StreamStatus"].GetBool();
        m_streamStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_activeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeTime, allocator);
    }

    if (m_disabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disabled, allocator);
    }

    if (m_otaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtaVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_onlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Online";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_online, allocator);
    }

    if (m_lastOnlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOnlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastOnlineTime, allocator);
    }

    if (m_iotModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IotModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iotModel.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificate.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteBoxSoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteBoxSoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_whiteBoxSoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_streamStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamStatus, allocator);
    }

}


string DeviceData::GetTid() const
{
    return m_tid;
}

void DeviceData::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool DeviceData::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

uint64_t DeviceData::GetActiveTime() const
{
    return m_activeTime;
}

void DeviceData::SetActiveTime(const uint64_t& _activeTime)
{
    m_activeTime = _activeTime;
    m_activeTimeHasBeenSet = true;
}

bool DeviceData::ActiveTimeHasBeenSet() const
{
    return m_activeTimeHasBeenSet;
}

bool DeviceData::GetDisabled() const
{
    return m_disabled;
}

void DeviceData::SetDisabled(const bool& _disabled)
{
    m_disabled = _disabled;
    m_disabledHasBeenSet = true;
}

bool DeviceData::DisabledHasBeenSet() const
{
    return m_disabledHasBeenSet;
}

string DeviceData::GetOtaVersion() const
{
    return m_otaVersion;
}

void DeviceData::SetOtaVersion(const string& _otaVersion)
{
    m_otaVersion = _otaVersion;
    m_otaVersionHasBeenSet = true;
}

bool DeviceData::OtaVersionHasBeenSet() const
{
    return m_otaVersionHasBeenSet;
}

uint64_t DeviceData::GetOnline() const
{
    return m_online;
}

void DeviceData::SetOnline(const uint64_t& _online)
{
    m_online = _online;
    m_onlineHasBeenSet = true;
}

bool DeviceData::OnlineHasBeenSet() const
{
    return m_onlineHasBeenSet;
}

uint64_t DeviceData::GetLastOnlineTime() const
{
    return m_lastOnlineTime;
}

void DeviceData::SetLastOnlineTime(const uint64_t& _lastOnlineTime)
{
    m_lastOnlineTime = _lastOnlineTime;
    m_lastOnlineTimeHasBeenSet = true;
}

bool DeviceData::LastOnlineTimeHasBeenSet() const
{
    return m_lastOnlineTimeHasBeenSet;
}

string DeviceData::GetIotModel() const
{
    return m_iotModel;
}

void DeviceData::SetIotModel(const string& _iotModel)
{
    m_iotModel = _iotModel;
    m_iotModelHasBeenSet = true;
}

bool DeviceData::IotModelHasBeenSet() const
{
    return m_iotModelHasBeenSet;
}

string DeviceData::GetDeviceName() const
{
    return m_deviceName;
}

void DeviceData::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DeviceData::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DeviceData::GetProductId() const
{
    return m_productId;
}

void DeviceData::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DeviceData::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DeviceData::GetCertificate() const
{
    return m_certificate;
}

void DeviceData::SetCertificate(const string& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool DeviceData::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

string DeviceData::GetWhiteBoxSoUrl() const
{
    return m_whiteBoxSoUrl;
}

void DeviceData::SetWhiteBoxSoUrl(const string& _whiteBoxSoUrl)
{
    m_whiteBoxSoUrl = _whiteBoxSoUrl;
    m_whiteBoxSoUrlHasBeenSet = true;
}

bool DeviceData::WhiteBoxSoUrlHasBeenSet() const
{
    return m_whiteBoxSoUrlHasBeenSet;
}

bool DeviceData::GetStreamStatus() const
{
    return m_streamStatus;
}

void DeviceData::SetStreamStatus(const bool& _streamStatus)
{
    m_streamStatus = _streamStatus;
    m_streamStatusHasBeenSet = true;
}

bool DeviceData::StreamStatusHasBeenSet() const
{
    return m_streamStatusHasBeenSet;
}

