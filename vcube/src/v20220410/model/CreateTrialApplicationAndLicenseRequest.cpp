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

#include <tencentcloud/vcube/v20220410/model/CreateTrialApplicationAndLicenseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

CreateTrialApplicationAndLicenseRequest::CreateTrialApplicationAndLicenseRequest() :
    m_appNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_featureIdsHasBeenSet(false),
    m_xMagicHasBeenSet(false),
    m_companyPermitHasBeenSet(false),
    m_companyTypeHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_planListHasBeenSet(false),
    m_macBundleIdHasBeenSet(false),
    m_winProcessNameHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_domainListHasBeenSet(false)
{
}

string CreateTrialApplicationAndLicenseRequest::ToJsonString() const
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

    if (m_featureIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_featureIds.begin(); itr != m_featureIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_xMagicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMagic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_xMagic, allocator);
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

    if (m_planListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_planList.begin(); itr != m_planList.end(); ++itr)
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

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
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


string CreateTrialApplicationAndLicenseRequest::GetAppName() const
{
    return m_appName;
}

void CreateTrialApplicationAndLicenseRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CreateTrialApplicationAndLicenseRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string CreateTrialApplicationAndLicenseRequest::GetBundleId() const
{
    return m_bundleId;
}

void CreateTrialApplicationAndLicenseRequest::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool CreateTrialApplicationAndLicenseRequest::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string CreateTrialApplicationAndLicenseRequest::GetPackageName() const
{
    return m_packageName;
}

void CreateTrialApplicationAndLicenseRequest::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool CreateTrialApplicationAndLicenseRequest::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

vector<int64_t> CreateTrialApplicationAndLicenseRequest::GetFeatureIds() const
{
    return m_featureIds;
}

void CreateTrialApplicationAndLicenseRequest::SetFeatureIds(const vector<int64_t>& _featureIds)
{
    m_featureIds = _featureIds;
    m_featureIdsHasBeenSet = true;
}

bool CreateTrialApplicationAndLicenseRequest::FeatureIdsHasBeenSet() const
{
    return m_featureIdsHasBeenSet;
}

bool CreateTrialApplicationAndLicenseRequest::GetXMagic() const
{
    return m_xMagic;
}

void CreateTrialApplicationAndLicenseRequest::SetXMagic(const bool& _xMagic)
{
    m_xMagic = _xMagic;
    m_xMagicHasBeenSet = true;
}

bool CreateTrialApplicationAndLicenseRequest::XMagicHasBeenSet() const
{
    return m_xMagicHasBeenSet;
}

string CreateTrialApplicationAndLicenseRequest::GetCompanyPermit() const
{
    return m_companyPermit;
}

void CreateTrialApplicationAndLicenseRequest::SetCompanyPermit(const string& _companyPermit)
{
    m_companyPermit = _companyPermit;
    m_companyPermitHasBeenSet = true;
}

bool CreateTrialApplicationAndLicenseRequest::CompanyPermitHasBeenSet() const
{
    return m_companyPermitHasBeenSet;
}

string CreateTrialApplicationAndLicenseRequest::GetCompanyType() const
{
    return m_companyType;
}

void CreateTrialApplicationAndLicenseRequest::SetCompanyType(const string& _companyType)
{
    m_companyType = _companyType;
    m_companyTypeHasBeenSet = true;
}

bool CreateTrialApplicationAndLicenseRequest::CompanyTypeHasBeenSet() const
{
    return m_companyTypeHasBeenSet;
}

string CreateTrialApplicationAndLicenseRequest::GetCompanyName() const
{
    return m_companyName;
}

void CreateTrialApplicationAndLicenseRequest::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool CreateTrialApplicationAndLicenseRequest::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

vector<string> CreateTrialApplicationAndLicenseRequest::GetPlanList() const
{
    return m_planList;
}

void CreateTrialApplicationAndLicenseRequest::SetPlanList(const vector<string>& _planList)
{
    m_planList = _planList;
    m_planListHasBeenSet = true;
}

bool CreateTrialApplicationAndLicenseRequest::PlanListHasBeenSet() const
{
    return m_planListHasBeenSet;
}

string CreateTrialApplicationAndLicenseRequest::GetMacBundleId() const
{
    return m_macBundleId;
}

void CreateTrialApplicationAndLicenseRequest::SetMacBundleId(const string& _macBundleId)
{
    m_macBundleId = _macBundleId;
    m_macBundleIdHasBeenSet = true;
}

bool CreateTrialApplicationAndLicenseRequest::MacBundleIdHasBeenSet() const
{
    return m_macBundleIdHasBeenSet;
}

string CreateTrialApplicationAndLicenseRequest::GetWinProcessName() const
{
    return m_winProcessName;
}

void CreateTrialApplicationAndLicenseRequest::SetWinProcessName(const string& _winProcessName)
{
    m_winProcessName = _winProcessName;
    m_winProcessNameHasBeenSet = true;
}

bool CreateTrialApplicationAndLicenseRequest::WinProcessNameHasBeenSet() const
{
    return m_winProcessNameHasBeenSet;
}

string CreateTrialApplicationAndLicenseRequest::GetPlatform() const
{
    return m_platform;
}

void CreateTrialApplicationAndLicenseRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool CreateTrialApplicationAndLicenseRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

vector<string> CreateTrialApplicationAndLicenseRequest::GetDomainList() const
{
    return m_domainList;
}

void CreateTrialApplicationAndLicenseRequest::SetDomainList(const vector<string>& _domainList)
{
    m_domainList = _domainList;
    m_domainListHasBeenSet = true;
}

bool CreateTrialApplicationAndLicenseRequest::DomainListHasBeenSet() const
{
    return m_domainListHasBeenSet;
}


