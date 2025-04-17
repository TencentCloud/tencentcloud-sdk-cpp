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

#include <tencentcloud/vcube/v20220410/model/ApplicationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

ApplicationInfo::ApplicationInfo() :
    m_appNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_appTypeHasBeenSet(false),
    m_licensesHasBeenSet(false),
    m_licenseKeyHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_licenseUrlHasBeenSet(false),
    m_xMagicsHasBeenSet(false),
    m_macBundleIdHasBeenSet(false),
    m_winProcessNameHasBeenSet(false),
    m_domainListHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nameLimitHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("BundleId") && !value["BundleId"].IsNull())
    {
        if (!value["BundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("AppType") && !value["AppType"].IsNull())
    {
        if (!value["AppType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.AppType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appType = string(value["AppType"].GetString());
        m_appTypeHasBeenSet = true;
    }

    if (value.HasMember("Licenses") && !value["Licenses"].IsNull())
    {
        if (!value["Licenses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.Licenses` is not array type"));

        const rapidjson::Value &tmpValue = value["Licenses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            License item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_licenses.push_back(item);
        }
        m_licensesHasBeenSet = true;
    }

    if (value.HasMember("LicenseKey") && !value["LicenseKey"].IsNull())
    {
        if (!value["LicenseKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.LicenseKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseKey = string(value["LicenseKey"].GetString());
        m_licenseKeyHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.ApplicationId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = value["ApplicationId"].GetUint64();
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("LicenseUrl") && !value["LicenseUrl"].IsNull())
    {
        if (!value["LicenseUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.LicenseUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseUrl = string(value["LicenseUrl"].GetString());
        m_licenseUrlHasBeenSet = true;
    }

    if (value.HasMember("XMagics") && !value["XMagics"].IsNull())
    {
        if (!value["XMagics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.XMagics` is not array type"));

        const rapidjson::Value &tmpValue = value["XMagics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            XMagicInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_xMagics.push_back(item);
        }
        m_xMagicsHasBeenSet = true;
    }

    if (value.HasMember("MacBundleId") && !value["MacBundleId"].IsNull())
    {
        if (!value["MacBundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.MacBundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_macBundleId = string(value["MacBundleId"].GetString());
        m_macBundleIdHasBeenSet = true;
    }

    if (value.HasMember("WinProcessName") && !value["WinProcessName"].IsNull())
    {
        if (!value["WinProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.WinProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_winProcessName = string(value["WinProcessName"].GetString());
        m_winProcessNameHasBeenSet = true;
    }

    if (value.HasMember("DomainList") && !value["DomainList"].IsNull())
    {
        if (!value["DomainList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.DomainList` is not array type"));

        const rapidjson::Value &tmpValue = value["DomainList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domainList.push_back((*itr).GetString());
        }
        m_domainListHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("NameLimit") && !value["NameLimit"].IsNull())
    {
        if (!value["NameLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.NameLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nameLimit = value["NameLimit"].GetUint64();
        m_nameLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }

    if (m_licensesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Licenses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_licenses.begin(); itr != m_licenses.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_licenseKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseKey.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationId, allocator);
    }

    if (m_licenseUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_xMagicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMagics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_xMagics.begin(); itr != m_xMagics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_macBundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MacBundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_macBundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_winProcessNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WinProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_winProcessName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainList.begin(); itr != m_domainList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nameLimit, allocator);
    }

}


string ApplicationInfo::GetAppName() const
{
    return m_appName;
}

void ApplicationInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool ApplicationInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string ApplicationInfo::GetBundleId() const
{
    return m_bundleId;
}

void ApplicationInfo::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool ApplicationInfo::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string ApplicationInfo::GetAppType() const
{
    return m_appType;
}

void ApplicationInfo::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool ApplicationInfo::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

vector<License> ApplicationInfo::GetLicenses() const
{
    return m_licenses;
}

void ApplicationInfo::SetLicenses(const vector<License>& _licenses)
{
    m_licenses = _licenses;
    m_licensesHasBeenSet = true;
}

bool ApplicationInfo::LicensesHasBeenSet() const
{
    return m_licensesHasBeenSet;
}

string ApplicationInfo::GetLicenseKey() const
{
    return m_licenseKey;
}

void ApplicationInfo::SetLicenseKey(const string& _licenseKey)
{
    m_licenseKey = _licenseKey;
    m_licenseKeyHasBeenSet = true;
}

bool ApplicationInfo::LicenseKeyHasBeenSet() const
{
    return m_licenseKeyHasBeenSet;
}

string ApplicationInfo::GetPackageName() const
{
    return m_packageName;
}

void ApplicationInfo::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool ApplicationInfo::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string ApplicationInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void ApplicationInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool ApplicationInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string ApplicationInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void ApplicationInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool ApplicationInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

uint64_t ApplicationInfo::GetApplicationId() const
{
    return m_applicationId;
}

void ApplicationInfo::SetApplicationId(const uint64_t& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ApplicationInfo::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ApplicationInfo::GetLicenseUrl() const
{
    return m_licenseUrl;
}

void ApplicationInfo::SetLicenseUrl(const string& _licenseUrl)
{
    m_licenseUrl = _licenseUrl;
    m_licenseUrlHasBeenSet = true;
}

bool ApplicationInfo::LicenseUrlHasBeenSet() const
{
    return m_licenseUrlHasBeenSet;
}

vector<XMagicInfo> ApplicationInfo::GetXMagics() const
{
    return m_xMagics;
}

void ApplicationInfo::SetXMagics(const vector<XMagicInfo>& _xMagics)
{
    m_xMagics = _xMagics;
    m_xMagicsHasBeenSet = true;
}

bool ApplicationInfo::XMagicsHasBeenSet() const
{
    return m_xMagicsHasBeenSet;
}

string ApplicationInfo::GetMacBundleId() const
{
    return m_macBundleId;
}

void ApplicationInfo::SetMacBundleId(const string& _macBundleId)
{
    m_macBundleId = _macBundleId;
    m_macBundleIdHasBeenSet = true;
}

bool ApplicationInfo::MacBundleIdHasBeenSet() const
{
    return m_macBundleIdHasBeenSet;
}

string ApplicationInfo::GetWinProcessName() const
{
    return m_winProcessName;
}

void ApplicationInfo::SetWinProcessName(const string& _winProcessName)
{
    m_winProcessName = _winProcessName;
    m_winProcessNameHasBeenSet = true;
}

bool ApplicationInfo::WinProcessNameHasBeenSet() const
{
    return m_winProcessNameHasBeenSet;
}

vector<string> ApplicationInfo::GetDomainList() const
{
    return m_domainList;
}

void ApplicationInfo::SetDomainList(const vector<string>& _domainList)
{
    m_domainList = _domainList;
    m_domainListHasBeenSet = true;
}

bool ApplicationInfo::DomainListHasBeenSet() const
{
    return m_domainListHasBeenSet;
}

string ApplicationInfo::GetAppId() const
{
    return m_appId;
}

void ApplicationInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ApplicationInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

uint64_t ApplicationInfo::GetNameLimit() const
{
    return m_nameLimit;
}

void ApplicationInfo::SetNameLimit(const uint64_t& _nameLimit)
{
    m_nameLimit = _nameLimit;
    m_nameLimitHasBeenSet = true;
}

bool ApplicationInfo::NameLimitHasBeenSet() const
{
    return m_nameLimitHasBeenSet;
}

