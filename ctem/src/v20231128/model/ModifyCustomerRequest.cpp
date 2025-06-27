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

#include <tencentcloud/ctem/v20231128/model/ModifyCustomerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

ModifyCustomerRequest::ModifyCustomerRequest() :
    m_nameHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_scanTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_scanCronHasBeenSet(false),
    m_isScanNowHasBeenSet(false),
    m_enableCronHasBeenSet(false),
    m_enableScanSubEnterpriseHasBeenSet(false),
    m_enableAuthHasBeenSet(false),
    m_authStartAtHasBeenSet(false),
    m_authEndAtHasBeenSet(false),
    m_authFileHasBeenSet(false),
    m_scanTimeHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_subCompanyLevelHasBeenSet(false),
    m_isIncludeFullScanHasBeenSet(false)
{
}

string ModifyCustomerRequest::ToJsonString() const
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

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_percent, allocator);
    }

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanType.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
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


string ModifyCustomerRequest::GetName() const
{
    return m_name;
}

void ModifyCustomerRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyCustomerRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ModifyCustomerRequest::GetPercent() const
{
    return m_percent;
}

void ModifyCustomerRequest::SetPercent(const int64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool ModifyCustomerRequest::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

string ModifyCustomerRequest::GetScanType() const
{
    return m_scanType;
}

void ModifyCustomerRequest::SetScanType(const string& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool ModifyCustomerRequest::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}

int64_t ModifyCustomerRequest::GetId() const
{
    return m_id;
}

void ModifyCustomerRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyCustomerRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyCustomerRequest::GetScanCron() const
{
    return m_scanCron;
}

void ModifyCustomerRequest::SetScanCron(const string& _scanCron)
{
    m_scanCron = _scanCron;
    m_scanCronHasBeenSet = true;
}

bool ModifyCustomerRequest::ScanCronHasBeenSet() const
{
    return m_scanCronHasBeenSet;
}

bool ModifyCustomerRequest::GetIsScanNow() const
{
    return m_isScanNow;
}

void ModifyCustomerRequest::SetIsScanNow(const bool& _isScanNow)
{
    m_isScanNow = _isScanNow;
    m_isScanNowHasBeenSet = true;
}

bool ModifyCustomerRequest::IsScanNowHasBeenSet() const
{
    return m_isScanNowHasBeenSet;
}

bool ModifyCustomerRequest::GetEnableCron() const
{
    return m_enableCron;
}

void ModifyCustomerRequest::SetEnableCron(const bool& _enableCron)
{
    m_enableCron = _enableCron;
    m_enableCronHasBeenSet = true;
}

bool ModifyCustomerRequest::EnableCronHasBeenSet() const
{
    return m_enableCronHasBeenSet;
}

bool ModifyCustomerRequest::GetEnableScanSubEnterprise() const
{
    return m_enableScanSubEnterprise;
}

void ModifyCustomerRequest::SetEnableScanSubEnterprise(const bool& _enableScanSubEnterprise)
{
    m_enableScanSubEnterprise = _enableScanSubEnterprise;
    m_enableScanSubEnterpriseHasBeenSet = true;
}

bool ModifyCustomerRequest::EnableScanSubEnterpriseHasBeenSet() const
{
    return m_enableScanSubEnterpriseHasBeenSet;
}

bool ModifyCustomerRequest::GetEnableAuth() const
{
    return m_enableAuth;
}

void ModifyCustomerRequest::SetEnableAuth(const bool& _enableAuth)
{
    m_enableAuth = _enableAuth;
    m_enableAuthHasBeenSet = true;
}

bool ModifyCustomerRequest::EnableAuthHasBeenSet() const
{
    return m_enableAuthHasBeenSet;
}

string ModifyCustomerRequest::GetAuthStartAt() const
{
    return m_authStartAt;
}

void ModifyCustomerRequest::SetAuthStartAt(const string& _authStartAt)
{
    m_authStartAt = _authStartAt;
    m_authStartAtHasBeenSet = true;
}

bool ModifyCustomerRequest::AuthStartAtHasBeenSet() const
{
    return m_authStartAtHasBeenSet;
}

string ModifyCustomerRequest::GetAuthEndAt() const
{
    return m_authEndAt;
}

void ModifyCustomerRequest::SetAuthEndAt(const string& _authEndAt)
{
    m_authEndAt = _authEndAt;
    m_authEndAtHasBeenSet = true;
}

bool ModifyCustomerRequest::AuthEndAtHasBeenSet() const
{
    return m_authEndAtHasBeenSet;
}

string ModifyCustomerRequest::GetAuthFile() const
{
    return m_authFile;
}

void ModifyCustomerRequest::SetAuthFile(const string& _authFile)
{
    m_authFile = _authFile;
    m_authFileHasBeenSet = true;
}

bool ModifyCustomerRequest::AuthFileHasBeenSet() const
{
    return m_authFileHasBeenSet;
}

string ModifyCustomerRequest::GetScanTime() const
{
    return m_scanTime;
}

void ModifyCustomerRequest::SetScanTime(const string& _scanTime)
{
    m_scanTime = _scanTime;
    m_scanTimeHasBeenSet = true;
}

bool ModifyCustomerRequest::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

string ModifyCustomerRequest::GetIcon() const
{
    return m_icon;
}

void ModifyCustomerRequest::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool ModifyCustomerRequest::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

int64_t ModifyCustomerRequest::GetQps() const
{
    return m_qps;
}

void ModifyCustomerRequest::SetQps(const int64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool ModifyCustomerRequest::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

int64_t ModifyCustomerRequest::GetSubCompanyLevel() const
{
    return m_subCompanyLevel;
}

void ModifyCustomerRequest::SetSubCompanyLevel(const int64_t& _subCompanyLevel)
{
    m_subCompanyLevel = _subCompanyLevel;
    m_subCompanyLevelHasBeenSet = true;
}

bool ModifyCustomerRequest::SubCompanyLevelHasBeenSet() const
{
    return m_subCompanyLevelHasBeenSet;
}

bool ModifyCustomerRequest::GetIsIncludeFullScan() const
{
    return m_isIncludeFullScan;
}

void ModifyCustomerRequest::SetIsIncludeFullScan(const bool& _isIncludeFullScan)
{
    m_isIncludeFullScan = _isIncludeFullScan;
    m_isIncludeFullScanHasBeenSet = true;
}

bool ModifyCustomerRequest::IsIncludeFullScanHasBeenSet() const
{
    return m_isIncludeFullScanHasBeenSet;
}


