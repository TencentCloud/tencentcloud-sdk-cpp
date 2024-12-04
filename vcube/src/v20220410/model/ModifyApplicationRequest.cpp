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

#include <tencentcloud/vcube/v20220410/model/ModifyApplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

ModifyApplicationRequest::ModifyApplicationRequest() :
    m_applicationIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_winProcessNameHasBeenSet(false),
    m_macBundleIdHasBeenSet(false),
    m_domainListHasBeenSet(false)
{
}

string ModifyApplicationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applicationId, allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_winProcessNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WinProcessName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_winProcessName.c_str(), allocator).Move(), allocator);
    }

    if (m_macBundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MacBundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_macBundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainList.begin(); itr != m_domainList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyApplicationRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ModifyApplicationRequest::SetApplicationId(const uint64_t& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ModifyApplicationRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ModifyApplicationRequest::GetAppName() const
{
    return m_appName;
}

void ModifyApplicationRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool ModifyApplicationRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string ModifyApplicationRequest::GetBundleId() const
{
    return m_bundleId;
}

void ModifyApplicationRequest::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool ModifyApplicationRequest::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string ModifyApplicationRequest::GetPackageName() const
{
    return m_packageName;
}

void ModifyApplicationRequest::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool ModifyApplicationRequest::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string ModifyApplicationRequest::GetWinProcessName() const
{
    return m_winProcessName;
}

void ModifyApplicationRequest::SetWinProcessName(const string& _winProcessName)
{
    m_winProcessName = _winProcessName;
    m_winProcessNameHasBeenSet = true;
}

bool ModifyApplicationRequest::WinProcessNameHasBeenSet() const
{
    return m_winProcessNameHasBeenSet;
}

string ModifyApplicationRequest::GetMacBundleId() const
{
    return m_macBundleId;
}

void ModifyApplicationRequest::SetMacBundleId(const string& _macBundleId)
{
    m_macBundleId = _macBundleId;
    m_macBundleIdHasBeenSet = true;
}

bool ModifyApplicationRequest::MacBundleIdHasBeenSet() const
{
    return m_macBundleIdHasBeenSet;
}

vector<string> ModifyApplicationRequest::GetDomainList() const
{
    return m_domainList;
}

void ModifyApplicationRequest::SetDomainList(const vector<string>& _domainList)
{
    m_domainList = _domainList;
    m_domainListHasBeenSet = true;
}

bool ModifyApplicationRequest::DomainListHasBeenSet() const
{
    return m_domainListHasBeenSet;
}


