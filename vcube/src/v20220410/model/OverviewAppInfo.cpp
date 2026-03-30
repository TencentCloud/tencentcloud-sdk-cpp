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

#include <tencentcloud/vcube/v20220410/model/OverviewAppInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

OverviewAppInfo::OverviewAppInfo() :
    m_idHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_macBundleIdHasBeenSet(false),
    m_winProcessNameHasBeenSet(false),
    m_domainListHasBeenSet(false)
{
}

CoreInternalOutcome OverviewAppInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewAppInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewAppInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("BundleId") && !value["BundleId"].IsNull())
    {
        if (!value["BundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewAppInfo.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewAppInfo.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("MacBundleId") && !value["MacBundleId"].IsNull())
    {
        if (!value["MacBundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewAppInfo.MacBundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_macBundleId = string(value["MacBundleId"].GetString());
        m_macBundleIdHasBeenSet = true;
    }

    if (value.HasMember("WinProcessName") && !value["WinProcessName"].IsNull())
    {
        if (!value["WinProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewAppInfo.WinProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_winProcessName = string(value["WinProcessName"].GetString());
        m_winProcessNameHasBeenSet = true;
    }

    if (value.HasMember("DomainList") && !value["DomainList"].IsNull())
    {
        if (!value["DomainList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OverviewAppInfo.DomainList` is not array type"));

        const rapidjson::Value &tmpValue = value["DomainList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domainList.push_back((*itr).GetString());
        }
        m_domainListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewAppInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

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

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
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

}


uint64_t OverviewAppInfo::GetId() const
{
    return m_id;
}

void OverviewAppInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool OverviewAppInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string OverviewAppInfo::GetAppName() const
{
    return m_appName;
}

void OverviewAppInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool OverviewAppInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string OverviewAppInfo::GetBundleId() const
{
    return m_bundleId;
}

void OverviewAppInfo::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool OverviewAppInfo::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string OverviewAppInfo::GetPackageName() const
{
    return m_packageName;
}

void OverviewAppInfo::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool OverviewAppInfo::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string OverviewAppInfo::GetMacBundleId() const
{
    return m_macBundleId;
}

void OverviewAppInfo::SetMacBundleId(const string& _macBundleId)
{
    m_macBundleId = _macBundleId;
    m_macBundleIdHasBeenSet = true;
}

bool OverviewAppInfo::MacBundleIdHasBeenSet() const
{
    return m_macBundleIdHasBeenSet;
}

string OverviewAppInfo::GetWinProcessName() const
{
    return m_winProcessName;
}

void OverviewAppInfo::SetWinProcessName(const string& _winProcessName)
{
    m_winProcessName = _winProcessName;
    m_winProcessNameHasBeenSet = true;
}

bool OverviewAppInfo::WinProcessNameHasBeenSet() const
{
    return m_winProcessNameHasBeenSet;
}

vector<string> OverviewAppInfo::GetDomainList() const
{
    return m_domainList;
}

void OverviewAppInfo::SetDomainList(const vector<string>& _domainList)
{
    m_domainList = _domainList;
    m_domainListHasBeenSet = true;
}

bool OverviewAppInfo::DomainListHasBeenSet() const
{
    return m_domainListHasBeenSet;
}

