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

#include <tencentcloud/es/v20180416/model/UpgradeLicenseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

UpgradeLicenseRequest::UpgradeLicenseRequest() :
    m_instanceIdHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false),
    m_basicSecurityTypeHasBeenSet(false),
    m_forceRestartHasBeenSet(false)
{
}

string UpgradeLicenseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_licenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_voucherIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_voucherIds.begin(); itr != m_voucherIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_basicSecurityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicSecurityType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_basicSecurityType, allocator);
    }

    if (m_forceRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRestart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceRestart, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeLicenseRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeLicenseRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeLicenseRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpgradeLicenseRequest::GetLicenseType() const
{
    return m_licenseType;
}

void UpgradeLicenseRequest::SetLicenseType(const string& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool UpgradeLicenseRequest::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

int64_t UpgradeLicenseRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void UpgradeLicenseRequest::SetAutoVoucher(const int64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool UpgradeLicenseRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> UpgradeLicenseRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void UpgradeLicenseRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool UpgradeLicenseRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}

uint64_t UpgradeLicenseRequest::GetBasicSecurityType() const
{
    return m_basicSecurityType;
}

void UpgradeLicenseRequest::SetBasicSecurityType(const uint64_t& _basicSecurityType)
{
    m_basicSecurityType = _basicSecurityType;
    m_basicSecurityTypeHasBeenSet = true;
}

bool UpgradeLicenseRequest::BasicSecurityTypeHasBeenSet() const
{
    return m_basicSecurityTypeHasBeenSet;
}

bool UpgradeLicenseRequest::GetForceRestart() const
{
    return m_forceRestart;
}

void UpgradeLicenseRequest::SetForceRestart(const bool& _forceRestart)
{
    m_forceRestart = _forceRestart;
    m_forceRestartHasBeenSet = true;
}

bool UpgradeLicenseRequest::ForceRestartHasBeenSet() const
{
    return m_forceRestartHasBeenSet;
}


