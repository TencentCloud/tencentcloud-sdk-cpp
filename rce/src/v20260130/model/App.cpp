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

#include <tencentcloud/rce/v20260130/model/App.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

App::App() :
    m_oSHasBeenSet(false),
    m_oSVersionHasBeenSet(false),
    m_deviceManufacturerHasBeenSet(false),
    m_deviceModelHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_clientLanguageHasBeenSet(false)
{
}

CoreInternalOutcome App::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OS") && !value["OS"].IsNull())
    {
        if (!value["OS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `App.OS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oS = string(value["OS"].GetString());
        m_oSHasBeenSet = true;
    }

    if (value.HasMember("OSVersion") && !value["OSVersion"].IsNull())
    {
        if (!value["OSVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `App.OSVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oSVersion = string(value["OSVersion"].GetString());
        m_oSVersionHasBeenSet = true;
    }

    if (value.HasMember("DeviceManufacturer") && !value["DeviceManufacturer"].IsNull())
    {
        if (!value["DeviceManufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `App.DeviceManufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceManufacturer = string(value["DeviceManufacturer"].GetString());
        m_deviceManufacturerHasBeenSet = true;
    }

    if (value.HasMember("DeviceModel") && !value["DeviceModel"].IsNull())
    {
        if (!value["DeviceModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `App.DeviceModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceModel = string(value["DeviceModel"].GetString());
        m_deviceModelHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `App.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `App.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `App.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("ClientLanguage") && !value["ClientLanguage"].IsNull())
    {
        if (!value["ClientLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `App.ClientLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientLanguage = string(value["ClientLanguage"].GetString());
        m_clientLanguageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void App::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_oSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oS.c_str(), allocator).Move(), allocator);
    }

    if (m_oSVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OSVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oSVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceManufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceManufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceManufacturer.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceModel.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clientLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientLanguage.c_str(), allocator).Move(), allocator);
    }

}


string App::GetOS() const
{
    return m_oS;
}

void App::SetOS(const string& _oS)
{
    m_oS = _oS;
    m_oSHasBeenSet = true;
}

bool App::OSHasBeenSet() const
{
    return m_oSHasBeenSet;
}

string App::GetOSVersion() const
{
    return m_oSVersion;
}

void App::SetOSVersion(const string& _oSVersion)
{
    m_oSVersion = _oSVersion;
    m_oSVersionHasBeenSet = true;
}

bool App::OSVersionHasBeenSet() const
{
    return m_oSVersionHasBeenSet;
}

string App::GetDeviceManufacturer() const
{
    return m_deviceManufacturer;
}

void App::SetDeviceManufacturer(const string& _deviceManufacturer)
{
    m_deviceManufacturer = _deviceManufacturer;
    m_deviceManufacturerHasBeenSet = true;
}

bool App::DeviceManufacturerHasBeenSet() const
{
    return m_deviceManufacturerHasBeenSet;
}

string App::GetDeviceModel() const
{
    return m_deviceModel;
}

void App::SetDeviceModel(const string& _deviceModel)
{
    m_deviceModel = _deviceModel;
    m_deviceModelHasBeenSet = true;
}

bool App::DeviceModelHasBeenSet() const
{
    return m_deviceModelHasBeenSet;
}

string App::GetDeviceId() const
{
    return m_deviceId;
}

void App::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool App::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string App::GetAppName() const
{
    return m_appName;
}

void App::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool App::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string App::GetAppVersion() const
{
    return m_appVersion;
}

void App::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool App::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string App::GetClientLanguage() const
{
    return m_clientLanguage;
}

void App::SetClientLanguage(const string& _clientLanguage)
{
    m_clientLanguage = _clientLanguage;
    m_clientLanguageHasBeenSet = true;
}

bool App::ClientLanguageHasBeenSet() const
{
    return m_clientLanguageHasBeenSet;
}

