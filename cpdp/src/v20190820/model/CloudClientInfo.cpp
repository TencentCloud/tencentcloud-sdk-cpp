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

#include <tencentcloud/cpdp/v20190820/model/CloudClientInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CloudClientInfo::CloudClientInfo() :
    m_clientTypeHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_appUrlHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_packageNameHasBeenSet(false)
{
}

CoreInternalOutcome CloudClientInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientType") && !value["ClientType"].IsNull())
    {
        if (!value["ClientType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudClientInfo.ClientType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientType = string(value["ClientType"].GetString());
        m_clientTypeHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudClientInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("AppUrl") && !value["AppUrl"].IsNull())
    {
        if (!value["AppUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudClientInfo.AppUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appUrl = string(value["AppUrl"].GetString());
        m_appUrlHasBeenSet = true;
    }

    if (value.HasMember("BundleId") && !value["BundleId"].IsNull())
    {
        if (!value["BundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudClientInfo.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudClientInfo.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudClientInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientType.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_appUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

}


string CloudClientInfo::GetClientType() const
{
    return m_clientType;
}

void CloudClientInfo::SetClientType(const string& _clientType)
{
    m_clientType = _clientType;
    m_clientTypeHasBeenSet = true;
}

bool CloudClientInfo::ClientTypeHasBeenSet() const
{
    return m_clientTypeHasBeenSet;
}

string CloudClientInfo::GetAppName() const
{
    return m_appName;
}

void CloudClientInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CloudClientInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string CloudClientInfo::GetAppUrl() const
{
    return m_appUrl;
}

void CloudClientInfo::SetAppUrl(const string& _appUrl)
{
    m_appUrl = _appUrl;
    m_appUrlHasBeenSet = true;
}

bool CloudClientInfo::AppUrlHasBeenSet() const
{
    return m_appUrlHasBeenSet;
}

string CloudClientInfo::GetBundleId() const
{
    return m_bundleId;
}

void CloudClientInfo::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool CloudClientInfo::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string CloudClientInfo::GetPackageName() const
{
    return m_packageName;
}

void CloudClientInfo::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool CloudClientInfo::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

