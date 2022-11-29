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

#include <tencentcloud/iotexplorer/v20190423/model/DeviceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DeviceInfo::DeviceInfo() :
    m_deviceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_devicePskHasBeenSet(false),
    m_firstOnlineTimeHasBeenSet(false),
    m_loginTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_deviceCertHasBeenSet(false),
    m_logLevelHasBeenSet(false),
    m_devAddrHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_devEUIHasBeenSet(false),
    m_appSKeyHasBeenSet(false),
    m_nwkSKeyHasBeenSet(false),
    m_createUserIdHasBeenSet(false),
    m_creatorNickNameHasBeenSet(false),
    m_enableStateHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_isLoraHasBeenSet(false)
{
}

CoreInternalOutcome DeviceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DevicePsk") && !value["DevicePsk"].IsNull())
    {
        if (!value["DevicePsk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DevicePsk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devicePsk = string(value["DevicePsk"].GetString());
        m_devicePskHasBeenSet = true;
    }

    if (value.HasMember("FirstOnlineTime") && !value["FirstOnlineTime"].IsNull())
    {
        if (!value["FirstOnlineTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.FirstOnlineTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_firstOnlineTime = value["FirstOnlineTime"].GetInt64();
        m_firstOnlineTimeHasBeenSet = true;
    }

    if (value.HasMember("LoginTime") && !value["LoginTime"].IsNull())
    {
        if (!value["LoginTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.LoginTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loginTime = value["LoginTime"].GetInt64();
        m_loginTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("DeviceCert") && !value["DeviceCert"].IsNull())
    {
        if (!value["DeviceCert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DeviceCert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCert = string(value["DeviceCert"].GetString());
        m_deviceCertHasBeenSet = true;
    }

    if (value.HasMember("LogLevel") && !value["LogLevel"].IsNull())
    {
        if (!value["LogLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.LogLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logLevel = value["LogLevel"].GetInt64();
        m_logLevelHasBeenSet = true;
    }

    if (value.HasMember("DevAddr") && !value["DevAddr"].IsNull())
    {
        if (!value["DevAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DevAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devAddr = string(value["DevAddr"].GetString());
        m_devAddrHasBeenSet = true;
    }

    if (value.HasMember("AppKey") && !value["AppKey"].IsNull())
    {
        if (!value["AppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.AppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appKey = string(value["AppKey"].GetString());
        m_appKeyHasBeenSet = true;
    }

    if (value.HasMember("DevEUI") && !value["DevEUI"].IsNull())
    {
        if (!value["DevEUI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DevEUI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devEUI = string(value["DevEUI"].GetString());
        m_devEUIHasBeenSet = true;
    }

    if (value.HasMember("AppSKey") && !value["AppSKey"].IsNull())
    {
        if (!value["AppSKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.AppSKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appSKey = string(value["AppSKey"].GetString());
        m_appSKeyHasBeenSet = true;
    }

    if (value.HasMember("NwkSKey") && !value["NwkSKey"].IsNull())
    {
        if (!value["NwkSKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.NwkSKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nwkSKey = string(value["NwkSKey"].GetString());
        m_nwkSKeyHasBeenSet = true;
    }

    if (value.HasMember("CreateUserId") && !value["CreateUserId"].IsNull())
    {
        if (!value["CreateUserId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.CreateUserId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createUserId = value["CreateUserId"].GetInt64();
        m_createUserIdHasBeenSet = true;
    }

    if (value.HasMember("CreatorNickName") && !value["CreatorNickName"].IsNull())
    {
        if (!value["CreatorNickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.CreatorNickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorNickName = string(value["CreatorNickName"].GetString());
        m_creatorNickNameHasBeenSet = true;
    }

    if (value.HasMember("EnableState") && !value["EnableState"].IsNull())
    {
        if (!value["EnableState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.EnableState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableState = value["EnableState"].GetInt64();
        m_enableStateHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("IsLora") && !value["IsLora"].IsNull())
    {
        if (!value["IsLora"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.IsLora` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLora = value["IsLora"].GetBool();
        m_isLoraHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_devicePskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevicePsk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devicePsk.c_str(), allocator).Move(), allocator);
    }

    if (m_firstOnlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstOnlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstOnlineTime, allocator);
    }

    if (m_loginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceCert.c_str(), allocator).Move(), allocator);
    }

    if (m_logLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logLevel, allocator);
    }

    if (m_devAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_devEUIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevEUI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devEUI.c_str(), allocator).Move(), allocator);
    }

    if (m_appSKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppSKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appSKey.c_str(), allocator).Move(), allocator);
    }

    if (m_nwkSKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NwkSKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nwkSKey.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createUserId, allocator);
    }

    if (m_creatorNickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorNickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorNickName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableState, allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_isLoraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLora";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLora, allocator);
    }

}


string DeviceInfo::GetDeviceName() const
{
    return m_deviceName;
}

void DeviceInfo::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DeviceInfo::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

int64_t DeviceInfo::GetStatus() const
{
    return m_status;
}

void DeviceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeviceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeviceInfo::GetDevicePsk() const
{
    return m_devicePsk;
}

void DeviceInfo::SetDevicePsk(const string& _devicePsk)
{
    m_devicePsk = _devicePsk;
    m_devicePskHasBeenSet = true;
}

bool DeviceInfo::DevicePskHasBeenSet() const
{
    return m_devicePskHasBeenSet;
}

int64_t DeviceInfo::GetFirstOnlineTime() const
{
    return m_firstOnlineTime;
}

void DeviceInfo::SetFirstOnlineTime(const int64_t& _firstOnlineTime)
{
    m_firstOnlineTime = _firstOnlineTime;
    m_firstOnlineTimeHasBeenSet = true;
}

bool DeviceInfo::FirstOnlineTimeHasBeenSet() const
{
    return m_firstOnlineTimeHasBeenSet;
}

int64_t DeviceInfo::GetLoginTime() const
{
    return m_loginTime;
}

void DeviceInfo::SetLoginTime(const int64_t& _loginTime)
{
    m_loginTime = _loginTime;
    m_loginTimeHasBeenSet = true;
}

bool DeviceInfo::LoginTimeHasBeenSet() const
{
    return m_loginTimeHasBeenSet;
}

int64_t DeviceInfo::GetCreateTime() const
{
    return m_createTime;
}

void DeviceInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DeviceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DeviceInfo::GetVersion() const
{
    return m_version;
}

void DeviceInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool DeviceInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string DeviceInfo::GetDeviceCert() const
{
    return m_deviceCert;
}

void DeviceInfo::SetDeviceCert(const string& _deviceCert)
{
    m_deviceCert = _deviceCert;
    m_deviceCertHasBeenSet = true;
}

bool DeviceInfo::DeviceCertHasBeenSet() const
{
    return m_deviceCertHasBeenSet;
}

int64_t DeviceInfo::GetLogLevel() const
{
    return m_logLevel;
}

void DeviceInfo::SetLogLevel(const int64_t& _logLevel)
{
    m_logLevel = _logLevel;
    m_logLevelHasBeenSet = true;
}

bool DeviceInfo::LogLevelHasBeenSet() const
{
    return m_logLevelHasBeenSet;
}

string DeviceInfo::GetDevAddr() const
{
    return m_devAddr;
}

void DeviceInfo::SetDevAddr(const string& _devAddr)
{
    m_devAddr = _devAddr;
    m_devAddrHasBeenSet = true;
}

bool DeviceInfo::DevAddrHasBeenSet() const
{
    return m_devAddrHasBeenSet;
}

string DeviceInfo::GetAppKey() const
{
    return m_appKey;
}

void DeviceInfo::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool DeviceInfo::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string DeviceInfo::GetDevEUI() const
{
    return m_devEUI;
}

void DeviceInfo::SetDevEUI(const string& _devEUI)
{
    m_devEUI = _devEUI;
    m_devEUIHasBeenSet = true;
}

bool DeviceInfo::DevEUIHasBeenSet() const
{
    return m_devEUIHasBeenSet;
}

string DeviceInfo::GetAppSKey() const
{
    return m_appSKey;
}

void DeviceInfo::SetAppSKey(const string& _appSKey)
{
    m_appSKey = _appSKey;
    m_appSKeyHasBeenSet = true;
}

bool DeviceInfo::AppSKeyHasBeenSet() const
{
    return m_appSKeyHasBeenSet;
}

string DeviceInfo::GetNwkSKey() const
{
    return m_nwkSKey;
}

void DeviceInfo::SetNwkSKey(const string& _nwkSKey)
{
    m_nwkSKey = _nwkSKey;
    m_nwkSKeyHasBeenSet = true;
}

bool DeviceInfo::NwkSKeyHasBeenSet() const
{
    return m_nwkSKeyHasBeenSet;
}

int64_t DeviceInfo::GetCreateUserId() const
{
    return m_createUserId;
}

void DeviceInfo::SetCreateUserId(const int64_t& _createUserId)
{
    m_createUserId = _createUserId;
    m_createUserIdHasBeenSet = true;
}

bool DeviceInfo::CreateUserIdHasBeenSet() const
{
    return m_createUserIdHasBeenSet;
}

string DeviceInfo::GetCreatorNickName() const
{
    return m_creatorNickName;
}

void DeviceInfo::SetCreatorNickName(const string& _creatorNickName)
{
    m_creatorNickName = _creatorNickName;
    m_creatorNickNameHasBeenSet = true;
}

bool DeviceInfo::CreatorNickNameHasBeenSet() const
{
    return m_creatorNickNameHasBeenSet;
}

int64_t DeviceInfo::GetEnableState() const
{
    return m_enableState;
}

void DeviceInfo::SetEnableState(const int64_t& _enableState)
{
    m_enableState = _enableState;
    m_enableStateHasBeenSet = true;
}

bool DeviceInfo::EnableStateHasBeenSet() const
{
    return m_enableStateHasBeenSet;
}

string DeviceInfo::GetProductId() const
{
    return m_productId;
}

void DeviceInfo::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DeviceInfo::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DeviceInfo::GetProductName() const
{
    return m_productName;
}

void DeviceInfo::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool DeviceInfo::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string DeviceInfo::GetDeviceType() const
{
    return m_deviceType;
}

void DeviceInfo::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DeviceInfo::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

bool DeviceInfo::GetIsLora() const
{
    return m_isLora;
}

void DeviceInfo::SetIsLora(const bool& _isLora)
{
    m_isLora = _isLora;
    m_isLoraHasBeenSet = true;
}

bool DeviceInfo::IsLoraHasBeenSet() const
{
    return m_isLoraHasBeenSet;
}

