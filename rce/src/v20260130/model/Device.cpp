/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/rce/v20260130/model/Device.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Device::Device() :
    m_deviceIdHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_brandHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_systemVersionHasBeenSet(false),
    m_sdkBuildVersionHasBeenSet(false)
{
}

CoreInternalOutcome Device::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("Brand") && !value["Brand"].IsNull())
    {
        if (!value["Brand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.Brand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brand = string(value["Brand"].GetString());
        m_brandHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("SystemVersion") && !value["SystemVersion"].IsNull())
    {
        if (!value["SystemVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.SystemVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemVersion = string(value["SystemVersion"].GetString());
        m_systemVersionHasBeenSet = true;
    }

    if (value.HasMember("SdkBuildVersion") && !value["SdkBuildVersion"].IsNull())
    {
        if (!value["SdkBuildVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.SdkBuildVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkBuildVersion = string(value["SdkBuildVersion"].GetString());
        m_sdkBuildVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Device::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_brandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brand.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_systemVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkBuildVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkBuildVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkBuildVersion.c_str(), allocator).Move(), allocator);
    }

}


string Device::GetDeviceId() const
{
    return m_deviceId;
}

void Device::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool Device::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string Device::GetAppVersion() const
{
    return m_appVersion;
}

void Device::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool Device::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string Device::GetBrand() const
{
    return m_brand;
}

void Device::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool Device::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

string Device::GetClientIp() const
{
    return m_clientIp;
}

void Device::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool Device::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

string Device::GetModel() const
{
    return m_model;
}

void Device::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool Device::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string Device::GetNetworkType() const
{
    return m_networkType;
}

void Device::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool Device::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string Device::GetPackageName() const
{
    return m_packageName;
}

void Device::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool Device::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string Device::GetPlatform() const
{
    return m_platform;
}

void Device::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool Device::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string Device::GetSystemVersion() const
{
    return m_systemVersion;
}

void Device::SetSystemVersion(const string& _systemVersion)
{
    m_systemVersion = _systemVersion;
    m_systemVersionHasBeenSet = true;
}

bool Device::SystemVersionHasBeenSet() const
{
    return m_systemVersionHasBeenSet;
}

string Device::GetSdkBuildVersion() const
{
    return m_sdkBuildVersion;
}

void Device::SetSdkBuildVersion(const string& _sdkBuildVersion)
{
    m_sdkBuildVersion = _sdkBuildVersion;
    m_sdkBuildVersionHasBeenSet = true;
}

bool Device::SdkBuildVersionHasBeenSet() const
{
    return m_sdkBuildVersionHasBeenSet;
}

