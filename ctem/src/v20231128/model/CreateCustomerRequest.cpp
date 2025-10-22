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

#include <tencentcloud/ctem/v20231128/model/CreateCustomerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

CreateCustomerRequest::CreateCustomerRequest() :
    m_nameHasBeenSet(false),
    m_scanTypeHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_scanCronHasBeenSet(false),
    m_isScanNowHasBeenSet(false),
    m_enableCronHasBeenSet(false),
    m_enableScanSubEnterpriseHasBeenSet(false),
    m_enableAuthHasBeenSet(false),
    m_authStartAtHasBeenSet(false),
    m_authEndAtHasBeenSet(false),
    m_authFileHasBeenSet(false),
    m_scanTimeHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_subCompanyLevelHasBeenSet(false),
    m_isIncludeFullScanHasBeenSet(false)
{
}

string CreateCustomerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanType.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_percent, allocator);
    }

    if (m_scanCronHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanCron";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanCron.c_str(), allocator).Move(), allocator);
    }

    if (m_isScanNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsScanNow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isScanNow, allocator);
    }

    if (m_enableCronHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCron";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCron, allocator);
    }

    if (m_enableScanSubEnterpriseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableScanSubEnterprise";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableScanSubEnterprise, allocator);
    }

    if (m_enableAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAuth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableAuth, allocator);
    }

    if (m_authStartAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthStartAt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authStartAt.c_str(), allocator).Move(), allocator);
    }

    if (m_authEndAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthEndAt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authEndAt.c_str(), allocator).Move(), allocator);
    }

    if (m_authFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authFile.c_str(), allocator).Move(), allocator);
    }

    if (m_scanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keywords.c_str(), allocator).Move(), allocator);
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_qps, allocator);
    }

    if (m_subCompanyLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubCompanyLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subCompanyLevel, allocator);
    }

    if (m_isIncludeFullScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIncludeFullScan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isIncludeFullScan, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCustomerRequest::GetName() const
{
    return m_name;
}

void CreateCustomerRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCustomerRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCustomerRequest::GetScanType() const
{
    return m_scanType;
}

void CreateCustomerRequest::SetScanType(const string& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool CreateCustomerRequest::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}

int64_t CreateCustomerRequest::GetPercent() const
{
    return m_percent;
}

void CreateCustomerRequest::SetPercent(const int64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool CreateCustomerRequest::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

string CreateCustomerRequest::GetScanCron() const
{
    return m_scanCron;
}

void CreateCustomerRequest::SetScanCron(const string& _scanCron)
{
    m_scanCron = _scanCron;
    m_scanCronHasBeenSet = true;
}

bool CreateCustomerRequest::ScanCronHasBeenSet() const
{
    return m_scanCronHasBeenSet;
}

bool CreateCustomerRequest::GetIsScanNow() const
{
    return m_isScanNow;
}

void CreateCustomerRequest::SetIsScanNow(const bool& _isScanNow)
{
    m_isScanNow = _isScanNow;
    m_isScanNowHasBeenSet = true;
}

bool CreateCustomerRequest::IsScanNowHasBeenSet() const
{
    return m_isScanNowHasBeenSet;
}

bool CreateCustomerRequest::GetEnableCron() const
{
    return m_enableCron;
}

void CreateCustomerRequest::SetEnableCron(const bool& _enableCron)
{
    m_enableCron = _enableCron;
    m_enableCronHasBeenSet = true;
}

bool CreateCustomerRequest::EnableCronHasBeenSet() const
{
    return m_enableCronHasBeenSet;
}

bool CreateCustomerRequest::GetEnableScanSubEnterprise() const
{
    return m_enableScanSubEnterprise;
}

void CreateCustomerRequest::SetEnableScanSubEnterprise(const bool& _enableScanSubEnterprise)
{
    m_enableScanSubEnterprise = _enableScanSubEnterprise;
    m_enableScanSubEnterpriseHasBeenSet = true;
}

bool CreateCustomerRequest::EnableScanSubEnterpriseHasBeenSet() const
{
    return m_enableScanSubEnterpriseHasBeenSet;
}

bool CreateCustomerRequest::GetEnableAuth() const
{
    return m_enableAuth;
}

void CreateCustomerRequest::SetEnableAuth(const bool& _enableAuth)
{
    m_enableAuth = _enableAuth;
    m_enableAuthHasBeenSet = true;
}

bool CreateCustomerRequest::EnableAuthHasBeenSet() const
{
    return m_enableAuthHasBeenSet;
}

string CreateCustomerRequest::GetAuthStartAt() const
{
    return m_authStartAt;
}

void CreateCustomerRequest::SetAuthStartAt(const string& _authStartAt)
{
    m_authStartAt = _authStartAt;
    m_authStartAtHasBeenSet = true;
}

bool CreateCustomerRequest::AuthStartAtHasBeenSet() const
{
    return m_authStartAtHasBeenSet;
}

string CreateCustomerRequest::GetAuthEndAt() const
{
    return m_authEndAt;
}

void CreateCustomerRequest::SetAuthEndAt(const string& _authEndAt)
{
    m_authEndAt = _authEndAt;
    m_authEndAtHasBeenSet = true;
}

bool CreateCustomerRequest::AuthEndAtHasBeenSet() const
{
    return m_authEndAtHasBeenSet;
}

string CreateCustomerRequest::GetAuthFile() const
{
    return m_authFile;
}

void CreateCustomerRequest::SetAuthFile(const string& _authFile)
{
    m_authFile = _authFile;
    m_authFileHasBeenSet = true;
}

bool CreateCustomerRequest::AuthFileHasBeenSet() const
{
    return m_authFileHasBeenSet;
}

string CreateCustomerRequest::GetScanTime() const
{
    return m_scanTime;
}

void CreateCustomerRequest::SetScanTime(const string& _scanTime)
{
    m_scanTime = _scanTime;
    m_scanTimeHasBeenSet = true;
}

bool CreateCustomerRequest::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

string CreateCustomerRequest::GetKeywords() const
{
    return m_keywords;
}

void CreateCustomerRequest::SetKeywords(const string& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool CreateCustomerRequest::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

string CreateCustomerRequest::GetIcon() const
{
    return m_icon;
}

void CreateCustomerRequest::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool CreateCustomerRequest::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

int64_t CreateCustomerRequest::GetQps() const
{
    return m_qps;
}

void CreateCustomerRequest::SetQps(const int64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool CreateCustomerRequest::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

int64_t CreateCustomerRequest::GetSubCompanyLevel() const
{
    return m_subCompanyLevel;
}

void CreateCustomerRequest::SetSubCompanyLevel(const int64_t& _subCompanyLevel)
{
    m_subCompanyLevel = _subCompanyLevel;
    m_subCompanyLevelHasBeenSet = true;
}

bool CreateCustomerRequest::SubCompanyLevelHasBeenSet() const
{
    return m_subCompanyLevelHasBeenSet;
}

bool CreateCustomerRequest::GetIsIncludeFullScan() const
{
    return m_isIncludeFullScan;
}

void CreateCustomerRequest::SetIsIncludeFullScan(const bool& _isIncludeFullScan)
{
    m_isIncludeFullScan = _isIncludeFullScan;
    m_isIncludeFullScanHasBeenSet = true;
}

bool CreateCustomerRequest::IsIncludeFullScanHasBeenSet() const
{
    return m_isIncludeFullScanHasBeenSet;
}


