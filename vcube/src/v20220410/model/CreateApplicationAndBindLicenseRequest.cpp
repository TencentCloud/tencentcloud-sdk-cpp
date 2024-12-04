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

#include <tencentcloud/vcube/v20220410/model/CreateApplicationAndBindLicenseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

CreateApplicationAndBindLicenseRequest::CreateApplicationAndBindLicenseRequest() :
    m_appNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_companyPermitHasBeenSet(false),
    m_companyTypeHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_xMagicResourceIdsHasBeenSet(false),
    m_macBundleIdHasBeenSet(false),
    m_winProcessNameHasBeenSet(false),
    m_domainListHasBeenSet(false),
    m_platformHasBeenSet(false)
{
}

string CreateApplicationAndBindLicenseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_companyPermitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyPermit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyPermit.c_str(), allocator).Move(), allocator);
    }

    if (m_companyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyType.c_str(), allocator).Move(), allocator);
    }

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_xMagicResourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMagicResourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_xMagicResourceIds.begin(); itr != m_xMagicResourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_macBundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MacBundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_macBundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_winProcessNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WinProcessName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_winProcessName.c_str(), allocator).Move(), allocator);
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

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateApplicationAndBindLicenseRequest::GetAppName() const
{
    return m_appName;
}

void CreateApplicationAndBindLicenseRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CreateApplicationAndBindLicenseRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string CreateApplicationAndBindLicenseRequest::GetBundleId() const
{
    return m_bundleId;
}

void CreateApplicationAndBindLicenseRequest::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool CreateApplicationAndBindLicenseRequest::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string CreateApplicationAndBindLicenseRequest::GetPackageName() const
{
    return m_packageName;
}

void CreateApplicationAndBindLicenseRequest::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool CreateApplicationAndBindLicenseRequest::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

vector<string> CreateApplicationAndBindLicenseRequest::GetResourceIds() const
{
    return m_resourceIds;
}

void CreateApplicationAndBindLicenseRequest::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool CreateApplicationAndBindLicenseRequest::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

string CreateApplicationAndBindLicenseRequest::GetCompanyPermit() const
{
    return m_companyPermit;
}

void CreateApplicationAndBindLicenseRequest::SetCompanyPermit(const string& _companyPermit)
{
    m_companyPermit = _companyPermit;
    m_companyPermitHasBeenSet = true;
}

bool CreateApplicationAndBindLicenseRequest::CompanyPermitHasBeenSet() const
{
    return m_companyPermitHasBeenSet;
}

string CreateApplicationAndBindLicenseRequest::GetCompanyType() const
{
    return m_companyType;
}

void CreateApplicationAndBindLicenseRequest::SetCompanyType(const string& _companyType)
{
    m_companyType = _companyType;
    m_companyTypeHasBeenSet = true;
}

bool CreateApplicationAndBindLicenseRequest::CompanyTypeHasBeenSet() const
{
    return m_companyTypeHasBeenSet;
}

string CreateApplicationAndBindLicenseRequest::GetCompanyName() const
{
    return m_companyName;
}

void CreateApplicationAndBindLicenseRequest::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool CreateApplicationAndBindLicenseRequest::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

vector<string> CreateApplicationAndBindLicenseRequest::GetXMagicResourceIds() const
{
    return m_xMagicResourceIds;
}

void CreateApplicationAndBindLicenseRequest::SetXMagicResourceIds(const vector<string>& _xMagicResourceIds)
{
    m_xMagicResourceIds = _xMagicResourceIds;
    m_xMagicResourceIdsHasBeenSet = true;
}

bool CreateApplicationAndBindLicenseRequest::XMagicResourceIdsHasBeenSet() const
{
    return m_xMagicResourceIdsHasBeenSet;
}

string CreateApplicationAndBindLicenseRequest::GetMacBundleId() const
{
    return m_macBundleId;
}

void CreateApplicationAndBindLicenseRequest::SetMacBundleId(const string& _macBundleId)
{
    m_macBundleId = _macBundleId;
    m_macBundleIdHasBeenSet = true;
}

bool CreateApplicationAndBindLicenseRequest::MacBundleIdHasBeenSet() const
{
    return m_macBundleIdHasBeenSet;
}

string CreateApplicationAndBindLicenseRequest::GetWinProcessName() const
{
    return m_winProcessName;
}

void CreateApplicationAndBindLicenseRequest::SetWinProcessName(const string& _winProcessName)
{
    m_winProcessName = _winProcessName;
    m_winProcessNameHasBeenSet = true;
}

bool CreateApplicationAndBindLicenseRequest::WinProcessNameHasBeenSet() const
{
    return m_winProcessNameHasBeenSet;
}

vector<string> CreateApplicationAndBindLicenseRequest::GetDomainList() const
{
    return m_domainList;
}

void CreateApplicationAndBindLicenseRequest::SetDomainList(const vector<string>& _domainList)
{
    m_domainList = _domainList;
    m_domainListHasBeenSet = true;
}

bool CreateApplicationAndBindLicenseRequest::DomainListHasBeenSet() const
{
    return m_domainListHasBeenSet;
}

string CreateApplicationAndBindLicenseRequest::GetPlatform() const
{
    return m_platform;
}

void CreateApplicationAndBindLicenseRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool CreateApplicationAndBindLicenseRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}


