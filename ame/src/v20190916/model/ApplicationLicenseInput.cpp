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

#include <tencentcloud/ame/v20190916/model/ApplicationLicenseInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

ApplicationLicenseInput::ApplicationLicenseInput() :
    m_appNameHasBeenSet(false),
    m_androidPackageNameHasBeenSet(false),
    m_iOSBundleIdHasBeenSet(false),
    m_pcIdentifierHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationLicenseInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationLicenseInput.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("AndroidPackageName") && !value["AndroidPackageName"].IsNull())
    {
        if (!value["AndroidPackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationLicenseInput.AndroidPackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidPackageName = string(value["AndroidPackageName"].GetString());
        m_androidPackageNameHasBeenSet = true;
    }

    if (value.HasMember("IOSBundleId") && !value["IOSBundleId"].IsNull())
    {
        if (!value["IOSBundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationLicenseInput.IOSBundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iOSBundleId = string(value["IOSBundleId"].GetString());
        m_iOSBundleIdHasBeenSet = true;
    }

    if (value.HasMember("PcIdentifier") && !value["PcIdentifier"].IsNull())
    {
        if (!value["PcIdentifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationLicenseInput.PcIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pcIdentifier = string(value["PcIdentifier"].GetString());
        m_pcIdentifierHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationLicenseInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_androidPackageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidPackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidPackageName.c_str(), allocator).Move(), allocator);
    }

    if (m_iOSBundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IOSBundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iOSBundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_pcIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PcIdentifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pcIdentifier.c_str(), allocator).Move(), allocator);
    }

}


string ApplicationLicenseInput::GetAppName() const
{
    return m_appName;
}

void ApplicationLicenseInput::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool ApplicationLicenseInput::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string ApplicationLicenseInput::GetAndroidPackageName() const
{
    return m_androidPackageName;
}

void ApplicationLicenseInput::SetAndroidPackageName(const string& _androidPackageName)
{
    m_androidPackageName = _androidPackageName;
    m_androidPackageNameHasBeenSet = true;
}

bool ApplicationLicenseInput::AndroidPackageNameHasBeenSet() const
{
    return m_androidPackageNameHasBeenSet;
}

string ApplicationLicenseInput::GetIOSBundleId() const
{
    return m_iOSBundleId;
}

void ApplicationLicenseInput::SetIOSBundleId(const string& _iOSBundleId)
{
    m_iOSBundleId = _iOSBundleId;
    m_iOSBundleIdHasBeenSet = true;
}

bool ApplicationLicenseInput::IOSBundleIdHasBeenSet() const
{
    return m_iOSBundleIdHasBeenSet;
}

string ApplicationLicenseInput::GetPcIdentifier() const
{
    return m_pcIdentifier;
}

void ApplicationLicenseInput::SetPcIdentifier(const string& _pcIdentifier)
{
    m_pcIdentifier = _pcIdentifier;
    m_pcIdentifierHasBeenSet = true;
}

bool ApplicationLicenseInput::PcIdentifierHasBeenSet() const
{
    return m_pcIdentifierHasBeenSet;
}

